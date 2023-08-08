#include<bits/stdc++.h>
using namespace std;
int arr[30];

int main(){
  int n;scanf("%d",&n);
  int w=0;
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    w+=arr[i];
  }
  int tot=1<<n;
  int ans=INT_MAX;
  for(int mask=0;mask<tot;mask++){
    int sum=0;
    for(int i=0;i<n;i++){
        int setbit=1<<i;
        if((mask&setbit)!=0){
            sum+=arr[i];
        }
    }
    int tmp=abs(2*sum-w);
    ans=min(ans,tmp);
  }
  printf("%d\n",ans);
return 0;
}
