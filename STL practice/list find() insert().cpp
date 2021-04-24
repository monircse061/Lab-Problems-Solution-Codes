#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
   int arr[5]={2,7,1,3,9};
   list<int> mylist(arr,arr+5);
   list<int>:: iterator it;
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    it=find(mylist.begin(),mylist.end(),3);
    /// we can use mylist.erase(it); it point that elents should be removed
    cout<<*it<<endl;
    mylist.insert(it,5);
       for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<" ";
    }
 return 0;
}
