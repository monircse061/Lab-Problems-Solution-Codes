#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> vec;

    vec.push_back(45);///vec[0]=45
    vec.push_back(33);///vec[1]=33
    vec.push_back(52);///vec[2]=52
    vec.push_back(88);///vec[3]=88
    for(int i=0;i<vec.size();i++){
        printf("%d \t",vec[i]);
    }


     /// in Vector we can use size() fuction
       for(int i=0;i<vec.size();i++){
        printf("%d \t",vec[i]);
    }

    return 0;
}
