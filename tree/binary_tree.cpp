#include <iostream>
#include <queue>
using namespace std;

//************************** node of tree **************************

struct node
{
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

//******************************* create tree normal way **************************

node *insert(node *root)
{
    int data;
    cout << "enter the data : ";
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "inserting data in left of " << data << endl;
    root->left = insert(root->left);
    cout << "inserting data in right of " << data << endl;
    root->right = insert(root->right);
    return root;
}

//******************************************create a tree from from levelorder way ********************************

void tree_from_levelorder(node* &root){
    queue<node*>q;
    cout<<"enter the root data : ";
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node *temp = q.front();
        q.pop();
    
        cout<<"enter the left data of "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1){
            temp->left=new node(leftdata);
            q.push(temp->left);
        }

        cout<<"enter the right data of "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata != -1){
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}

// **************************display in level wise format *******************************

void levelorder(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        
        q.pop();
        
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

//***************************** travarsal of tree *****************************

void inorder(node *root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<< root->data<<" ";
    inorder(root->right);

}


void preorder(node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


void postorder(node *root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


//**************************** finding height of tree **********************

int height(node *root){
    if(root==NULL){
        return 0;
    }
    int h1 = height(root->left);
    int h2 = height(root->right);
    int ans = max(h1,h2)+1;
    return ans;
}



//************************ diameter of tree *************************

int diameter(node *root){
    if(root==NULL){
        return 0;
    }

    int d1 = diameter(root->left);
    int d2 = diameter(root->right);
    int d3 = height(root->left) + height(root->right) +1;
    int ans = max(d1,max(d2,d3));
    return ans;
}

//******************check tree is balace (if left height and right height difference is 1 or less)************

bool isbalanced(node *root){
    if(root==NULL){
        return true;
    }

    bool b1 = isbalanced(root->left);
    bool b2 = isbalanced(root->right);
    bool b3 = abs(height(root->left) - height(root->right) ) <=1;

    if(b1 && b2 && b3){
        return true;
    }
    else {
        return false;
    }
}

//****************************** main function *************************************

int main()
{

    node *root = NULL;
    root = insert(root);    //creating a node 
   
    //create in the levelwise format it is or for insert function 
    // tree_from_levelorder(root);


    levelorder(root);       //displaying levelwise data

    //traversal by different types(recurssive) ->
    cout<<"\npreorder traversal : ";
    preorder(root);
    cout<<"\ninorder traversal : ";
    inorder(root);
    cout<<"\npostorder traversal : ";
    postorder(root);

    cout<<"\nheight of tree : "<<height(root);
    cout<<"\ndiameter of tree : "<<diameter(root);
    cout<<"\ntree is balance : "<<isbalanced(root);


    return 0;
}


// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1