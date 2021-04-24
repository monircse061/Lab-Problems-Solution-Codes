#include<bits/stdc++.h>
using namespace std;
map<string,int>m;
int cont[200];
int main()
{
    int n,ans=0,ck;
    string s,s1,s2,st;
    scanf("%d",&n);
    while(n--)
    {
        cin>>s;
        ans=0;
        for(int i=0; i<s.length(); i++)
        {
            st="";
            for(int j=i; j<s.length(); j++)
            {
                st+=s[j];
                ck=1;
                for(int k=0,l=st.length()-1; k<l; k++,l--)
                {

                    if(st[k]!=st[l])
                    {
                        ck=0;//
                        break;
                    }
                }
                if(ck==1)
                {
                    if(m[st]==0)
                    {
                        ans++;
                        m[st]=1;///cout<<st<<" ";
                    }
                }
            }
        }//cout<<m["a"];
        s="";
        m.clear();
        cout<<ans<<endl;
    }
    return 0;
}
