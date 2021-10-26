#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
	ios::sync_with_stdio(0); cin.tie(); cout.tie();
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[300][300];
		for(int i=0; i<2*n; i++)
			for (int j=0; j<2*n; j++)
				cin >> a[i][j];
		
		int res = 0;
		for(int i=0; i<n; i++)
			for (int j=0; j<n; j++)
				res += max(max(a[i][j], a[i][2*n-j-1]), max(a[2*n-i-1][j], a[2*n-i-1][2*n-j-1]));
		cout << res << endl;
	}
	
}

