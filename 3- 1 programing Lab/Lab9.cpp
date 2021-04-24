#include<bits/stdc++.h>
using namespace std;
map<string,int>m;

int main()
{
    string s,s1,st;
    int res,num,num1,ans=0;
    cin>>s;
    cout<<s<<" ";
    while(1)
    {
        sort(s.begin(),s.end());
        s1=s;
        reverse(s1.begin(),s1.end());
        num=0;
        for(int i=0; i<s.length(); i++)
        {
            num=(num*10)+(s[i]-48);
        }cout<<num<<" ";
        num1=0;
        for(int i=0; i<s1.length(); i++)
        {
            num1=(num1*10)+(s1[i]-48);
        }
        res=num1-num;
        int p=0;
        if(res==0)
        {
            cout<<0;
            break;
        }
        while(res>0)
        {
            p=res%10;
            st+=(p+'0');
            res/=10;
        }//ck=1;

        reverse(st.begin(),st.end());
        if(m[st]==0)
        {
            cout<<st<<" ";
            ans++;
            m[st]=1;
        }
        else
        {
            break;
        }
        s="",s1="";
        s=st;
        st="";
    }
    return 0;
}
