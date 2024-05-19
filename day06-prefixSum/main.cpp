#include <bits/stdc++.h>
#define FOR(i,a,b,c) for (int i=a; i<b; i+=c)
#define FOD(i,a,b,c) for (int i=a; i>b; i-=c)
#define endl "\n"
using namespace std;

void fillPrefixSum(int arr[], int n, int prefixSum[])
{
    prefixSum[0] = arr[0];
    FOR(i,1,n,1) prefixSum[i] = prefixSum[i - 1] + arr[i];
}

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    int n;
    cin >> n;
    int arr[n+1];

    FOR(i,0,n,1) cin >> arr[i];

    int prefixSum[n+1];

    fillPrefixSum(arr, n, prefixSum);
    FOR(i,0,n,1) cout << prefixSum[i] << " ";


    return 0;
}
