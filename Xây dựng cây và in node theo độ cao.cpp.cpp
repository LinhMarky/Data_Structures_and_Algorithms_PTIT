#include <bits/stdc++.h>
using namespace std;
struct node{
  int data;
  node* left;
  node* right;
  node(int data){
    this -> data = data;
  }
};
int main(){
  map<node*, int> depth;
  node* root = new node(3);
  depth[root] = 0;
  root -> left = new node(2);
  depth[root -> left] = 1;
  root -> left -> left = new node(5);
  depth[root -> left -> left] = 2;
  root -> left -> right = new node(6);
  depth[root -> left -> right] = 2;
  root -> right = new node(1);
  depth[root -> right] = 1;
  root -> right -> left = new node(4);
  root -> right -> right = new node(7);
  depth[root -> right -> left] = 2;
  depth[root -> right -> right] = 2;
  queue<node*> q;
  int temp = 0;
  q.push(root);
  while(root){
    node* top = q.front(); q.pop();

    if(depth[top] != temp){
      cout << "\n";
      temp = depth[top];
    }
    cout << top -> data << " ";
    if(top -> left){
      q.push(top -> left);
    }
    if(top -> right){
      q.push(top -> right);
    }
  }
}