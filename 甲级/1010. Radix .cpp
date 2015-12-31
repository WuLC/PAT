#include <iostream>
#include <math.h>
using namespace std;

int char2num(char c){
  if(c>='0' && c<='9') 
    return int(c)-48;
  else 
    return int(c)-87;
}

int main(){
int tag,radix,num=0,num1=0,max=0,flag=0,radi;
string str1,str2;
cin>>str1>>str2>>tag>>radix;
  
//tag==1
  if(tag==1){
    for(int i=0;i<str1.length();i++)
      num+=char2num(str1[i])*pow(radix,str1.length()-1-i); 
    
    for(int i=0;i<str2.length();i++){
       int temp=char2num(str2[i]);
      if( temp > max ) max=temp;
    }
    
    for( int j=max+1;;j++){
        for(int i=0;i<str2.length();i++)
            num1+=char2num(str2[i])*pow(j,str2.length()-1-i); 
      if (num1==num)  {
        flag=1;
        radi=j;
        break;
      }
      else if(num1>num)  break;
    }
    
  }
  
//tag==2
else {
    for(int i=0;i<str2.length();i++)
      num+=char2num(str2[i])*pow(radix,str2.length()-1-i); 
    
    for(int i=0;i<str1.length();i++){
       int temp=char2num(str1[i]);
      if( temp > max ) max=temp;
    }
    
    for(int j=max+1;;j++){
        for(int i=0;i<str1.length();i++)
            num1+=char2num(str1[i])*pow(j,str1.length()-1-i); 
      if (num1==num)  {
        flag=1;
        radi=j;
        break;
      }
      else if(num1>num)  break;
    } 
  }
  
if(flag==1)  cout<<radi;
  else cout<<"Impossible";
return 0;

}