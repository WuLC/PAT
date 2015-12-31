#include <iostream>
#include <map>
using namespace std;

struct person{
	int year;
	int month;
	int date;

void init(int y,int m,int d){
	year=y;
	month=m;
	date=d;
}

bool isLegal(){
	person p1,p2;
	p1.init(2014,9,6);
	p2.init(1814,9,6);
	if( *this< p2 || p1< *this)
		return false;
	else
		return true;
}

friend bool operator <(const person &a,const person &b){
	if (a.year != b.year) return a.year<b.year;
	else if(a.month != b.month) return a.month<b.month;
	else return a.date<b.date;
}

};

int main(){
	int count=0,num,year,month,date;
	char name[5];
	person tmp;
	map<person ,string> record ;
	cin>>num;
	for(int i=0;i<num;i++){
		scanf("%s %d/%d/%d",name,&year,&month,&date);//后面的参数都是地址值
		tmp.init(year,month,date);
	if (tmp.isLegal()){
		record[tmp]=name;
		count++;
	}
}
if(count>0){
	map<person,string>::iterator it=record.begin();  //根据重载的<来决定从小到大还是从大到小来排
	cout<<count<<' '<<it->second<<' ';
	map<person,string>::reverse_iterator rit=record.rbegin();
	cout<<rit->second<<endl;
}
else
	cout<<0<<endl;
	return 0;

}