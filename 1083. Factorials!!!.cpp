#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

  ll n;
  string s;
  cin>>n;
  cin>>s;
  ll k=s.length();
  ll ans=n,i=1;

  while(1){
    ll a=n-i*k;
    if(a<=0)break;
    ans*=a;
    i++;
  }cout<<ans;

}
