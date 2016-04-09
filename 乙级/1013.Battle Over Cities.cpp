/*
pat-甲级-1013 Battle Over Cities解题
思路：利用广度或深度优先搜索来找出剔除原图的一个节点后有几个子图
*/

#include <iostream>
#include <vector>
using namespace std;


int n,m,k;
vector<int> roads;
int raw[1000][1000]={0},mod[1000][1000]={0};
int visited[1000]={0};


//深度优先搜索
void dfs(int node){	
	visited[node]=1;
	for(int i=1;i<=n;i++){
		if(mod[node][i]==1 && visited[i]==0)
			dfs(i);
	}
	
	return ;

}

//找出城市b被占领后需要修的路
int roadsNeeded(int b){
	visited[b]=-1;
	int count=0; //count表示b被占领后原图被分成的子图的数量
	//将已经被占领的城市的所有道路封锁
	for(int i=1;i<=n;i++){
		mod[b][i]=0;
		mod[i][b]=0;
	}

	for(int i=1;i<=n;i++){
		if(visited[i]==0){
			dfs(i);
			count++; 
		}
	}

	return count-1;
}


int main(){
	int s,d;
	cin>>n>>m>>k;

	//初始化图
	for(int i=0;i<m;i++){
		cin>>s>>d;
		raw[s][d]=1;
		raw[d][s]=1;

		mod[s][d]=1;
		mod[d][s]=1;
	}
	
	
	for(int i=0;i<k;i++){
		cin>>s;     		
		d=roadsNeeded(s);
		roads.push_back(d);

		//将图恢复至原始状态
		for(int i=1;i<=n;i++)
			visited[i]=0;

		for(int i=1;i<=n;i++){
			mod[s][i]=raw[s][i];
			mod[i][s]=raw[i][s];
		}
	}

	for (int i = 0; i < roads.size(); ++i)
		cout<<roads[i]<<endl;

	return 0;	
}