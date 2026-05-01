#include <bits/stdc++.h>
using namespace std;
//https://www.codechef.com/problems/NUM239

int main() {
    int T;
    cin >> T;
    while (T--) {
        int l, r;
        cin >> l >> r;
        int cnt = 0;
        for (int i = l; i <= r; i++) {
            if (i % 10 == 2 || i % 10 == 3 || i % 10 == 9) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}
