#include <iostream>
using namespace std;

int main(){

	int a,b,c,total,remain;
	string str="";
	char ch;
	cin>>a>>b>>c;
	total=a+b;
	if(total==0) {
  	    cout<<0;
        return 0;
    }
	while(total){
		remain=total%c;
		ch=remain+'0';//数字转字符
		str+=ch;
		total=total/c;
	}
	for(int i=str.length()-1;i>=0;i--)
		cout<<str[i];

	return 0;
}