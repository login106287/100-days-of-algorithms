#include <bits/stdc++.h>
#define ll long long
#define FOR(i,a,b,c) for (int i=(a),_b=(b);i<b;i+=c)
#define endl "\n"
#define MAX 1000000

using namespace std;

bool check[MAX+7];
void sang() {
    FOR(i,2,MAX,1) check[i]=1;

    FOR(i,2,MAX,1) {
        if (check[i]) {
            FOR(j,2*i,MAX,i) check[j]=0;
        }
    }
}


int main() {
    cin.tie(0)->sync_with_stdio(false);
    ll n;
    cin >> n;

    sang();
    if (check[n]) cout << "true" << endl;
    else cout << "false" << endl;

    return 0;
}
