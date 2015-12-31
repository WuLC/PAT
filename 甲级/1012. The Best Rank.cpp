#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct student{
  string id;
  int c;
  int m;
  int e;
  int a;
};

vector<student> v;
int n;

bool cmpc(student s1,student s2){
   return s1.c>s2.c;
}
bool cmpm(student s1,student s2){
   return s1.m>s2.m;
}
bool cmpe(student s1,student s2){
   return s1.e>s2.e;
}
bool cmpa(student s1,student s2){
   return s1.a>s2.a;
}

int notInList(string str){
    int flag=1;
  for(int i=0;i<n;i++){
    if(str==v[i].id) {
      flag=0;
      break;
    }
  }
  return flag;
}



int main(){
int mm,sum,rc,rm,re,ra;
vector<student> vc,vm,ve,va;
student temp;
string str;
cin>>n>>mm;
  for(int i=0;i<n;i++){
  cin>>temp.id>>temp.c>>temp.m>>temp.e;
  sum=temp.c+temp.m+temp.e;
  /*
  if(sum%3==1) temp.a=(sum-1)/3;
    else if(sum%3==2) temp.a=(sum+1)/3;
      else temp.a=sum/3;
   */
  temp.a=sum;
   v.push_back(temp);
  }
sort(v.begin(),v.end(),cmpc);
  vc=v;
sort(v.begin(),v.end(),cmpm);
  vm=v;
sort(v.begin(),v.end(),cmpe);
  ve=v;
sort(v.begin(),v.end(),cmpa);
  va=v;

  
  for(int i=0;i<mm;i++){
    cin>>str;
    if(notInList(str)) cout<<"N/A"<<endl;
    else{
      for(int i=0;i<v.size();i++)   if(v[i].id==str) temp=v[i];

      for(int i=0;i<vc.size();i++)  if(vc[i].c==temp.c) rc=i+1;
      
      for(int i=0;i<vm.size();i++)  if(vm[i].m==temp.m) rm=i+1;
          
      for(int i=0;i<ve.size();i++)  if(ve[i].e==temp.e) re=i+1;

      for(int i=0;i<va.size();i++)  if(va[i].a==temp.a) ra=i+1;
        
        int min=rc;
        if(min>rm) min=rm;
        if(min>re) min=re;
        if(min>ra) min=ra;
        
       if(ra==min) cout<<ra<<' '<<'A'<<endl;
        else if(rc==min) cout<<rc<<' '<<'C'<<endl;
          else if(rm==min) cout<<rm<<' '<<'M'<<endl;
            else cout<<re<<' '<<'E'<<endl;
        }
  }
}

5 6
310101 98 85 88
310102 70 95 88
310103 82 87 94
310104 91 91 91
310105 85 90 90
310101
310102
310103
310104
310105
999999