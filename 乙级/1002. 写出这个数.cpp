#include <iostream>
using namespace std;

string printNumber(char  n){
  string str;
  switch  (n){
  case '0':    //不能用"0"
    str="ling";
    break;
  case '1':
    str="yi";
    break;
   case '2':
    str="er";
    break;
   case '3':
    str="san";
    break;
   case '4':
    str="si";
    break;
   case '5':
    str="wu";
    break;
   case '6':
    str="liu";
    break;
   case '7':
    str="qi";
    break;
   case '8':
    str="ba";
      break;
   case '9':
     str="jiu";
      break; 
  }
  return str;
}

int main(){
  string inStr,outStr,res;
  char temp[101];
  char c;
  int n,total=0;
  cin>>inStr;
  for ( int i=0;i<inStr.length();i++ ){
  //c=inStr[i];sscanf(c,"%d",&n);  ??                               
  n=int(inStr[i])-48;  //从字符转数字，先转为ASCII码再减去48即可
  total+=n;
  }
  sprintf(temp,"%d",total);  //第一个参数必须为char[]
  outStr=temp;
  int i;
  for ( i=0;i<outStr.length()-1;i++){
  res=printNumber(outStr[i]);
  cout<<res<<" ";
  }
  res=printNumber( outStr[i] );
  cout<<res;
return 0;
}