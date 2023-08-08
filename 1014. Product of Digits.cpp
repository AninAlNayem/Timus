#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;scanf("%d",&n);
  if(n<=9){
    if(n>0)
        printf("%d\n",n);
    else printf("10\n");
  }
  else{
    vector<int>d;for(int i=2;i<=9;i++)d.push_back(i);
    vector<int>ans;
    for(int i=d.size()-1;i>=0;i--){
        if(n%d[i]==0){
            while(n%d[i]==0){
                ans.push_back(d[i]);
                n=n/d[i];
            }
        }
    }
    if(n>9)printf("-1\n");
    else{
        for(int i=ans.size()-1;i>=0;i--)
            printf("%d",ans[i]);
        printf("\n");
    }
  }
 return 0;
}
