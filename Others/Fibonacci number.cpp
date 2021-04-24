#include<bits/stdc++.h>
using namespace std;
int fib(int m){
    int fib[m+2];
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<=m;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    return fib[m];
}
int main(){
    int n;
    scanf("%d",&n);
    cout<<fib(n);
return 0;
}
