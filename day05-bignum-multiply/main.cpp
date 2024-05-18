#include <bits/stdc++.h>
#define vi vector<int>
#define FOR(i,a,b,c) for (int i=a; i<b; i+=c)
#define endl "\n"

using namespace std;

void del_zero(vi &a) {
    reverse(a.begin(), a.end());

    while (a.size()>=2)
        if (a.back()==0) a.pop_back();
        else break;

    reverse(a.begin(), a.end());
}

int int_to_vi(int n) {
    vi res;
    if (n==0) {
        res.push_back(n);
        return res;
    }

    while(n) {
        res.push_back(n%10);
        n/=10;
    }
    return res;
}

vi operator * (vi &a, vi &b) {
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());

    vi c(a.size()+b.size()+1);
    FOR(i,0,(int) a.size(),1) {
        FOR(j,0,(int) b.size(),1) {
            c[i+j]+=(a[i]*b[j]);
            c[i+j+1]+=(c[i+j]/10);
            c[i+j]%=10;
        }
    }
    c.push_back(0);

    FOR(i,0,(int) c.size()-1,1) {
        c[i+1]+=(c[i]/10);
        c[i]%=10;
    }

    reverse(c.begin(), c.end());
    del_zero(c);

    return c;
}

int main()
{
    cin.tie(0)->sync_with_stdio(false);

    vi a,b;
    int n;
    cin >> a >> b >> n;
    cout << a*int_to_vi(n) << endl;

    cout << a*b << endl;

    return 0;
}
