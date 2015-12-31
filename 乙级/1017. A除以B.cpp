#include <iostream>
using namespace std;

int main(){
string str,res="";
int n,quotient,remainder=0,dividend=0;
char mod[1];
cin>>str>>n;
  


  for(int i=0;i<str.length();i++){
   int temp=int(str[i])-48;
    dividend=remainder*10+temp;
    quotient=dividend/n;
    remainder=dividend%n;
    sprintf(mod,"%d",quotient);
    res+=mod;
  }
int flag=0;  
  for(int i=0;i<res.length();i++){
  if(res[i]=='0'&&flag==0) continue;
    else {
      cout<<res[i];
      flag=1;
    }
  }
 if(flag==0) cout<<0;
 cout<<' '<<remainder;
    
 return 0;
}