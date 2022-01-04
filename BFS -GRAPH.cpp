#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int>adj[],int s,int d){
	adj[s].push_back(d);
	adj[d].push_back(s);
}
void printGraph(vector<int>adj[],int n){
	for(int i=0;i<n;i++){
		cout<<i;
		for(auto x:adj[i]){
			cout<<"->"<<x;
		}
		cout<<endl;
	}
}
vector<int>bfsOfGraph(int v,vector<int>adj[]){
	vector<int>bfs;
	vector<int>visi(n+1,0);
	for(int i=1;i<=n;i++){
		if(!visi[i]){
			queue<int>q;
			q.push(i);
			visi[i]=1;
			while(!q.empty()){
				int top=q.front();
				bfs.push_back(top);
				for(auto x :adj[top]){
					if(!visi[x])
					q.push(x);
					visi[x]=1;
				}
			}
		}
	}
	return bfs
	
}
int main(){
	int n,m;
	cin>>n>>m;
	vector<int>adj[n+1];// for index 1 numbering
	int u,v;
	for(int i=0;i<m;i++){
		cin>>u;
		cin>>v;
         addEdge(adj,u,v);
	}
	vector<int>res;
   res= printGraph(adj,n);
   for(int i=0;i<res.size();i++){
   	cout<<res[i]<<" ";
   }
}
