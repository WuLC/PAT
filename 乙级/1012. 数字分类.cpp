#include <iostream>
#include <vector>
using namespace std;

int main(){
int n,temp;
int a1=0,a2=0,a3=0,a5=0,flag2=0,flag22=0;
vector<int> v;
float a4=0,n4=0;
  cin>>n;
for (int i=0;i<n;i++){
  cin>>temp;
  v.push_back(temp);  
  }

  for(int i=0;i<n;i++){
   //a1
    if( (v[i]%5)==0 && (v[i]%2)==0 ) {
      a1+=v[i];
      continue;
    }
    
 //a2   
  if( (v[i]%5)== 1) {
    if (flag2==0) {
      a2+=v[i];
      flag2=1;
      flag22=1;
     }
    else{
    a2-=v[i];
    flag2=0;
    flag22=1;
    }
  continue;
  }

  //a3
    if( (v[i]%5)== 2) {
      a3++;
      continue;
    }
 
 //a4
    if( (v[i]%5) == 3) {
 	n4++;
        a4+=v[i];
        continue;
    }
 
//a5
    if( (v[i]%5) == 4) {
       if( a5<v[i] ) a5=v[i];      
       continue;
   }
 }
  
//print
if (a1==0) cout<<'N'<<' ';
  else cout<<a1<<' ';
if(a2==0 && flag22 == 0) cout<<'N'<<' ';
  else cout<<a2<<' ';
if(a3==0) cout<<'N'<<' ';
  else cout<<a3<<' ';
if(a4==0)  cout<<'N';
  else  printf("%.1f",(a4/n4));
if(a5==0) cout<<' '<<'N';
  else cout<<' '<<a5;

return 0;

}
 