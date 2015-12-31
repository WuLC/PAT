//方法一
#include <iostream>
using namespace std;

string judgeFunction(string s){
  int n1=0,n2=0,n;
  n=s.length();
  
  n1=s.find_first_not_of('A');
  if(s[n1]!= 'P') return "NO";
  
  n2=s.find_first_not_of('A',n1+1);
  if(n1+1 == n2 || s[n2]!='T') return "NO";
  
  if( s.find_first_not_of('A',n2+1) != -1) return "NO";
  
/*  
for ( unsigned int i=0;i<n;i++){
  if (s[i] == 'P') n1=i;
    else if(s[i] == 'T') n2=i;
      else continue;
  }
*/
  if(n1*(n2-n1-1) == (n-n2-1) && n1!=n2) return "YES";
  else return "NO";
}


int main(){
   int n;
   string str,res;
   cin>>n;
  
  for (int i=0;i<n;i++){
  cin>>str;
  res=judgeFunction(str);
  cout<<res<<endl;
  }
  return 0;
}

//方法二
#include <iostream> 
#include <string> 
#include <vector> 
using namespace std; 
int main() {  
  int num;  
  vector<string>  v;  
  string s;   
  cin>>num;   
  for(int i = 0;i<num;i++) {    
    cin>>s;     
    size_t p = s.find_first_not_of("A");    
    if(p == string::npos || s[p]!='P') { 
      v.push_back("NO"); 
      continue; 
    }     
    size_t t= s.find_first_not_of("A",p+1);     
    if(t== string::npos ||t==p+1 || s[t]!='T') {      
      v.push_back("NO");      
      continue;     
    }     
    size_t n = s.find_first_not_of("A",t+1);    
    if(n != string::npos) {       
      v.push_back("NO");      
      continue;     
    }     
    if((s.length()-1-t)==p*(t-p-1) ) {      
      v.push_back("YES");     
    }     
    else {      
      v.push_back("NO");
    }   
  }   
  for(int i=0;i<num;i++) {    
    cout<<v[i]<<endl;   
  }   
  system("pause"); 
}