#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    ///pair<string,int> p;
    /// first method
    /*p.first="dipto";
    p.second=43;*/
    /// second method
    ///p = make_pair("dipto",43);
    ///cout<<p.first<<"\t"<<p.second;
    vector<pair<int,string> > p;
    vector<pair<int,string> >:: iterator it;

    p.push_back(make_pair(21,"Monir"));
    p.push_back(make_pair(32,"Shakib"));
    p.push_back(make_pair(50,"Gazi"));

    for(it=p.begin();it!=p.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

return 0;
}
