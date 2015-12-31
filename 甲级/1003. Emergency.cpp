#include <iostream>
using namespace std;

int src,en,n,ways=0,mindis=99999999,total=0;
int map[500][500],visited[500],resc[500];

void dfs(int cur,int dist,int res){
 
  if(cur==en){
    if(mindis>dist){
    ways=1;
    mindis=dist;
    total=res;
      return;
    }
    else if(mindis == dist){
    ways++;
    if (total<res) total=res;
     return;
    }  
  }
  
  if(dist>mindis) return;

 
 
for(int i=0;i<n;i++){
    if (map[cur][i]!=-1 && visited[i] == 0){
     visited[i]=1;
      dfs(i,dist+map[cur][i],res+resc[i]);
     visited[i]=0;
    }
  }
}



int main(){

int m,s,d,len;
cin>>n>>m>>src>>en;
  
for(int i=0;i<n;i++)
   for(int j=0;j<n;j++){
   if(i==j) map[i][j]=0;
   else map[i][j]=-1;
}


  for(int i=0;i<n;i++) cin>>resc[i];
  
  for(int i=0;i<m;i++){
  cin>>s>>d>>len;
  map[s][d]=len;
  map[d][s]=len;
  }
  
  visited[src]=1;
  dfs(src,0,resc[src]);
  
  cout<<ways<<' '<<total;
    return 0;
  
}

/////////////////
打印出节点数和路径

#include <iostream>
#include <vector>
using namespace std;

int src,en,n,ways=0,mindis=99999999,total=0;
int map[500][500],visited[500],resc[500],way[500][500];
vector<int> v;


void dfs(int cur,int dist,int res){
 
  if(cur==en){
    if(mindis>dist){
    ways=1;
    mindis=dist;
    total=res;
      
    }
    else if(mindis == dist){
    ways++;
    if ( total<res ) total=res;
    }

for(int i=0;i<=v.size();i++){
    if(i==0) way[ways][i]=v.size();
    else way[ways][i]=v[i-1];  
  }

  v.clear();
  v.push_back(src);
  return;
}

  if(dist>mindis) return;

 
 
for(int i=0;i<n;i++){
    if (map[cur][i]!=-1 && visited[i] == 0){
     visited[i]=1;
     v.push_back(i);
      dfs(i,dist+map[cur][i],res+resc[i]);
     visited[i]=0;
    }
  }
}


int main(){

int m,s,d,len;
cin>>n>>m>>src>>en;
  
for(int i=0;i<n;i++)
   for(int j=0;j<n;j++){
   if(i==j) map[i][j]=0;
   else map[i][j]=-1;
}


  for(int i=0;i<n;i++) cin>>resc[i];
  
  for(int i=0;i<m;i++){
  cin>>s>>d>>len;
  map[s][d]=len;
  map[d][s]=len;
  }
  
  visited[src]=1;
  v.push_back(src);
  dfs(src,0,resc[src]);

  
  cout<<ways<<' '<<total<<endl;
  if(ways !=0){
  int i,j;
  for( i=1;i<=ways;i++) {
      for( j=1;j<way[i][0];j++)
        cout<<way[i][j]<<"->";
  cout<<way[i][j]<<endl;
  }
}
    return 0;
  
}

5 6 0 2
1 2 1 5 3
0 1 1
0 2 2
0 3 1
1 2 1
2 4 1
3 4 1