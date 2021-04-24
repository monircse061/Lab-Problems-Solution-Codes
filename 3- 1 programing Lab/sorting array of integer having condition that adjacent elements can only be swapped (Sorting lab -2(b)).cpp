#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={8,3,1,6,2};
    int i,j,k,tem,n=5;i=0;
    for(i=0;i<10;)
        {
    for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
        {
        tem=a[i];
        a[i]=a[j];
        a[j]=tem;
        }
        i++;
        }
        }

     for(i=0;i<n;i++)
            printf("%d ",a[i]);
     return 0;
}

