#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  int n;cin>>n;
  int y=n/365;
  int m=n%365;
  int mo=m/30;
  int d=m%30;
  cout<<y<<" "<<"years";nl;
  cout<<mo<<" "<<"months";nl;
  cout<<d<<" "<<"days";nl;
}
int main(){
    fast;
 solve();
}
