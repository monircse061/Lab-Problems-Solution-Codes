#include<bits/stdc++.h>
using namespace std;
int main(){
      queue<int> q;
      q.push(4);
      q.push(1);
      q.push(8);
      while(!q.empty()){
        int x;
        x=q.front();  ///       In queue we use push(),pop(),front() fuctions
        cout<<x<<endl;
        q.pop();
      }
    return 0;
}
