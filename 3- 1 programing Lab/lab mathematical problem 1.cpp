#include<bits/stdc++.h>
using namespace std;
int arr[10000];
int main(){
    string a,b;
    int sum=0,div=0,l=0,a1,b1;
   cin>>a>>b;
   for(int i=a.length()-1,j=b.length()-1;i>=0||j>=0;i--,j--){
        if(i<0){
          a1=0;
        }
        else
            a1=a[i]-48;
        if(j<0){
            b1=0;
        }
        else
         b1=b[j]-48;
    sum=a1+b1+div;
    l++;
    arr[l]=sum%10;
    div=sum/10;
   }
   if(div!=0){
    l++;
    arr[l]=div;
   }

   for(int i=l;i>=1;i--){
    cout<<arr[i];
   }

return 0;
}
