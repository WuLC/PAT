#include <iostream>
using namespace std;

string getDay(char c){
  string str;
  switch (c){
  case 'A':
    str="MON";
    break;
  case 'B':
    str="TUE";
    break;
  case 'C':
    str="WED";
    break;
  case 'D':
    str="THU";
    break;
  case 'E':
    str="FRI";
    break;
  case 'F':
    str="SAT";
    break;
  case 'G':
    str="SUN";
    break;
  }
return str;
}

int main(){
   int flag=0,hour,minute;
   string str1,str2,str3,str4,day;
   cin>>str1>>str2>>str3>>str4;
  
  //first two strings
  for(int i=0;i<str1.length()&&i<str2.length();i++){
    
 if(str1[i]== str2[i]){  
   
   if(flag==0 && str1[i] >= 'A' && str1[i] <='G'){
      day=getDay(str1[i]);
      flag=1;
      continue;
   }
   
   if(flag==1 && str1[i]>='A'&&str1[i]<='N'){
     hour=int(str1[i])-55;
     break;
   }
   
   if(flag==1 && str1[i]>='0'&&str1[i]<='9'){
     hour=int(str1[i])-48;
     break;
   }
  } 
 }
   
  
//last two strings
  for(int i=0;i<str3.length()&&i<str4.length();i++){
    if( (str3[i]==str4[i]) && ( (str3[i]>='a' && str3[i] <='z' )|| (str3[i]>='A' && str3[i]<='Z') ) ) {
      minute=i;
      break;
    }
  }

cout<<day<<' ';
  if(hour<10) cout<<'0'<<hour<<':';
  else cout<<hour<<':';
  if(minute<10) cout<<'0'<<minute;
  else cout<<minute;
  
return 0; 
}