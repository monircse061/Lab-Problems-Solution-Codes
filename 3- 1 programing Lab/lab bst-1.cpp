#include<bits/stdc++.h>
using namespace std;
int sorted_array[1000],nc=0;
struct node
{
    int data;
     node *left;
     node *right;
};
node *root;

void insert(int x)
{
    node *newnode = new node();
    newnode->data=x;
    newnode->left=NULL;
    newnode->right=NULL;
    if(root==NULL)
    {
        root=newnode;
    }
    else
    {
        node *tem=root;
        while(1)
        {
            if(newnode->data<=tem->data)
            {
                if(tem->left==NULL)
                {
                    tem->left=newnode;
                    break;
                }
                else
                {
                    tem=tem->left;
                }
            }
            else
            {
                if(tem->right==NULL)
                {
                    tem->right=newnode;
                    break;
                }
                else
                {
                    tem=tem->right;
                }
            }
        }
    }
}
void inoder(node *r)
{
    if(r==NULL)return;
    inoder(r->left);
    sorted_array[nc++]=r->data;
    inoder(r->right);
}
int main(){
    int n,a[1000];
    root=NULL;
    cout<<"Enter the array size : "<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        insert(a[i]);
    }
    cout<<"\nSorted array is:"<<endl;
    inoder(root);
    for(int d=0;d<n;d++){
        cout<<sorted_array[d]<<" ";
    }

return 0;
}
