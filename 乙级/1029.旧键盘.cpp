/*
pat-甲级-1029-旧键盘
*/
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;


int main(){

	//单个字符大小写转换
	/*
	char c;
	cin >> c;
	while (1){
		if (c >= 'a'&& c <= 'z')
			cout << char(c - 32) << endl;
		else
			cout << c << endl;
		cin >> c;
	}
	*/
	//字符串大小写转换
	/*
	char hehe[10] ="abcDEFgHI";
	cout << hehe << endl;
	cout << _strupr_s(hehe) << endl;
	cout << _strlwr_s(hehe) << endl;
	*/

	//从vector中查找某一个元素
	/*
	vector<char> v;
	v.push_back('_');
	vector<char>::iterator it = find(v.begin(), v.end(), 'T');
	if (it == v.end())
	cout << "not found" << endl;
	else
	cout << "found"<<endl;

	it = find(v.begin(), v.end(), '_');
	if (it == v.end())
	cout << "not found"<<endl;
	else
	cout << "found"<<endl;
	*/

	

	
		string raw, real;
		int rawLength, realLength, stand = 0;
		vector<char> result;
		//fstream cin("C:/Users/LC/Desktop/input.txt");
		cin >> raw >> real;
		rawLength = raw.length();
		realLength = real.length();

		char tmp;
		for (int i = 0; i<realLength; i++){
			while (real[i] != raw[stand] && stand < rawLength){
				if (raw[stand] >= 'a' && raw[stand] <= 'z')
					tmp = char(raw[stand] - 32);
				else
					tmp = raw[stand];
				vector<char>::iterator it = find(result.begin(), result.end(), tmp);
				if (it == result.end())  //not found
					result.push_back(tmp);
				stand++;
			}
			stand++;
		}

		for (int i = stand; i<rawLength; i++){
			if (raw[i] >= 'a' && raw[i] <= 'z')
				tmp = char(raw[i] - 32);
			else
				tmp = raw[i];
			vector<char>::iterator it = find(result.begin(), result.end(), tmp);
			if (it == result.end())   //not found
				result.push_back(tmp);
		}

		
		for (int i = 0; i < result.size(); i++)
			cout << result[i];

	
		return 0;
}

