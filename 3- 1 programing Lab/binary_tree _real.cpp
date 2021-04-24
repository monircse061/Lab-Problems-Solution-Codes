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
    // Wohoo... I found you, Get ready to be deleted
    else
    {
        // Case 1:  No child
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        //Case 2: One child
//        else if(root->left == NULL)
//        {
//            struct node *temp = root;
//            cout<<root->data<< " " <<endl;
//            root = root->right;
//            delete temp;
//            cout<<root->data<< " " <<endl;
//        }
        else if(root->right == NULL)
        {
            struct node *temp = root;
            root = root->left;
            delete temp;
        }
        // case 3: 2 children
        else
        {
            struct node *temp = FindMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right,temp->data);
        }
    }
    return root;
}

struct node* search(struct node* root, int data)
{
    // Base Cases: root is null or data is present at root
    if (root == NULL || root->data == data)
        return root;

    // Key is greater than root's data
    if (root->data < data)
        return search(root->right, data);

    // Key is smaller than root's data
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


int m(node *tem)
{
    while (tem->right != NULL) tem = tem->right;
    return tem ->data;
}

main()
{
    int n,j,a,i,delet,value,search1;
    root=NULL;
    cout<<"Enter how many data u want to insert:"<<endl;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        insert(a);
    }

    cout<<"\n\ninoder list is:"<<endl;
    inoder(root);

    // cout<<endl<< m(root)<<endl;

    cout<<"\n\nTo delete a node press 1: "<<endl;
    cin>>delet;
    if(delet==1)
    {
        cout<<"Enter the node value "<<endl;
        cin>>value;
        root = Delete(root,value);
    }

    cout<<"\n\ninoder list is:"<<endl;
    inoder(root);


    while(1)
    {
        cout<<"\n\nTo search a node press 2: "<<endl;
        cin>>search1;
        if(search1==2)
        {
            cout<<"Enter the node value "<<endl;
            cin>>value;
            struct node *temp = search(root,value);

            if (temp == NULL)
            {
                cout<<"value con not found " << endl;
            }
            else
            {

                if (temp == NULL)
                {
                    cout<<"temp is null " << endl;
                }
                else
                {
                    struct node *temp1 = temp -> right;
                    temp = temp->left;



                     if (temp1 == NULL && temp == NULL)
                    {
                        cout<<" both is null "<< endl;
                    }
                    else if(temp1 != NULL && temp != NULL){
                        cout<<" left is  "<< temp-> data<< " right value is" << temp1-> data << endl;
                    }
                    else if (temp == NULL){
                         cout<<" left is null "<< " right value is " << temp1-> data << endl;
                    }
                    else {
                        cout<<" right is null "<< " left value is " << temp-> data << endl;
                    }

                }
            }
        }

        else break;

    }


    cout<<"\n\ninoder list is:"<<endl;
    inoder(root);

//    cout<<"\n\npreoder list is:"<<endl;
//    preoder(root);
//    cout<<"\n\ninoder list is:"<<endl;
//    inoder(root);
//    cout<<"\n\npostoder list is:"<<endl;
//    postoder(root);
//    cout<<endl;

    /*Code To Test the logic
      Creating an example tree
                5
    		   / \
    		  3   10
    		 / \   \
    		1   4   11
     5 3 10 1 4 11
    */
//  8 55 40 80 34 28 38 60 90

// 5 5 10 15 12 20
}


