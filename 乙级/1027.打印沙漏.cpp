/*
*pat-1027-打印沙漏
*/

#include <iostream>
using namespace std;

int main(){
	int total,max=1,sum=1,left;
	char c;
	cin >> total >> c;
	while (sum <= total){
		max += 2;
		sum += max * 2;
	}

	left = total - sum+max*2;
	max = max - 2;
	
	int lines = (max + 1)/ 2;
	
	//print the upper part
	for (int i = 0; i < lines; i++){
		//print the spaces
		for (int j = 0; j < i; j++)
			cout << ' ';
		//print the char
		for (int k = 0; k < (max - i * 2); k++)
			cout << c;
		cout << endl;
		}

	//print the  lower part
	for (int i = lines - 1; i>0; i--){
		//print the space
		for (int j = 0; j < i - 1; j++)
			cout << ' ';
		for (int k = 0; k < (max - (i-1) * 2) ; k++)
			cout << c;
		cout << endl;
	}
	cout << left << endl;
}