#include <bits/stdc++.h>
#define ll long long 
#define pb push_back
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define fr(i,a,b) for(int i=a;i<b;i++)
#define loop(x,n) for(int x=0;x<n;x++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
using namespace std;
void precal(){

}
void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    fr(i,0,n) cin>>a[i];
    cout<<"printed using macros: "<<endl;
    loop(i,n) cout<<a[i]<<" ";
    cout<<endl;

    sort(all(a));
    loop(i,n) cout<<a[i]<<" ";


}
int main(){
    fast_io;
    cout<<fixed;
    cout<<setprecision(10);
    precal();
    ll t=1;
    //cin>>t;
    for(ll i=1;i<=t;i++){
        //cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;

}