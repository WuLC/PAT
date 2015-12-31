#include <iostream>
using namespace std;

struct person{
string id;
string st;
string et;
};
  
  
int str2num(string str){
 int hour,min,sec,total;
  hour=(int(str[0])-48)*10+int(str[1])-48;
  min=(int(str[3])-48)*10+int(str[4])-48;
  sec=(int(str[6])-48)*10+int(str[7])-48;
  return 3600*hour+60*min+sec;
  }

int main(){
int n;
person temp,first,last;
  cin>>n;
  cin>>temp.id>>temp.st>>temp.et;
  first=last=temp;
  for(int i=1;i<n;i++){
  cin>>temp.id>>temp.st>>temp.et;
    if( str2num(temp.st) < str2num(first.st)) first=temp;
    if( str2num(temp.et) > str2num(last.et)) last=temp;
  }

  cout<<first.id<<' '<<last.id;
  return 0;
}

