#include<bits/stdc++.h>
using namespace std;
int main(){
      vector<int> v ;
      v.push_back(2);
      v.push_back(3);
      v.push_back(5);
      v.push_back(9);
      v.push_back(10);
      v.push_back(13);
      /*bool ans= binary_search(v.begin(),v.end(),9);
      if(ans) cout<<" Found ";
       else cout<<"  Not Found ";*/

        /// for lower bound ; 1st element which is same or greater than the input value
       vector<int>::iterator it=lower_bound(v.begin(),v.end(),5);
       cout<<*it<<endl;
       cout<<distance(v.begin(),it)<<endl;
       ///if(it==v.end())
        ///cout<<"not found" ;
     ///  for upper bound    1st element which is only  greater than the input value
       vector<int>::iterator itt = upper_bound(v.begin(),v.end(),9);
         cout<<*itt<<endl;
       cout<<distance(v.begin(),itt);

return 0;
}
