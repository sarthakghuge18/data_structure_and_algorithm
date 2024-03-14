#include<iostream>
#include<queue>
using namespace std;

// ****************** node structure (creation of new node of node data type)***************
struct node{

    int data;
    node *left;
    node *right;

    node(int d){
        this->data = d;
        this->left =  NULL;
        this->right = NULL;
    }
};

 // *************************** inserting the element in the tree *******************************

node *insert_node(node *root,int d){

    if(root == NULL){
        root = new node(d);
        return root;
    }

    if(d > root->data){
        root->right = insert_node(root->right,d);
    }else{
        root->left = insert_node(root->left,d);
    }

    return root;
}

// *********************************** create method **************************

void create(node* &root){
    int data;
    cin>>data;

    while (data != -1){
        root = insert_node(root,data);
        cin>>data;

    }
}

//*************************** traversal the tree n the inorder method recursive way *****************

void inorder(node *root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

//******************* searching node element in tree ***************************

bool search(node *root ,int x){

    if(root == NULL){
        return false;
    }

    if(root->data == x){
        return true;
    }

    if(x < root->data){
        return search(root->left,x);
    }
    else{
        return search(root->right,x);
    }
}

//**************************** minimum value in the tree ******************

int min_value(node *root){
    while(root -> left != NULL){
        root = root -> left;
    }

    return root->data;
}


//*************************** maximum value in the tree ****************************

int max_value(node *root){
    while(root -> right != NULL){
        root = root->right;
    }

    return root->data;
    
}

// ******************************** deletion of node ****************************

node* delete_node(node *root,int x){

if(root == NULL){
    return NULL;
}
if(root -> data == x){

    // 0 node
    if(root ->left == NULL && root->right ==NULL){
        delete root;
        return NULL;
    }
    
    // 1 node->

    //left node

    if(root ->left != NULL && root ->right == NULL){
        node *temp = root->left;
        delete root;
        return temp;
    }
    
    //right node

    if (root ->right != NULL && root ->left == NULL){
        node *temp = root->right;
        delete root;
        return temp;
    }

    // 2 node

    if(root->right != NULL && root ->left != NULL){
        int min = min_value(root->right);
        root->data = min;
        root ->right = delete_node(root->right,min);
        return root;
    }

}else if(x > root ->data){
    root->right = delete_node(root->right,x);
    return root;
}else{
    root->left = delete_node(root->left ,x);
    return root;
}

}

//*************************** main function of program *******************************

int main(){

    node *root = NULL;
    create(root);

    cout<<"\nsearch : "<<search(root,5);

    cout<<"\nmaximim value in the tree : "<<min_value(root);
    cout<<"\nmaximim value in the tree : "<<max_value(root);

    cout<<"\ninorder : ";
    inorder(root);

    root = delete_node(root,5);
    cout<<"\ninorder : ";
    inorder(root);

    root = delete_node(root,6);
    cout<<"\ninorder : ";
    inorder(root);

    root = delete_node(root,8);
    cout<<"\ninorder : ";
    inorder(root);

    root = delete_node(root,3);
    cout<<"\ninorder : ";
    inorder(root);

    root = delete_node(root,2);
    cout<<"\ninorder : ";
    inorder(root);

}

//**************************************** Thank you *******************************************