#include<bits/stdc++.h>
using namespace std;
#define M 100000
vector<int>ve[M];
vector<bool>vis;
int e;
void dfs(int n){
    vis[n]=true;
    for(int i=0;i<ve[n].size();i++){
         e=ve[n][i];
        if(!vis[e]){
            dfs(e);
        }
    }
    cout<<e <<" ";
}
int main()
{
    int n,e,i,j,x,y,num;
    cin>>n>>e;

    for(i=0;i<e;i++){
        cin>>x>>y;
        ve[x].push_back(y);
        ve[y].push_back(x);
    }
    scanf("%d",&num);
      dfs(num);
    return 0;
}
