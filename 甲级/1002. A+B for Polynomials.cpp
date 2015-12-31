#include <iostream>
using namespace std;

int main(){
int n,ex,first;
  float co,a[1001]={0},b[1001]={0};

  cin>>n;
  for(int i=0;i<n;i++){
   cin>>ex>>co;
   a[ex]=co;
  }

  cin>>n;
  for(int i=0;i<n;i++){
   cin>>ex>>co;
   b[ex]=co;
  }
 
  for (int i=0;i<1001;i++) b[i]+=a[i];
  
  n=0;
  for(int i=0;i<1001;i++){
  if(b[i]!=0) n++; 
  }
  
  for(int i=0;i<1001;i++){
    if(b[i]!=0) {
    first=i;
    break;
    }
  }
  
  if(n==0){
  cout<<0;
    return 0;
  }

  cout<<n<<' ';
  for(int i=1000;i>first;i--){
  if(b[i]!=0) cout<<i<<' '<<b[i]<<' ';
  }
  cout<<first<<' '<<b[first];
  
  return 0;
  
}