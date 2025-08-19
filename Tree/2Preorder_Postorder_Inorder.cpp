//* 1. Traversal Approach ->
//&     a. DFS (Depth-First Search): 
//         i.   Explores as far as possible along each branch before backtracking.
//         ii.  Goes deep into one branch before exploring others.
//         iii. Uses a stack (explicit or through recursion).
//&     b. BFS (Breadth-First Search):
//         i.   Explores all nodes at the current level before moving to the next level.
//         ii.  Traverses level by level.
//         iii. Uses a queue for tracking nodes.
//?------------------------------------------------------------------------------------------------------------------------------
//* 2. Order of Traversal ->
//&     a. DFS: Can traverse in different orders depending on implementation:
//         i.   Preorder: Root → Left → Right
//         ii.  Inorder (for binary trees): Left → Root → Right
//         iii. Postorder: Left → Right → Root
//&     b. BFS: Always processes nodes in a level-wise order.
//?------------------------------------------------------------------------------------------------------------------------------
//* 3. Space Complexity ->
//&     a. DFS: 
//         i.   Requires space proportional to the recursion stack or an explicit stack.
//         ii.  Space complexity is O(h) for trees, where h is the height of the tree, and O(V) for graphs, where V is the number of vertices (in the worst case for recursion).
//&     b. BFS:
//         i.   Requires space for the queue, which stores all nodes at the current level.
//         ii.  Space complexity is O(w), where w is the maximum width of the tree, or O(V) for graphs.
//?------------------------------------------------------------------------------------------------------------------------------
//* 4. Time Complexity ->
//&    Both DFS and BFS have the same time complexity:
//         i.  O(V + E) for graphs (where V is vertices and E is edges).
//         ii. O(n) for trees (where n is the number of nodes).
//?------------------------------------------------------------------------------------------------------------------------------

//^ If any one of the preorder, postorder, inorder array is given then there can be multiple trees possible.
//^ But any two of them are given then a unique tree can be constructed.

//?------------------------------------------------------------------------------------------------------------------------------

//! Depth First Search (DFS) Traversal of a Binary Tree Using Iterative Approach

//^      1
//^    /   \
//^   2     3
//^  / \   / \
//^ 4   5 6   7


#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
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

vector<int> displayTreePreorder(Node* root){    // Preorder Traversal ==> Root -> Left -> Right
    vector<int> ans;
    stack<Node*> st;
    if(root!=NULL) st.push(root);
    while(!st.empty()){
        Node* temp = st.top();
        st.pop();
        ans.push_back(temp->val);
        if(temp->right!=NULL) st.push(temp->right);
        if(temp->left!=NULL) st.push(temp->left);
    }
    return ans;
}

void displayTreePostorder(Node* root){  // Postorder Traversal ==> Left -> Right -> Root
    vector<int> ans;
    stack<Node*> st;
    if(root!=NULL) st.push(root);
    while(!st.empty()){
        Node* temp = st.top();
        st.pop();
        ans.push_back(temp->val);
        if(temp->left!=NULL) st.push(temp->left);
        if(temp->right!=NULL) st.push(temp->right);
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

void displayTreeInorder(Node* root){  // Inorder Traversal ==> Left -> Root -> Right
    vector<int> ans;
    stack<Node*> st;
    Node* node = root;
    while(node!=NULL || !st.empty()){
        if(node){
            st.push(node);
            node = node->left;
        }
        else{
            Node* temp = st.top();
            st.pop();
            ans.push_back(temp->val);
            node = temp->right;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
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
    cout<<"Preorder Traversal: ";
    vector<int> ans = displayTreePreorder(a);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    cout<<"Postorder Traversal: ";
    displayTreePostorder(a);
    cout<<endl;
    cout<<"Inorder Traversal: ";
    displayTreeInorder(a);
}