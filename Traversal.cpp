#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *left;
    node *right;

     node(int v)
    {
        data=v;
        left=NULL;
        right=NULL;
    }
    void preorder()
    {
        if(this==NULL)
        return;
        cout<<this->data<<"  ";
        this->left->preorder();
        this->right->preorder();
    }

    void inorder()
    {
        if(this==NULL)
        return;
        
        this->left->preorder();
        cout<<this->data<<"  ";
        this->right->preorder();
    }
    void postorder()
    {
        if(this==NULL)
        return;
       
        this->left->preorder();
        this->right->preorder();
         cout<<this->data<<"  ";
    }
   


};
int main()
{
    node *n1=new node(5);
    n1->left=new node(10);
    n1->right=new node(20);
    n1->left->left=new node(30);
    n1->left->right=new node(40);
    n1->right->left=new node(50);
    n1->right->right=new node(60);
    n1->inorder();
    cout<<endl;
    n1->preorder();
     cout<<endl;
    n1->postorder();


    return 0;
}