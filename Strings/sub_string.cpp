#include<bits/stdc++.h>
using namespace std;
map<string,int>m;
int main(){
   string s,st;
   int num,k,n,ans,cont;
   cin>>n;
   while(n--){
        cin>>s;
        ans=0;
   for(int i=0;i<s.length();i++){
    st="";
    for(int j=i;j<s.length();j++){
        st+=s[j];/// this is a sub string

        if(m[st]==0){
                m[st]=1;
                ans++;
               cout<<st<<" ";
        }
     }

   }
   st="";
   m.clear();
   cout<<endl<<ans;
   }
return 0;
}
