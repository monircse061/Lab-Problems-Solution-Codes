#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
map<string,int> maap;
vector<int> vec;
int main(){
    string s,s1,st;
    int num=0,cont,k,l,cheak,num1=-1;
    cin>>s;
    for(int i=0;i<s.length();i++){

        s1="";
        for(int j=i;j<s.length();j++){
            s1+=s[j];

            cheak=1;
            for(k=0,l=s1.length()-1;k<l;k++,l--){
                if(s1[k]!=s1[l]){
                    cheak=0;
                    break;
                }

            }
            if(cheak==1){
                    num=s1.length();
                    if(num>num1){
                        num1=num;
                        st=s1;
                    }
                if(maap[s1]==0){
                    maap[s1]=1;
                    cout<<s1<<" "<<num<<endl;
                }
            }
        }
    }
    cout<<endl<<"Ans : "<<num1<<" ";
    cout<<st;
return 0;
}
