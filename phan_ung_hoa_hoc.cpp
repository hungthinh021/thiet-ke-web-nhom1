#include<iostream>
#include<vector>
using namespace std;
int m, n;
short kt[51][51] = {0};
unsigned long long res = 1;

void nhap() {
	cin >> n >> m;
	for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        kt[u][v] = 1;
        kt[v][u] = 1;
	}
}

void solve() {
	vector<int> vt;
	for (int i=1; i<=n; i++)
    {
        for (int j=0; j<vt.size(); j++)
            if (kt[i][vt[j]]==1)
            {
                res*=2;
            }
        vt.push_back(i);
    }
    cout << res;
}

int main() {
	nhap();
    solve();
}
