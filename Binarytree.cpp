#include <bits/stdc++.h>
using namespace std;

struct Node
{
     int val;
     Node *left;
     Node *right;
     Node(int val)
     {
          this->val = val;
          left = right = NULL;
     }
};
void inorder(Node *root)
{
     if (!root)
          return;
     inorder(root->left);
     cout << root->val << " ";
     inorder(root->right);
}
void preorder(Node *root)
{
     if (!root)
          return;
     cout << root->val << " ";
     preorder(root->left);
     preorder(root->right);
}
void postorder(Node *root)
{
     if (!root)
          return;
     postorder(root->left);
     postorder(root->right);
     cout << root->val << " ";
}
void levelorder(Node *root)
{
     vector<int> ans;
     if (!root)
          return;
     queue<Node *> q;
     q.push(root);
     cout << q.empty() << endl;
     while (!q.empty())
     {
          if (q.front()->left)
               q.push(q.front()->left);
          if (q.front()->right)
               q.push(q.front()->right);
          cout << q.front()->val << " ";
          q.pop();
     }
}
vector<vector<int>> level(Node *root)
{
     vector<vector<int>> ans;
     if (!root)
          return ans;
     queue<Node *> q;
     q.push(root);
     while (!q.empty())
     {
          int size = q.size();
          vector<int> level;
          for (int i = 0; i < size; i++)
          {
               Node *node = q.front();
               q.pop();
               if (node->left)
                    q.push(node->left);
               if (node->right)
                    q.push(node->right);
               level.push_back(node->val);
          }
          ans.push_back(level);
     }
     return ans;
}
int main()
{
     Node *root = new Node(4);
     root->left = new Node(2);
     root->left->left = new Node(1);
     root->left->right = new Node(3);
     root->right = new Node(6);
     root->right->left = new Node(5);
     root->right->right = new Node(7);
     levelorder(root);
     cout << endl;
     for (auto &&nums : level(root))
     {
          for (auto &&num : nums)
          {
               cout << num << " ";
          }
          cout << endl;
     }
     return 0;
}
