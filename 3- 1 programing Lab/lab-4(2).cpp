#include<bits/stdc++.h>
using namespace std;
int main(){
    int count,c,arr[230],num,pnum[200];
    char St[120];
    scanf("%s",St);
    c=0;
    count=0;
    while(St[c]!='\0'){
             num=St[c];
             pnum[num]=1;
            if(pnum[num]==1)
              {
                  pnum[num]=pnum[num]+i;
               cout<<St[c]<<" ";
              }
              c++;
    }
return 0;
}
