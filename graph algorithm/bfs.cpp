#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1000];
queue<int> q;
int vis[100];
void bfs(int s){
    q.push(s);
    vis[s]=1;
    while(!q.empty()){
            int u=q.front();
                q.pop();
         for(int i=0;i<adj[u].size();i++){
               if(!vis[adj[u][i]]){
                int v=adj[u][i];
                  cout<< v<<" ";
                  vis[v]=1;
                  q.push(v);
               }
         }

    }


}
int main(){
    int n,e,x,y,num;
    scanf("%d%d",&n,&e);
    for(int i=0;i<e;i++){
            scanf("%d%d",&x,&y);
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    printf("Staring node : ");
    scanf("%d",&num);
    bfs(num);
return 0;
}
