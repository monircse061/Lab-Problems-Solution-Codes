#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
   int arr[5]={2,7,1,3,9};
   list<int> mylist(arr,arr+5);
   list<int>::iterator it;

       for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
   /*if(mylist.empty()){
    cout<<"Empty !";
   }
   else{
    cout<<"Filed";
   }
     */
   cout<<mylist.front()<<endl;
   mylist.pop_front();
   for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;


   cout<<mylist.back()<<endl;
   mylist.pop_back();
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<" ";
    }

    return 0;
}
