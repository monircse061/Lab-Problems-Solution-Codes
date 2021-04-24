#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> p;
    p.push(400);
    p.push(200);/// in priority queue we can use push(),pop(),top() - (front) fuction
    p.push(100);
    p.push(45);/// In int it will be sorted in descending order but in string
    p.push(250);/// the strings will be sorted in reverse order of laxico-graphical order
    while(!p.empty())
    {
            int x;
            x=p.top();
            cout<<x <<"\t";
            p.pop();
    }


    return 0;
}
