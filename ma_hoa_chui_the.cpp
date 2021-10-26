#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve(string &s, int n)
{
	string chui;
	while (n--)
	{
		cin >> chui;
		int len = chui.length();
		int pos = s.find(chui);
		while (pos!= string::npos)
		{
			if ((pos==0 || s[pos-1] == ' ') && (pos+len==s.size() || s[pos+len]==' '))
			{
				for (int i=pos; i<pos+len; i++)
					s[i] = '*';
			}
			pos = s.find(chui, pos+1);
		}
	}
}

int main(){
	ios::sync_with_stdio(0); cin.tie(); cout.tie();
	string s;
	getline(cin, s);
	int n;
	cin >> n;
	solve(s, n);
	cout << s;
}

