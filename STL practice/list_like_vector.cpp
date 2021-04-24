#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<float> mylist;
    list<float>::  iterator it;/// list like vector but in vector we only use push_back()
    mylist.push_back(6);/// In list we can also use push_front();
    mylist.push_back(7);
    mylist.push_back(9);
    mylist.push_front(2);
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    /// in list we can use reverse() fuction
    mylist.reverse();
      for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
   /// in list we can use size() fuction
     cout<<mylist.size()<<endl;
     /// in list we can use clear() fuction
     mylist.clear();
       cout<<mylist.size();

    return 0;
}
