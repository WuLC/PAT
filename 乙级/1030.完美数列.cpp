#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int num;
	//纯整数运算在数据较大时容易越界导致结果错误。应当将其转化为浮点运算。在此题中即把 p 定义为浮点数
	float p; 
	cin>>num>>p;
	int *a=(int*)malloc(sizeof(int)*num); //分配动态内存
	for(int i=0;i<num;i++)
		cin>>a[i];

	sort(a,a+num);//对数组从小到大进行排序

	int max=1;

	for(int i=0;i<num;i++){
		for(int j=i+max;j<num;j++){
			if(a[j] > a[i]*p )
				break;
			if( max< j-i+1 )
				max=j-i+1;
		}
	}
	free(a);
	cout<<max<<endl;
	return 0;
}