#include <iostream>
using namespace std;

int main(){
string a,b;
char da,db;
int ia,ib,total=0,total1=0,i;
  cin>>a>>da>>b>>db;
ia=int(da)-48;
ib=int(db)-48;

  int num=0;

  for( i=0;i<a.length();i++){
	if(a[i]==da)  num++;  
  }
  
  if (num!=0) {
   for(int i=0;i<num;i++)
     total=total*10+ia;
  }
   
  num=0;
  for( i=0;i<b.length();i++){
	if(b[i]==db)  num++;  
  }
  
  if (num!=0) {
   for(int i=0;i<num;i++)
     total1=total1*10+ib;
  }
  
cout<<total+total1;
}