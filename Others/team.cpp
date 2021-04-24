#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c,count_num,sol_count=0;
    scanf("%d",&n);
    while(n--){
     scanf("%d%d%d",&a,&b,&c);
     count_num=0;
     if(a==1)
        count_num++;
     if(b==1)
        count_num++;
     if(c==1)
        count_num++;
        if(count_num>=2)
            sol_count++;
    }
    printf("%d",sol_count);
    return 0;
}
