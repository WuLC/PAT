#include <iostream>
#include <vector>
using namespace std;

int main(){
signed int n; 
char c;
vector<int> v;  
while((c=getchar()) != '\n' ){
  if( c == '-' || (c>='0' && c<='9') ) {
    ungetc(c,stdin);
    cin>>n;
    v.push_back(n);
  }    
  }
 
  if(v.size() == 2 && v[1]== 0){
  cout<<0<<' '<<0;
  return 0;
  }
  
 cout<<v[0]*v[1]<<' '<<v[1]-1;
   
  for (n=3;n<(v.size()-2);n+=2) {
    cout<<' '<<v[n]*v[n-1]<<' '<<v[n]-1;
  }

  if(v[n] !=0 ) cout<<' '<<v[n]*v[n-1]<<' '<<v[n]-1;
 
 return 0;
}