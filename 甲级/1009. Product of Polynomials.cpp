#include <iostream>
using namespace std;

int main(){
  float a[1001]={0},b[1001]={0},c[2001]={0};
  int n,ta;
  float tb;

  cin>>n;
 for(int i=0;i<n;i++){
  cin>>ta>>tb;
  a[ta]=tb;
  }
  
 cin>>n;
 for(int i=0;i<n;i++){
  cin>>ta>>tb;
  b[ta]=tb;
  }

  /*
  if(a[0]!=0){
    for(int i=0;i<1001;i++)
      c[i]+=a[0]*b[i];
      }
  
 if(b[0]!=0){
    for(int i=0;i<1001;i++)
      c[i]+=b[0]*a[i];
      }
  */
  
  for(int i=0;i<1001;i++){
    if(a[i]!= 0) {
      for(int j=0;j<1001;j++) if(b[j] != 0) c[i+j]+=a[i]*b[j];
      }
  }
 //get total
  int total=0;
  for (int i=0;i<2001;i++){
   if(c[i]!=0) total++;
  }
 cout<<total<<' ';
 
 //get first
 int t;
 for (int i=0;i<2001;i++){
    if(c[i]!=0) {
      t=i;
      break;
    }   
  }
 int i;
 for ( i=2000;i>t;i--){
   if(c[i]!=0){
    cout<<i<<' ';
    printf("%.1f ",c[i]);
   }
  }
  cout<<i<<' ';
  printf("%.1f",c[i]);
 
return 0;
}

2 1 2.4 0 3.2
2 2 1.5 1 0.5