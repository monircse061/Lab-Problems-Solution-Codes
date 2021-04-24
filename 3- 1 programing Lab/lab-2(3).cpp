#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,n,num=0,arr[100];
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b-1;i++){
        scanf("%d",&n);
        arr[i]=n;

        }
         for(int j=1;j<=b;j++){
             if(arr[j]=='\0')
             {
                 printf("%d",arr[j]);
             }
            }


 return 0;
}
