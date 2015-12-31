#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using  namespace std;

struct moonCake{
	double price;
	double weight;
	double average;
	//moonCake();     //默认构造函数
};
/*构造函数定义
moonCake::moonCake(){
	price = 0.0;
	weight = 0.0;
	average = 0.0;
}
*/
bool cmp(moonCake m1, moonCake m2){
	return m1.average<m2.average;
}

int main(){
	int n,flag=-1;
	double need,sum = 0.0,profit=0.0;
	vector<moonCake> m;
	cin >> n >> need;
	moonCake temp;

	for (int i = 0; i<n; i++){
		cin >> temp.weight;
		m.push_back(temp);
	}

	for (int i = 0; i<n; i++){
		cin >> m[i].price;
		m[i].average = m[i].price / m[i].weight;
	}

	sort(m.begin(), m.end(), cmp);

	for (int i = n - 1; i>=0; i--){
		sum += m[i].weight;
		profit += m[i].price;
		if (sum >= need) {
			profit -= m[i].price;
			sum -= m[i].weight;
			profit += (need - sum)*m[i].average;
			break;
		}
	}

	cout <<setprecision(2)<<fixed<<profit;
	return 0;

}
