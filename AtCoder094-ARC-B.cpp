/*
AC because of editorail. Come to this code later to understand. There are 4 cases basically.
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    ll q;
    cin >> q;

    while(q--) {

        ll a, b;
        cin >> a >> b;

        if (a == b || a + 1 == b) {
            cout << 2 * a - 2 << endl;
        } else {
            ll p = a * b;
            ll res = (sqrt(p));
            if(res * res == p)res--;
            if (res * (res + 1) >= p)cout << 2 * res - 2 << endl;
            else cout << 2 * res - 1 << endl;
        }
    }

    return 0;
}
