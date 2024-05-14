#include <bits/stdc++.h>
#define FOR(i,a,b,c) for (int i=a; i<b; i+=c)
#define endl "\n"
#define vi vector<int>
#define pii pair<int,int>
#define fi first
#define se second
using namespace std;

int binarySearch(int arr[], int value, int left, int right) {
    while(left<right) {
        int middle = (left+right)/2;
        if (arr[middle] == value) return middle;
        if (value>arr[middle]) left = middle+1;
        else right = middle-1;
    }
    return -1;
}

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    int arr[n+1];

    FOR(i,0,n,1) cin >> arr[i];

    cout << binarySearch(arr,k,0,n) << endl;

    return 0;
}
