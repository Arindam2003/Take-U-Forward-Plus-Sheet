#include<iostream>
#include<queue>
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
void postOrder(Node* root){
    if(root==nullptr)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void levelOder(Node* root){

    queue<Node*> q;
    q.push(root);
    q.push(nullptr);
    while (q.size()>0)
    {
        Node* curr=q.front();
        q.pop();
        
        if(curr ==nullptr)
        {
            if(!q.empty()){
                cout<<endl;
                q.push(nullptr);
                continue;
            }else{
                break;
            }
        }
        cout<<curr->data<<" ";
        if(curr->left!=nullptr)
        {
            q.push(curr->left);
        }
        if(curr->right!=nullptr)
        {
            q.push(curr->right);
        }
    }
    cout<<endl;
}

int height(Node* root){
    if(root==nullptr)
    {
        return 0;
    }
    int leftHT=height(root->left);
    int rightHT=height(root->right);
    return max(rightHT,leftHT)+1;
}

int count (Node * root)
{
    if(root==nullptr)
    {
        return 0;
    }
    int leftCount=count(root->left);
    int rightCount=count(root->right);
    return leftCount+rightCount+1;
}

int sum(Node * root)
{
    if(root==nullptr)
    {
        return 0;
    }
    int leftSum=sum(root->left);
    int rightSum=sum(root->right);
    return (leftSum+rightSum+root->data);
}

int main()
{
    vector<int> preOrder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    int idx=-1;
    Node* root=buildTree(preOrder,idx);
    // preOrderTraversal(root);  //! preOrder Traversal...
    // inOrderTraversal(root); //! inorder Traversal...
    // postOrder(root); //! level order traversal...

    levelOder(root);
    // cout<<root->data<<endl;
    // cout<<root->left->data<<endl; //! left data first root
    // cout<<root->right->data<<endl; //! right data first root
    // cout<<root->right->left->data<<endl;
    int h=height(root);
    int c=count(root);
    int s=sum(root);
    cout<<"Height->"<<h<<endl;
    cout<<"Count->"<<c<<endl;
    cout<<"Sum->"<<s<<endl;
    return 0;
}