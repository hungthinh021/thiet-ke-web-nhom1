#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

map<int, int> mp;
int d[100001] = {};
void solve(int n)
{
	queue<int> q;
	q.push(n);
	priority_queue<int, vector<int>, greater<int> > pri_q;
	while (!q.empty())
	{
		int t = q.front();
		pri_q.push(t);
		q.pop();
		for (int i=2; i*i<=t; i++)
		{
			if (t%i==0)
			{
				int _i = i;
				int j = t/i; //j~b i~a
				while (_i--)
				{
					j++;
					int k = _i*j;
					if (d[k]==0)
					{
						q.push(k);
						d[k]++;
					}
				}
			}
		}
	}
	while (!pri_q.empty())
	{
		cout << pri_q.top() << ' ';
		pri_q.pop();
	}
}

int main()
{
	ios::sync_with_stdio(0); cin.tie(); cout.tie();
	int n;
	cin >> n;
	solve(n);
}

