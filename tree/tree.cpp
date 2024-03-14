#include <iostream>
using namespace std;

struct node
{

    int data;
    node *left;
    node *right;
};

class stack
{

public:
    int top;
    node *array[30];

    stack()
    {
        top = -1;
    }

    bool isempty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void push(node *x)
    {
        top++;
        array[top] = x;
    }

    node *pop()
    {
        return array[top--];
    }
};

class tree
{

public:
    stack s;
    stack s1;
    node *root;

    tree()
    {
        root = NULL;
    }

    void insert(int val)
    {
        node *p = new node;
        p->data = val;
        p->left = NULL;
        p->right = NULL;

        if (root == NULL)
        {
            root = p;
        }
        else
        {
            int choice;
            node *temp = root;
            do
            {
                cout << "1.left \n2.right \n ";
                cin >> choice;
                if (choice == 1)
                {
                    if (temp->left == NULL)
                    {
                        temp->left = p;
                        return;
                    }
                    else
                    {
                        temp = temp->left;
                    }
                }
                if (choice == 2)
                {
                    if (temp->right == NULL)
                    {
                        temp->right = p;
                    }
                    else
                    {
                        temp = temp->right;
                    }
                }
            } while (choice < 3);
        }
    }

    void nr_preorder(node *t)
    {
        while (t != NULL)
        {
            cout << t->data << " ";
            s.push(t);
            t = t->left;
        }
        while (!s.isempty())
        {
            t = s.pop();
            t = t->right;
            while (t != NULL)
            {
                cout << t->data;
                s.push(t);
                t = t->left;
            }
        }
    }

    void nr_inorder(node *t)
    {
        while (t != NULL)
        {
            s.push(t);
            t = t->left;
        }
        while (!s.isempty())
        {
            t = s.pop();
            cout << t->data << " ";
            t = t->right;

            while (t != NULL)
            {
                s.push(t);
                t = t->left;
            }
        }
    }

    void nr_postorder(node *t)
    {
        s.push(t);
        while (!s.isempty())
        {
            t = s.pop();
            s1.push(t);
            if (t->left != NULL)
            {
                s.push(t->left);
            }
            if (t->right != NULL)
            {
                s.push(t->right);
            }
        }

        while (!s1.isempty())
        {
            t = s1.pop();
            cout << t->data << " ";
        }
    }

    // recursive preorder , inorder , postorder

    void r_preorder(node *t)
    {
        if (t == NULL)
        {
            return;
        }
        cout << t->data << " ";
        r_preorder(t->left);
        r_preorder(t->right);
    }

    void r_inorder(node *t)
    {
        if (t == NULL)
        {
            return;
        }
        r_inorder(t->left);
        cout << t->data << " ";
        r_inorder(t->right);
    }

    void r_postorder(node *t)
    {
        if (t == NULL)
        {
            return;
        }
        r_postorder(t->left);
        r_postorder(t->left);
        cout << t->data << " ";
    }

    void display()
    {
        cout << "by non recursive -> " ;
        cout << "\n\tinorder : ";
        nr_inorder(root);
        cout << "\n\t preorder : ";
        nr_preorder(root);
        cout << "\n\tpostorder : ";
        nr_postorder(root);

        cout << "\n\n\nby recursive -> " ;
        cout << "\n\tinorder : ";
        r_inorder(root);
        cout << "\n\t preorder : ";
        r_preorder(root);
        cout << "\n\tpostorder : ";
        r_postorder(root);
    }
};

int main()
{
    tree t;
    int ch;
    do
    {
        cout << "\n1.add node\n2.display\n3.exit\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            int a;
            cout << "enter element to be added\n";
            cin >> a;
            t.insert(a);
            break;
        }
        case 2:
        {
            t.display();
            break;
        }
        }
    } while (ch != 3);
    return 0;
}