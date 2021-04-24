#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int arr[5]={2,1,6,3,5};
    int arr1[5]={2,1,6,3,5};///0-4 number index
    sort(arr,arr+5);/// arr means arr[0],u can also define it as &arr[0]
    for(int i=0;i<5;i++){    /// arr+5 means before the index of arr[5],it is upper bound
        printf("%d \t",arr[i]);
    }
    cout<<endl;

      sort(arr1+2,arr1+5);///u can also sort last three 3 elements
    for(int i=0;i<5;i++){
        printf("%d \t",arr1[i]);
    }
    return 0;
}
