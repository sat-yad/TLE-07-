#include <bits/stdc++.h>
using namespace std;
#define ll               long long
#define uin              unsigned int
#define ull              unsigned long long
#define ld               long double 
#define fl(i,w,n)        for(ll i=w;i<n;i++)
#define rfl(i,w,n)       for(ll i=w;i>=n;i--)
#define  F              first
#define  S             second
#define  B              begin()
#define  E               end()
#define EB               emplace_back
#define PB               push_back
// #define P                pop()
#define PRES(c,x)        ((c).find(x)!=(c).end())
#define all(x)           x.begin(), x.end()
typedef vector<string>   vs;
typedef pair<int,int>    pii;
typedef pair<ll,ll>      pll;
typedef vector<int>      vi;
typedef vector<ll>       vl;
typedef vector<vi>       vvi;
typedef vector<vl>       vvl;
typedef vector<pii>      vpii;
typedef vector<pll>      vpll;
#define um(x, y)          unordered_map<x, y>
#define us(x)             unordered_set<x>
// #define mp                  map ii 
#define mpl                 map lii
#define mem1(a)                memset(a,-1,sizeof(a))
#define mem0(a)                memset(a,0,sizeof(a))
#define sum(a)          ( accumulate ((a).begin(), (a).end(), 0ll))
#define mine(a)         (*min_element((a).begin(), (a).end()))
#define maxe(a)         (*max_element((a).begin(), (a).end()))
#define mini(a)         ( min_element((a).begin(), (a).end()) - (a).begin())
#define maxi(a)          ( max_element((a).begin(), (a).end()) - (a).begin())
#define lowb(a, x)      ( lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define uppb(a, x)      ( upper_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define nl               <<"\n";
#define nll              cout<<"\n";
#define Yes              cout<<"Yes"<<"\n";
#define No               cout<<"No"<<"\n";
#define PI               3.1415926535897932384626
#define SET(n)           cout << fixed << setprecision(n)
#define get(s)              getline(cin, s)
#define ppc                 __builtin_popcount
#define ppcll               __builtin_popcountll
#define clz                 __builtin_clz   
#define clzll               __builtin_clzll
#define ctz                 __builtin_ctz
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
const ll mod=1000000007;
void onjudge(){
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
}

// ll findSum(vector<ll> &vec,ll j,ll k){
//     if (j == 0) return vec[k];
//     return vec[k]-vec[j-1];
// }
void solve() {



        ll n;cin>>n;
        ll a[n];
        um(ll,ll) mp;
        fl(i,0,n){
            cin>>a[i];
            mp[a[i]]++;
        }
        ll cnt=0;
        for(auto i:mp){
            if(i.S>=2) cnt++;
        }
        cout<<cnt;nll;
        // ll k,q,a,mn=INT_MAX;cin>>k>>q;
        // fl(i,0,k){cin>>a;mn=min(mn,a);}
        // while(q--){
        //     cin>>a;
        //     if(mn>a) cout<<a<<" ";
        //     else cout<<mn-1<<" ";
        //     // cout<<mn<<" ";
        // }
        // nll;



        // string s;cin>>s;
        // int j=s.find("11");
        // int i=s.rfind("00");
        // // ll j=s.find("11");
        // if(j!=-1 && i!=-1 && i>j) cout<<"NO";
        // else cout<<"YES";
        // nll;


        // h-d

        // ll H,D;cin>>H>>D;
        // ll h,d;cin>>h>>d;
        // ll k,w,a;cin>>k>>w>>a;
        // fl(i,0,k+1){
        //     ll Hc=H+a*(i);
        //     ll Dc=D+w*(k-i);
        //     if((Hc+d-1)/d >=(h+Dc-1)/Dc){cout<<"YES";nll;return;}
        // }
        // cout<<"NO";
        // nll;

        // string s;cin>>s;
        // int cnt=0;
        // fl(i,0,s.length()){
        //     if(cnt && s[i]=='B') cnt--;
        //     else cnt++;
        // }
        // cout<<cnt;nll;


        // ll n,k;cin>>n>>k;
        // ll cnt=0;
        // string s;cin>>s;
        // fl(i,0,n/2){
        //     if(s[i]==s[n-i-1]) cnt++;
        //     else break;
        // }

        // if(cnt>=k && (2*k+1)<=n) cout<<"YES";
        // else cout<<"NO";
        // nll;
        // cout<<9*n<<" "<<8*n;nll;
    }
int main(){

    fast;
    // onjudge();
ll t;
cin>>t;
while(t--){
 solve();
}
}

// C:\Users\Asus\AppData\Roaming\Sublime Text\Packages\User