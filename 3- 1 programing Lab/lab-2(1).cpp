#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[100],p;
    scanf("%d",&p);
    int count=p,k=0,j=0;
    for(int i=1;i<=p;i++){
        scanf("%d",&arr[i]);
    }
    while(count--){
        for(int i=p-j;i<=p;i++){
            printf("%d ",arr[i]);
        }
        k++;
        for(int m=1;m<=p-k;m++){
                printf("%d ",arr[m]);
        }
        j++;
        cout<<endl;
    }
    return 0;

}
