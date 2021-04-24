/*
       nabil = 34
       arnob = 55
       dipto = 21
        ali  = 21
     print them first name column in alphabetical order by map
      ali  = 21
     arnob = 55
     dipto = 21
     nabil = 34

     second column doesnot matter
     */
#include<bits/stdc++.h>
using namespace std;
int main(){
     map<string,int> m;
     map<string,int>:: iterator it;
     m["nabil"]=34;
     m["arnob"]=55;
     m["dipto"]=21;
     m.insert(make_pair("ali",21));
     for(it=m.begin();it!=m.end();it++){
         cout<<it->first<<" "<<it->second<<endl;

     }
return 0;
}

