#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[100];
    int n;
    scanf("%d",&n);
    int fp=n;
     for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(i==(fp-1)){
            for(int j=fp-1;j>=0;j--){
                printf("%d ",arr[j]);
            }
        }
    }

    return 0;

    }
