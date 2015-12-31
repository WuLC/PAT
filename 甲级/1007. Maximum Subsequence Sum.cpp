#include <iostream>
using namespace std;

int main(){
int n;
int a[10000];
cin>>n;
int temp=0,t,sum,sn=0,en=n-1;
for(int i=0;i<n;i++)
   cin>>a[i];

  for(int i=0;i<n;i++){
    if( temp+a[i] < 0){
      temp=0;
      t=i+1;
    }
    else if(temp+a[i]==0&&sum==0){
      sn=t;
      en=i;
    }
    else{
    temp+=a[i];
      if(temp>sum){
      sum=temp;
      sn=t;
      en=i;
      }
    }
  }
  
cout<<sum<<' '<<a[sn]<<' '<<a[en];
 return 0;
  
}