#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   char   ch;cin>>ch;
   if(ch>='0' && ch<='9') cout<<"IS DIGIT"<<endl;
   else if(ch>='A' && ch<='Z') {
    cout<<"ALPHA"<<endl;
    cout<<"IS CAPITAL"<<endl;
   }
   else {
    cout<<"ALPHA"<<endl;
    cout<<"IS SMALL"<<endl;
   }
}
int main(){
    fast;
 solve();
}
