#include <bits/stdc++.h>

using namespace std;

const int N = 1010;
int fa1[N], fa2[N];

int find1(int x) {
    if (x != fa1[x]) fa1[x] = find1(fa1[x]);
    return fa1[x];
}

int find2(int x) {
    if (x != fa2[x]) fa2[x] = find2(fa2[x]);
    return fa2[x];
}

int main() {
    ios::sync_with_stdio(false), cin.tie(0);
    
    int n, m1, m2;
    cin >> n >> m1 >> m2;
    for (int i = 1; i <= n; i++) fa1[i] = i, fa2[i] = i;
    while (m1--) {
        int a, b;
        cin >> a >> b;
        fa1[find1(a)] = find1(b);
    }
    
    while (m2--) {
        int a, b;
        cin >> a >> b;
        fa2[find2(a)] = find2(b);
    }
    
    vector<pair<int, int>> add;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int u1 = find1(i), v1 = find1(j);
            int u2 = find2(i), v2 = find2(j);
            if (u1 != v1 && u2 != v2) {
                add.push_back({i, j});
                fa1[u1] = v1;
                fa2[u2] = v2;   
            }
        }
    }
    
    cout << add.size() << endl;
    for (int i = 0; i < add.size(); i++) 
        cout << add[i].first << " " << add[i].second << endl;
    
    return 0;
}

