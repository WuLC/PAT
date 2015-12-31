#include <iostream>
using namespace std;

int main(){
	int a[10]={0};
	int flag=0;
	for(int i=0;i<10;i++)
		cin>>a[i];
	for(int i=1;i<10;i++){
		if(a[i]!=0) {
			cout<<i;
			a[i]--;
			flag=1;
			break;
		}
	}
  //all zeros
	if(flag==0) {
		cout<<0;
		return 0;
	}
   
  //
	for(int i=0;i<10;i++){
		while(a[i]){
			cout<<i;
			a[i]--;
		}
	}
	return 0;

}