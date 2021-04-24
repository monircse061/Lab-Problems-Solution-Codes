#include<bits/stdc++.h>
using namespace std;
int arr[130];
int num;
int main(){
    char St[120];
    int count,c;
    scanf("%s",St);
    count=0,c=0;
    while(St[c]!='\0'){
             num=St[c];
             printf("%d\n",num);
            if(arr[num]!=1)
              {arr[num]=1;
              count++;
              }
              else{
                break;
              }
        c++;
    }
        return 0;
}

