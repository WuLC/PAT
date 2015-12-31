#include <iostream>
using namespace std;


//times for wins or losts
struct result{
  
  int s;
  int f;
  int p;
  
};


struct record{
  int c;
  int b;
  int j;
};

record are={0,0,0},bre={0,0,0};

//返回0代表甲胜，1代表乙胜，2代表平
int  compare(char a,char b){
 if(a==b) return 2;
 else if(a=='C'&&b=='J') {are.c+=1;return 0;}
  else if (a=='J'&&b=='B') {are.j+=1;return 0;}
   else if (a=='B'&&b=='C')  {are.b+=1;return 0;}
    else if(b=='C'&&a=='J') {bre.c+=1;return 1;}
     else if (b=='J'&& a=='B') {bre.j+=1;return 1;}
      else if (b=='B'&& a=='C')  {bre.b+=1;return 1;}
}


//get the best choice

char getBest(record t){
int  max;
max=t.c;
if(max<t.b) max=t.b;
if(max<t.j) max=t.j;

if(max==t.b) return 'B';
else if(max==t.c) return 'C';
else return 'J';

}


int main(){
result ar={0,0,0},br={0,0,0};

int n,tmp;
cin>>n;
char a,b;
for(int i=0;i<n;i++){
  cin>>a>>b;
  tmp=compare(a,b);
  if(tmp==0) {
  	ar.s+=1;
  	br.f+=1;
  }
  else if(tmp==1) {
  	ar.f+=1;
  	br.s+=1;
  }
  else {
    ar.p+=1;
    br.p+=1;
  }
}

cout<<ar.s<<' '<<ar.p<<' '<<ar.f<<endl;
cout<<br.s<<' '<<br.p<<' '<<br.f<<endl;

cout<<getBest(are)<<' '<<getBest(bre);
return 0;

}
