#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    vector<double> vec;
    vector<double>::iterator it;
    vec.push_back(23.87);
    vec.push_back(11.07);
    vec.push_back(34.26);
    vec.push_back(88.01);
    for(it=vec.begin();it!=vec.end();it++){
        printf("%lf \t",*it);
    }
    return 0;
}
