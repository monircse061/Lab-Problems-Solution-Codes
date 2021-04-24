#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
bool compare(int a,int b){
return a>b;
}
int main(){
    string S,s1,s2,result;
    int num1;

        cin>>S;
        sort(S.begin(),S.end());
        s1=S;
        num1=atoi(s1);
        sort(S.begin(),S.end(),compare);
        s2=S;





return 0;
}

