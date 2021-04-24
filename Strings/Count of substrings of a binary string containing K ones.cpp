#include<bits/stdc++.h>
using namespace std;
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
        cont=0;
        for(int k=0;k<st.length();k++){
                    if(st[k]=='1')
                        cont++;
                }
            if(cont==1)
              {ans++;
             cout<<st<<endl;
              }
     }

   }
   st="";
   cout<<endl<<ans;
   }
return 0;
}

