
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    ll a,b;cin>>a>>b;
    ll s=a+b;
    ll d=a-b;
    ll mul=a*b;
    cout<<a<<" + "<<b<<" = "<<s;nl;
    cout<<a<<" * "<<b<<" = "<<mul;nl;
    cout<<a<<" - "<<b<<" = "<<d;nl;
}
int main(){
    fast;
 solve();
}

