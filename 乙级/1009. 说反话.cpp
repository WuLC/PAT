#include <iostream>
#include <vector>
using namespace std;

int main(){
int n=0;
string str,temp="";
vector<string> v;
getline(cin,str);  
  for (int i=0;i<str.length();i++){
    if(str[i]== '\n') break;
    if(str[i]!=' ') temp+=str[i];
    if(str[i] == ' ') {
    v.push_back(temp);
    temp="";
    }
  } 
 v.push_back(temp);
 
for(int i=v.size()-1;i>0;i--) cout<<v[i]<<" ";
  cout<<v[0]<<endl;

 return 0;
}