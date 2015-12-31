#include <iostream>
using namespace std;

int main(){

	string str;
	int a[10]={0};
	int  temp;
	cin>>str;
	for(int i=0;i<str.length();i++){
		temp=int(str[i])-48;
		a[temp]++;
	}
	for(int i=0;i<10;i++)
		if(a[i]!=0) cout<<i<<":"<<a[i]<<endl;

	return 0;
}