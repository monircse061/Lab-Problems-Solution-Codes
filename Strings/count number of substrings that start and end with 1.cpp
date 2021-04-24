#include<bits/stdc++.h>
using namespace std;
map<string,int>m;
int main(){
    string s,s1,st;
    int num,ans,cont,n;
    cin>>n;
    while(n--){
        cin>>s;
        ans=0;
        for(int i=0;i<s.length();i++){
            st="";
            for(int j=i;j<s.length();j++){
                st+=s[j];
                if(m[st]==0){
                        m[st]=1;
                    if(st[0]=='1'&&st[st.length()-1]=='1')
                      {
                          ans++;
                          cout<<st<<" ";
                      }
                }
            }

        }
        st="";
        m.clear();
        cout<<endl<<ans;
    }
return 0;
}
