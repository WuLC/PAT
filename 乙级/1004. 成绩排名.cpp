#include <iostream>
using namespace std;

int main(){
string name[150],ID[150];
int n,max=0,min=0;
int score[150];

cin>>n;
for (int i=0;i<n;i++)  cin>>name[i]>>ID[i]>>score[i];

/*{
  scanf("%s",&name[i]);
  scanf("%s",&ID[i]);
  scanf("%d",&score[i]);
  }
 */
for (int i=1;i<n;i++){
  if (score[i] > score[max]) max=i;
  if (score[i] < score[min]) min=i;
  }
  
cout<<name[max]<<" "<<ID[max]<<endl;
cout<<name[min]<<" "<<ID[min]<<endl;
  
return 0;
}