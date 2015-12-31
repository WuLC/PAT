#include <iostream>
using namespace std;

int main(){
char ch[3];
float a,b,c,total=0;
float num[3];
  for(int i=0;i<3;i++){
  cin>>a>>b>>c;
    if(a>b&&a>c) {
      ch[i]='W';
      num[i]=a;
    } 
      else if(b>a&&b>c){
      ch[i]='T';
      num[i]=b;
    } 
      else{
      ch[i]='L';
      num[i]=c;
    } 
  }
  
total=(num[0]*num[1]*num[2]*0.65-1)*2;
  
cout<<ch[0]<<' '<<ch[1]<<' '<<ch[2]<<' ';
  printf("%.2f",total);
  return 0;
  
}