#include <iostream>
#include <string>
using namespace std;

int main(){
	int start,end,count,seconds,hour=0,min=0,sec=0;
	cin >> start >> end;
	count = end - start;
	
	//四舍五入
	if (count % 100 >= 50){
		seconds = count / 100 + 1;
	}
	else{
		seconds = count / 100;
	}
	hour = seconds / 3600;
	min = (seconds - hour * 3600) / 60;
	sec = seconds % 60;
	//可能为0的判断
	string h, m, s;
  
	if (hour == 0)
		h = "00";
	else if(hour<10)
		h = '0'+to_string(hour); //int 转string
	else
          	h=to_string(hour);

        if (min == 0)
		m = "00";
	else if(min<10)
		m = '0'+to_string(min);
	else
          	m=to_string(min);
          
	if (sec == 0)
		s = "00";
	else if(sec<10)
		s = '0'+to_string(sec);
	else 
          	s=to_string(sec);
	cout << h << ':' << m << ':' << s << endl;
}



