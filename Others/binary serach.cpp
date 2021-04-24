#include<bits/stdc++.h>
using namespace std;
int main(){
   int x,f=0,l=9,a[1000],mid ,count=0;
   for(int i=0;i<10;i++){
     scanf("%d",&a[i]);
   }
   cout<<endl;
   scanf("%d",&x);
   while(f<=l){
       mid=(f+l)/2;
       if(a[mid]>x){
        l=mid-1;
       }
       else if(a[mid]==x){
            printf(" Index num = %d ",mid);
            printf(" of the num = %d",a[mid]);
            count++;
       }
       else if(a[mid]<x){
           f=mid+1;
       }
   }
   cout<<" count num " <<count;
return 0;
}
