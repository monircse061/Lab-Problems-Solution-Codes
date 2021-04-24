#include<bits/stdc++.h>
using namespace std;
int main(){
char St[120];
    int count,c,num,arr[130];
    scanf("%s",St);
    count=0,c=0;
    while(St[c]!='\0'){
             num=St[c];
            if(arr[num]!=1)
              {arr[num]=1;
               cout<<St[c]<<" ";
              }
        c++;
    }
    return 0;
}
