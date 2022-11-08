#include<iostream>
using namespace std;
class tree{
public:
int data;
tree*right;
tree*left;
 void boundarytraves(tree*root){
if(root==NULL)
return ;
boundarytraves(root->left);
cout<<root->data;
boundarytraves(root->right);
cout<<root->data;

}

tree* newNode(int data)
{
    tree* node = new Node(data);
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}
 

};
int main(){
tree* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(7);
    root->left->right = newNode(6);
    root->right->left = newNode(5);
    root->right->right = newNode(4);
    cout <<"Boundary traversal of binary tree is \n";
 
    boundarytraves(root);
 
    return 0;



}
