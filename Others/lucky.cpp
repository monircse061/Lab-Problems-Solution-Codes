#include<bits/stdc++.h>
using namespace std;
int main(){
   char st[101] ;
   int c,count=0,num;
   scanf("%s",&st);
   num= atoi(st);
   c=0;
   while(st[c]!='\0')
    {
    if(st[c]!='4'||st[c]!='7')
         {
             printf("yes");
             /*if(num%4!=0||num%7!=0)
             {printf("no");
             break;
             }*/
         }
    c++;
    }

return 0;
}
