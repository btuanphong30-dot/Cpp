#include <bits/stdc++.h>
using namespace std;

vector<int> np;
int n, k;

void sinh() {
    if(np.size() == n) {
        int Kbit1 = 0;
        for(auto i : np) if(i == 1) Kbit1++;
        if(Kbit1 == k) {
            for(auto i : np) {
                cout << i;
            }
            cout << endl;
            
        }
        return;
    }
    for(int i =0; i <= 1; i++) {
        np.push_back(i);
        sinh();
        np.pop_back();
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        np.clear();
        sinh();
    }
    return 0;
}