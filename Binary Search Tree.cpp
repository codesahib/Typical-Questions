#include <iostream>
using namespace std;
struct Node* root=NULL;
struct Node{
    int data;
    Node* left;
    Node* right;
};
void preorder(struct Node* root){
    if(root==NULL) return;
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
}
struct Node* createNode(int d){
    struct Node* node=new Node();
    node->data=d;
    node->left=NULL;
    node->right=NULL;
    return node;
}
struct Node* insertNode(struct Node* root,int d){

    if(root==NULL) return createNode(d);
    else {

            if(d <= root->data){
                    root->left=insertNode(root->left,d);
            }
            else{
                root->right=insertNode(root->right,d);
            }
    }
    return root;
}
int main(){
    root=insertNode(root,7);
    insertNode(root,5);
    insertNode(root,6);
    insertNode(root,10);
    insertNode(root,9);
    insertNode(root,11);
    preorder(root);
    //inorder();
    //postorder();
    return 0;
}
