#include <bits/stdc++.h>
using namespace std;

int n; // kich co me cung
vector<string> kq; // ket qua
string path; // con duong da di qua
vector<vector<int>> a;

void quaylui(int i, int j) {
    if(i == n -1 && j == n -1) {
        kq.push_back(path);
        return;
    }

    if(i + 1 < n && a[i+1][j] == 1) {
        path.push_back('D');
        quaylui(i + 1,j);
        path.pop_back();
    }
    if(j + 1 < n && a[i][j+1] == 1) {
        path.push_back('R');
        quaylui(i, j+1);
        path.pop_back();
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        kq.clear();
        cin >> n;
        vector<vector<int>> vt;
        for(int i = 0; i < n; i++) {
            vector<int> vt2;
            for(int j = 0; j < n; j++) {
                int x; 
                cin >> x;
                vt2.push_back(x);
            }
            vt.push_back(vt2);
        }
        a = vt;

        if( a[0][0] == 1 && a[n-1][n-1] == 1) {
            quaylui(0,0);
        }
        if(kq.empty()) {
            cout << -1 << endl;
        } else {
            for(int i = 0; i < kq.size(); i++) {
                cout << kq[i];
                if(i + 1 < kq.size()) cout << " ";
            }
            cout << endl;
        }
    }
    return 0;
}