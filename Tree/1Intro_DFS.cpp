/⁡⁢⁣⁣/ 1. Node : A basic unit of a tree containing data and pointers to child nodes.
// 2. Root : The topmost node in a tree, with no parent.
// 3. Parent : A node with child nodes directly connected to it.
// 4. Child : A node directly connected and below another node (its parent).
// 5. Leaf : A node with no children.
// 6. Subtree : A portion of the tree consisting of a node and its descendants.
// 7. Height : The number of edges on the longest path from a node to a leaf.
// 8. Depth : The number of edges from the root to a given node.
// 9. Level : The depth of a node plus one, representing its distance from the root.
// 10. Degree : The total number of children a node has.
//* 11. Binary Tree : A tree where each node has at most two children (left and right).⁡
//* 12. Full Binary Tree : A binary tree where every node has 0 or 2 children.
//* 13. Complete Binary Tree : A binary tree where all levels, except possibly the last, are completely filled, and nodes are left-aligned.
//* 14. Perfect Binary Tree : A binary tree where all interior nodes have 2 children, and all leaves are at the same level.
//* 15. Balanced Tree : A tree where the height difference between left and right subtrees is minimal (e.g., AVL tree).
//* 16. Degenerate Tree : A tree resembling a linked list where every parent has only one child.
//* ⁡⁢⁣⁣17. AVL Tree : A self-balancing binary search tree maintaining a height difference of ≤1 for subtrees.
// 18. Heap : A tree-based data structure where parent nodes are ordered (min-heap: parent ≤ children, max-heap: parent ≥ children).
// 19. Traversal : The process of visiting all nodes in a tree (e.g., Inorder, Preorder, Postorder).
// 20. Inorder Traversal : Left subtree → Node → Right subtree.
// 21. Preorder Traversal : Node → Left subtree → Right subtree.
// 22. Postorder Traversal : Left subtree → Right subtree → Node.
// 23. Level Order Traversal : Visiting nodes level by level using a queue.
// 24. Path : A sequence of nodes connecting the root to a specific node.
// 25. Ancestor : A node that lies on the path from the root to another node.
// 26. Descendant : A node that lies on the path below another node.
// 27. LCA (Lowest Common Ancestor) : The deepest common ancestor of two given nodes.
//* 28. Binary Search Tree (BST) : A binary tree where the left child < root < right child for all nodes.
//* 29. Trie : A tree used to store strings, with edges representing characters.
//* 30. Segment Tree : A tree for efficiently querying and updating ranges of an array.⁡

//?------------------------------------------------------------------------------------------------------------------------------

//! Depth First Search (DFS) Traversal of a Binary Tree Using Recursion

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

//~ displayTree function is essentially implementing a Depth First Search (DFS) traversal of a binary tree,
//~ specifically a Preorder Traversal.

//? Depth First Search (DFS) is a technique used to traverse a tree or graph. It is of three types:
//& 1. Preorder Traversal: Visit the root node first, then recursively do a preorder traversal of the left subtree, followed by the right subtree.
//& 2. Inorder Traversal: Recursively do an inorder traversal of the left subtree, visit the root node, and then do an inorder traversal of the right subtree.
//& 3. Postorder Traversal: Recursively do a postorder traversal of the left subtree, followed by the right subtree, and then visit the root node.

//^      1
//^    /   \
//^   2     3
//^  / \   / \
//^ 4   5 6   7

void displayTreePreorder(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    displayTreePreorder(root->left);
    displayTreePreorder(root->right);
}
void displayTreeInorder(Node* root){
    if(root == NULL) return;
    displayTreeInorder(root->left);
    cout<<root->val<<" ";
    displayTreeInorder(root->right);
}
void displayTreePostorder(Node* root){
    if(root == NULL) return;
    displayTreePostorder(root->left);
    displayTreePostorder(root->right);
    cout<<root->val<<" ";
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
    displayTreePreorder(a);
    cout<<endl;
    cout<<"Inorder Traversal: ";
    displayTreeInorder(a);
    cout<<endl;
    cout<<"Postorder Traversal: ";
    displayTreePostorder(a);
}