#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
compare(int a,int b){
return a>b;
}
int main()
{
    vector<double> vec;
    vector<double>::iterator it;
    vec.push_back(23.87);
    vec.push_back(11.07);
    vec.push_back(34.26);
    vec.push_back(88.01);

    sort(vec.begin(),vec.end());///ascending order
       for(it=vec.begin();it!=vec.end();it++){
        printf("%lf \t",*it);
    }
    cout<<endl;
    sort(vec.begin(),vec.end(),compare);///descending order
        for(it=vec.begin();it!=vec.end();it++){
        printf("%lf \t",*it);
    }

    cout<<endl;
    sort(vec.begin(),vec.begin()+3);///  first 3 number - ascending order
        for(it=vec.begin();it!=vec.end();it++){
        printf("%lf \t",*it);
    }
return 0;
}

