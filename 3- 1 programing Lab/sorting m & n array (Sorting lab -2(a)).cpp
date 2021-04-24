#include<bits/stdc++.h>
using namespace std;
int u;
int main(){
int arr_m[100],arr_n[100],m,n;
scanf("%d",&m);
for(int i=0;i<m;i++)
{
 scanf("%d",&arr_m[i]);
}

scanf("%d",&n);
int arr_mn[m+n];
for(int i=0;i<n;i++)
{
 scanf("%d",&arr_mn[i]);
 u=i;
}

for(int j=u+1,k=0;j<m+n,k<m;j++,k++){
    arr_mn[j]=arr_m[k];
}
///   print
//for(int i=0;i<m+n;i++){
//    printf("%d ",arr_mn[i]);
//}
cout<<endl;
sort(arr_mn,arr_mn+m+n);
cout<<"Sorted Array ......";
for(int i=0;i<m+n;i++){
    printf("%d ",arr_mn[i]);
}
return 0;
}
