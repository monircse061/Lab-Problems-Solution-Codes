#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root;

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
struct node* search(struct node* root, int data)
{
    if (root == NULL || root->data == data)
        return root;
    if (root->data < data)
        return search(root->right, data);
    return search(root->left, data);
}
void preoder(node *r)
{
    if(r==NULL)return;
    cout<<r->data<<" ";
    preoder(r->left);
    preoder(r->right);
}

void inoder(node *r)
{
    if(r==NULL)return;
    inoder(r->left);
    cout<<r->data<<" ";
    inoder(r->right);
}

void postoder(node *r)
{
    if(r==NULL)return;
    postoder(r->left);
    postoder(r->right);
    cout<<r->data<<" ";
}
int main()
{
    int n,j,a,i,value,n1;
    root=NULL;
    cin>>n>> n1;
    for(i=0; i<n; i++)
    {
        cin>>a;
        insert(a);
    }

    cout<<"\nInoder is:"<<endl;
    inoder(root);
    while(n1--)
    {
            cout<<"\nenter Serach value\n "<<endl;
            cin>>value;
            struct node *temp = search(root,value);

            if (temp == NULL)
            {
                cout<<"value not found " << endl;
            }
            else
            {
                insert(value);
            }

    }

    cout<<"\nInorder list is:"<<endl;
    inoder(root);
    return 0;
}
