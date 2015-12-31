
//method 1
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Student{
	int num;
	int d;
	int c;
	bool operator < (const Student &A) const{
		if (d + c != A.d + A.c)
			return d + c > A.d + A.c;
		else{
			if (d != A.d)
				return d > A.d;
			else
				return num < A.num;
		}
	}
};

int main(){
	int n, l, h,count = 0;
	Student tmp;
	vector<Student> v1, v2, v3, v4;
	scanf("%d%d%d", &n, &l, &h);
	int x, y, z;
	for (int i = 0; i < n; i++){
		scanf("%d%d%d", &x, &y, &z);
		tmp.num = x;
		tmp.d = y;
		tmp.c = z;
		if (y >= l && z >= l){
			count++;
			if (y >= h && z >= h){
				v1.push_back(tmp);
			}
			else if (y >= h && z < h){
				v2.push_back(tmp);
			}
			else if (y < h && z < h && y >= z){
				v3.push_back(tmp);
			}
			else {
				v4.push_back(tmp);
 			}
		}
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	sort(v3.begin(), v3.end());
	sort(v4.begin(), v4.end());
	cout << count << endl;
	vector<Student>::iterator itr;
	for (itr = v1.begin(); itr != v1.end(); ++itr)
		printf("%d %d %d\n", itr->num, itr->d, itr->c);
	for (itr = v2.begin(); itr != v2.end(); ++itr)
		printf("%d %d %d\n", itr->num, itr->d, itr->c);
	for (itr = v3.begin(); itr != v3.end(); ++itr)
		printf("%d %d %d\n", itr->num, itr->d, itr->c);
	for (itr = v4.begin(); itr != v4.end(); ++itr)
		printf("%d %d %d\n", itr->num, itr->d, itr->c);
	return 0;
}




//method 2

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Student{
	int num;
	int d;
	int c;
};


 bool cmp(Student s1,Student s2){
     if( s1.d+s1.c != s2.d+s2.c) 
     	return s1.d+s1.c > s2.d+s2.c;
     else if(s1.d != s2.d)
     	return s1.d>s2.d;
     else 
     	return  s1.num<s2.num;
 }


int main(){
int n,l,h,total=0;  
   vector<Student> v1,v2,v3,v4;
 
cin>>n>>l>>h;

Student temp;

for(int i=0;i<n;i++){

 cin>>temp.num>>temp.d>>temp.c;
if( temp.d<l || temp.c<l) continue;
else if( temp.d>=h && temp.c>=h ) v1.push_back(temp);
else if(temp.d>=h && temp.c<h)  v2.push_back(temp);
else if(temp.d<h && temp.c<h && temp.d>=temp.c ) v3.push_back(temp);
else v4.push_back(temp);    

}

sort(v1.begin(),v1.end(),cmp);
sort(v2.begin(),v2.end(),cmp);
sort(v3.begin(),v3.end(),cmp);
sort(v4.begin(),v4.end(),cmp);

total=v1.size()+v2.size()+v3.size()+v4.size();
cout<<total<<endl;

for(int i=0;i<v1.size();i++)
	cout<<v1[i].num<<' '<<v1[i].d<<' '<<v1[i].c<<endl;
for(int i=0;i<v2.size();i++)
	cout<<v2[i].num<<' '<<v2[i].d<<' '<<v2[i].c<<endl;
for(int i=0;i<v3.size();i++)
	cout<<v3[i].num<<' '<<v3[i].d<<' '<<v3[i].c<<endl;
for(int i=0;i<v4.size();i++)
	cout<<v4[i].num<<' '<<v4[i].d<<' '<<v4[i].c<<endl;

return 0;

/*
用cout会超时

for(int i=0;i<v1.size();i++)
	printf("%d %d %d\n",v1[i].num,v1[i].d,v1[i].c);
for(int i=0;i<v2.size();i++)
	printf("%d %d %d\n",v2[i].num,v2[i].d,v2[i].c);
for(int i=0;i<v3.size();i++)
	printf("%d %d %d\n",v3[i].num,v3[i].d,v3[i].c);
for(int i=0;i<v4.size();i++)
	printf("%d %d %d\n",v4[i].num,v4[i].d,v4[i].c);

*/

}
14 60 80
10000001 64 90
10000002 90 60
10000011 85 80
10000003 85 80
10000004 80 85
10000005 82 77
10000006 83 76
10000007 90 78
10000008 75 79
10000009 59 90
10000010 88 45
10000012 80 100
10000013 90 99
10000014 66 60