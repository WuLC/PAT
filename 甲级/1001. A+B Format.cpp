#include <iostream>
using namespace std;

int main(){
int a,b,sum,n;
char ch[7];
cin>>a>>b;
sum=a+b;
sprintf(ch,"%d",sum);
string str(ch);
n=str.length();
  if(sum<0){
  cout<<str[0]<<str[1];
    for(int i=2;i<n;i++){
      if((n-i)%3 ==0 ) cout<<','<<str[i];
      else cout<<str[i];
    }
}

else{
cout<<str[0];
    for(int i=1;i<n;i++){
      if((n-i)%3 ==0 ) cout<<','<<str[i];
      else cout<<str[i];
    }
} 
  
 return 0; 
}