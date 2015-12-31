#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int num,n,score;
	cin>>num;
	int *a=(int *)malloc(sizeof(int)*(num+1));//动态分配数组
	for(int i=0;i<num;i++){
		cin>>n>>score;
		a[n]+=score;
	}

	int max=0,index=0;
	for(int i=1;i<=num;i++){
		if(a[i]>max){
			max=a[i];
			index=i;
		}
	}
	free(a);
  	cout<<index<<' '<<max<<endl;
  	return 0;
}