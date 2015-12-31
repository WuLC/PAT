#include <iostream>
#include <math.h>
using namespace std;
 
bool isPrimeNum(int n){
  for (int i=2;i<=sqrt(n);i++){
  if (n%i == 0)  return false;
  }
  return true;
}

int main(){
int n,pairs=0;
int pn[10000];
pn[0]=1;pn[1]=2;
int num=2;
cin>>n;
  for (int i=3;i<=n;i++){
    if (isPrimeNum(i)) {
      pn[num]=i;
      num++;
    }
  }
 
  for (int i=0;i<num-1;i++){
    if( (pn[i+1]-pn[i]) == 2 ) pairs++;
  }
  
cout<<pairs;
  
return 0;
}