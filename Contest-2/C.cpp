#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  ll n,k,a;cin>>n>>k;
  while(n){
    int cnt=k,mn=INT_MAX;;
    while(cnt-- && n){
      cin>>a;
      if(a<mn) mn=a;
      n--;
    }
    cout<<mn<<" ";
  }
}
int main(){
    fast;
 solve();
}
