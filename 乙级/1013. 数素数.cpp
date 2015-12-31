//解法一
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

bool isPrimeNum(int n){  
for (int i=2;i<=sqrt(n);i++){
  if (n%i == 0 ) return false;
  }
  return true;
}

int main(){
  vector<int> v;   
  int num=0,i=2;
  int m,n;
  cin>>m>>n;

while(true){ 
  if(isPrimeNum(i)) {
    num++;
    if(num>=m && num <=n) v.push_back(i);
    
    if(num>n) break;
  }
  i++;
}
  
for(i=0;i<(v.size()-1);i++){
  if((i+1)%10 == 0) cout<<v[i]<<endl;
    else cout<<v[i]<<' ';
  }
 cout<<v[i];
  return 0;  
}
  
  
 //解法二
#include <iostream>
#include <math.h>
using namespace std;

bool isPrimeNum(int n){  
for (int i=2;i<=sqrt(n);i++){
  if (n%i == 0 ) return false;
  }
  return true;
}

int main(){
  int num=0,i=2;
  int m,n,t=0;
  cin>>m>>n;

while(true){ 
  if(isPrimeNum(i)) {
    num++;
    if(num>=m && num <n){
      t++;
      if( (t%10) ==0) cout<<i<<endl;
      else cout<<i<<' ';
    }
    if(num == n) cout<<i; 
    
    if(num>n) break;
  }
  i++;
}

  return 0;  
} 