#include <bits/stdc++.h>#define endl '\n'using namespace std;typedef long long ll;typedef unsigned long long ull;int main(){	ios::sync_with_stdio(0); cin.tie(); cout.tie();
	string a, b;
	cin >> a >> b;
	a = " " + a;
	b = " " + b;
	int lena = a.size(), lenb = b.size();
	int qh[lena][lenb];
	for (int i=0; i<lena; i++)
	{
		for (int j=0; j<lenb; j++)
		{
			if (i==0 || j==0)
			{
				if (j==0)
					qh[i][0] = i;
				else
					qh[0][j] = j;
				continue;
			}
			else
			if (a[i]==b[j])
			{
				qh[i][j] = qh[i-1][j-1];
			}
			else
				qh[i][j] = min(min(qh[i-1][j], qh[i-1][j-1]), qh[i][j-1]) + 1;
		}
	}
	cout << qh[lena-1][lenb-1];}
