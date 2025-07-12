#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};

Node* buildTree(vector<int> &preOrder,int &idx){
    idx++;

    if(preOrder[idx]==-1){
        return nullptr;
    }

    Node* root=new Node(preOrder[idx]);
    root->left=buildTree(preOrder,idx);
    root->right=buildTree(preOrder,idx);

    return root;
}

void preOrderTraversal(Node* root){
    if(root == nullptr){
        return;
    }

    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node* root){
    if(root==nullptr)
    {
        return;
    }

    preOrderTraversal(root->left);
    cout << root->data << " ";
    preOrderTraversal(root->right);
}

int main()
{
    vector<int> preOrder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    int idx=-1;
    Node* root=buildTree(preOrder,idx);
    // preOrderTraversal(root);  //! preOrder Traversal...
    inOrderTraversal(root);
        // cout<<root->data<<endl;
        // cout<<root->left->data<<endl; //! left data first root
        // cout<<root->right->data<<endl; //! right data first root
        // cout<<root->right->left->data<<endl;

        return 0;
}