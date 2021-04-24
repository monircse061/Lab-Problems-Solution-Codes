#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
if(n==1)
    return n;
else
    return n*fibo(n-1);
}
int main(){
    int m;
    cin>>m;
    cout<<fibo(m);
}

