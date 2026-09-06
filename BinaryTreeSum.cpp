#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
     int data;
     Node* left;
     Node* right;
     Node(int val)
     {
        data = val;
        left = NULL;
        right = NULL;
     }
};
int maxSum(Node* root)
{
    if(root==nullptr) return 0;
    int take = root->data;
    if(root->left){
        take += maxSum(root->left->left) + maxSum(root->left->right);
    }
    if(root->right){
        take += maxSum(root->right->left) + maxSum(root->right->right);
    }
    int not_take = maxSum(root->left) + maxSum(root->right);
    return max(take,not_take);
}
int main()
{
    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(2);
    root->left->left = new Node(1);
    root->left->right = new Node(4);
    root->right->left = new Node(7);
    root->left->left->left = new Node(8);
    cout<<maxSum(root);
    return 0;
}