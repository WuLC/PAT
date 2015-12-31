#include <iostream>
using namespace std;

int markNum(int a[],int n){
 while (n!=1){
  if (n%2==0) n=n/2;
  else n=(3*n+1)/2;
   a[n]=1;
  }
  a[1]=1;
}


void sort(int a[],int n){

int max;
for (int i=0;i<n;i++){
  max=i;
  for (int j=i+1;j<n;j++){
  if (a[max]<a[j])  max=j;
  else continue;
  }
  if (max != i) {
    int temp=a[max];
    a[max]=a[i];
    a[i]=temp;
  }
  else continue;
 }
}


int main(){

int num[100],a[300]={0};
int n,t;

cin>>n;
for (int i=0;i<n;i++){
  //scanf("%d",&num[i]);
  cin>>num[i];
  markNum(a,num[i]);
  }

 sort(num,n);
 
   for (int i=n-1;i>=0;i--){
   if (a[num[i]] == 1) continue;
     else {
       t=i;
       break;
     }
   }
  
  for (int i=0;i<t;i++){
   if(a[num[i]] == 0) cout<<num[i]<<" ";
  }
  
  cout<<num[t];
  
return 0;
  
}