#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<string> st;
    st.push("Monir");
    st.push("Shakib");
    st.push("Raihan");

    ///cout<<st.top()<<endl;
    ///st.pop();
     ///cout<<st.top();
     while(!st.empty()){///    No iterator for this STACK operation
        string x;
        x=st.top();
        cout<<x<<endl;
        st.pop();
     }
return 0;
}
