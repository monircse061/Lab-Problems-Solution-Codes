#include<bits/stdc++.h>
using namespace std;
map<string,int>m;
int main(){
    string s,s1,st;
    int i,j,k,n,num,l,cont,ck;
    cin>>s;
    for(i=0;i<s.length();i++){
        s1="";
        cont=0;
        for(j=i;j<s.length();j++){
            s1+=s[j];
            ck=1;
                for( k=0,l=st.length()-1; k<l; k++,l--)
                {
                    if(st[k]!=st[l])
                    {
                        cont++;
                        ck=0;//
                        break;
                    }
                }
                if(ck==1)
                {
                    if(m[st]==0)
                    {
                        ans++;
                        m[st]=1;
                        cout<<st<<" "<<cont<<endl;
                    }
                }

        }
    }

return 0;
}
