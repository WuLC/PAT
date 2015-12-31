/*
pat-乙级-1031-校验身份证
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//判断身份证号是否合法
bool isLegal(string str){
	int  result = 0;
	int  weight[17] = { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
	char match[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
	for (int i = 0; i<17; i++){
		if (str[i] >= '0' && str[i] <= '9'){
			result += int(str[i])*weight[i] / 100;
		}
		else
			return false;
	}
	result %= 11;
	if (str[17] == match[result])
		return true;
	else
		return false;
}


int main(){
	int num;
	string  sample;
	vector<string> illegal;
	cin >> num;
	for (int i = 0; i<num; i++){
		cin >> sample;
		if (!isLegal(sample))
			illegal.push_back(sample);
	}

	if (illegal.size() != 0){
		for (int i = 0; i<illegal.size(); i++)
			cout << illegal[i] << endl;
	}
	else
		cout << "All passed" << endl;

}