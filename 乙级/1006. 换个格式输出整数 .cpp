#include <iostream>
using namespace std;

int main(){
string str;
int n;
cin>>str;
 n=str.length();
  
  
  if( n==3 ){
    for(int i=0 ; i<(int(str[0])-48);i++) cout<<"B";
   
    for(int i=0 ; i<(int(str[1])-48);i++) cout<<"S";
    for(int i=0;i<(int(str[2])-48);i++) cout<<i+1;
    cout<<endl;
  }
  else if (n==2) {
    for(int i=0;i<(int(str[0])-48);i++) cout<<"S";
    for(int i=0;i<(int(str[1])-48);i++) cout<<i+1;
     cout<<endl;
  }
     else {
       for(int i=0;i<(int(str[0])-48);i++) cout<<i+1;
       cout<<endl;
          }
  
 return 0; 
 }