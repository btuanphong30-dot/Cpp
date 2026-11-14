#include <bits/stdc++.h>
using namespace std;

string sonhiphan(int x) {
    if(x == 0) return "0";
    stack<int> st;
    while(x > 0) {
        st.push(x % 2);
        x /= 2;
    }
    string kq ="";
    while(!st.empty()) {
        kq += char('0' + (st.top()));
        st.pop();
    }
    return kq;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        for(int i = 1; i <= x; i++) {
            cout << sonhiphan(i) << " ";
        }
        cout << endl;
    }
    return 0;
}
