#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve() {
    int n, temp;
    ll count = 0;
    cin >> n;
    unordered_map<int, int> sums;
    for(int i=0;i<n;i++) {
        cin >> temp;
        count += sums[temp-i];
        sums[temp-i]++;
    }
    cout << count << endl;
}
int main (){
    fastio;
    int t=1;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}