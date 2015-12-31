#include <iostream>
#include <string>
using namespace std;

string broken;//表示所有的坏键
bool capsBroken = false; //上档键是否坏了

//判断一个字符能够被打印出来
bool canPrint(char c){
	if (c <= 'Z'&& c>= 'A'){
		if (capsBroken == true)
			return false;
		else if (broken.find(c) != -1)
			return false;
		else
			return true;
	}
	else if (c <= 'z'&&c >= 'a'){
		if (broken.find(char(c - 32)) != -1)
			return false;
		else
			return true;
	}
	else{
		if (broken.find(c) != -1)
			return false;
		else
			return true;
	}
}

int main(){
	string text;
	int flag = 0;
	cin >> broken >> text;
	if (broken.find('+') != -1)
		capsBroken = true;
	//可能没有坏的键，这时text没有内容
	if (text.length() == 0)
		cout << broken;
	else{
		for (int i = 0; i < text.length(); i++)
		if (canPrint(text[i])){
			cout << text[i];
			flag = 1;
		}
		//一个合法的字符都没有
		if (flag == 0)
			cout << endl;
	}
	return 0;
}