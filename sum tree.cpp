#include <iostream>
using namespace std;
struct node{
  int data;
  struct node *left;
  struct node *right;
};
class solution{
public:
int helper(node*root)
{
if(!root)
  return 0;
int lv = helper(root->left);
int rv = helper(root->right);
if(root->left==NULL && root->right==NULL)
  return root->data;
  if(root->data==(lv+rv))
    return (lv + rv + root->data);
    else
      return 0;
}
bool isSumTree(node*root){
if(helper(root))
  return true;
  else
    return false;
}
node* newNode(int data)
{
    node* node1 = new node();
    node1->data = data;
    node1->left = NULL;
    node1->right = NULL;
    return(node1);
}
 
/* Driver code */


};
int main()
{
  solution s1;
  node *root = s1.newNode(24);
  root->left = s1.newNode(10);
  root->right = s1.newNode(3);
  root->left->left = s1.newNode(4);
  root->left->right = s1.newNode(6);
  root->right->right = s1.newNode(3);
  if (s1.isSumTree(root))
    cout << "The given tree is a SumTree ";
  else
    cout << "The given tree is not a SumTree ";
  return 0;
}
