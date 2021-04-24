#include<bits/stdc++.h>
using namespace std;
map<string,int>m;
int main()
{
    string s,st,ss;
    int num,k,l,n,ans,ck,mn;
    cin>>n;
    while(n--)
    {
        cin>>s;
        ans=0;
        mn=-1;
        for(int i=0; i<s.length(); i++)
        {
            st="";
            for(int j=i; j<s.length(); j++)
            {
                st+=s[j];            /// this is a sub string
                ck=1;
                for(k=0, l=st.length()-1; k<l; k++,l--)
                {
                    if(st[k]!=st[l])
                    {
                        ck=0;
                        break;
                    }
                }
                if(ck==1)
                {
                    if(m[st]==0)
                    {
                        m[st]=1;
                        ans++;
                        //cout<<st.length()<<" "<<mn<<endl;
                        int len=st.length();
                        if(mn<len)
                        {
                            ss="";
                            //cout<<"1";
                            mn=st.length();
                            ss=st;
                        }
                    }

                }

            }

        }
        st="";
        m.clear();
        cout<<ss<<" ";
        ss="";
        //cout<<endl<<ans;
    }
    return 0;
}

