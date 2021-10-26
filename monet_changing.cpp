#include <bits/stdc++.h>#define endl '\n'using namespace std;typedef long long ll;typedef unsigned long long ull;int main(){	ios::sync_with_stdio(0); cin.tie(); cout.tie();
	int n, change, a[] = {500, 100, 50, 10, 5, 1};
	cin >> n;
	change = 1000 - n;
	int i = 0, res = 0;
	while(change>0)
	{
		while (change>=a[i])
		{
			change -= a[i];
			res ++;
		}
		i++;
	}
	cout << res;}
