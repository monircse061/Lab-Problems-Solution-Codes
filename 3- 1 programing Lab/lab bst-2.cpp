#include<bits/stdc++.h>
using namespace std;
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

node* FindMin(node* root)
{
    while(root->left != NULL) root = root->left;
    return root;
}

struct node* Delete(struct node *root, int data)
{
    if(root == NULL) return root;
    else if(data < root->data) root->left = Delete(root->left,data);
    else if (data > root->data) root->right = Delete(root->right,data);
    else
    {
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }

        else if(root->right == NULL)
        {
            struct node *temp = root;
            root = root->left;
            delete temp;
        }

        else
        {
            struct node *temp = FindMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right,temp->data);
        }
    }
    return root;
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
int main(){
    int n,j,a,i,delet,value,search1;
    root=NULL;
    cout<<"Enter numbers"<<endl;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        insert(a);
    }

    cout<<"\nInoder is:"<<endl;
    inoder(root);

        cout<<"\n Enter the node value to delete \n"<<endl;
        cin>>value;
        root = Delete(root,value);

    cout<<"\nInoder  is:"<<endl;
    inoder(root);

return 0;
}
