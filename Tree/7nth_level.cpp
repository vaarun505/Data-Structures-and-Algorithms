//*      1
//*    /   \
//*   2     3
//*  / \   / \
//* 4   5 6   7


#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right= NULL;
    }
};

void nthLevelPrint(Node* root, int current, int level){
    if(root == NULL) return;
    if(current == level){
        cout<<root->val<<" ";
        return;
    }
    nthLevelPrint(root->left, current+1, level);
    nthLevelPrint(root->right, current +1, level);
}

// TC = O(N)
// SC = O(level) ≈ O(N) in worst case
// in balanced tree SC is = O(logN)

int levelTree(Node* root){
    if(root == NULL) return 0;
    return 1 + max(levelTree(root->left), levelTree(root->right));
}

void printAllLevel(Node* root){
    int n = levelTree(root);
    for(int i=1; i<=n; i++){
        nthLevelPrint(root, 1, i);
        cout<<endl;
    }
}

int main(){
    Node* a =new Node(1);
    Node* b =new Node(2);
    Node* c =new Node(3);
    Node* d =new Node(4);
    Node* e =new Node(5);
    Node* f =new Node(6);
    Node* g =new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    cout<<"The nth level of the tree is : ";
    nthLevelPrint(a, 1, 3);
    cout<<endl;
    cout<<"The nth level of the tree in reverse order is : "<<endl;
    printAllLevel(a);
}
