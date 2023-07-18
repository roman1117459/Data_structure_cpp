#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree()
{
    int val;
    cin >> val;
    Node* root;
    if(val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node*> q;
    if(root)
        q.push(root);

    while(!q.empty())
    {
        //out node
        Node *p = q.front();
        q.pop();

        //tasks
        int l, r;
        cin >> l >> r;
        Node *myLeft; 
        Node *myRight; 
        if(l == -1)
            myLeft = NULL;
        else 
            myLeft = new Node(l);

        if(r == -1)
            myRight = NULL;
        else 
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;
        
        //push children
        
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);


    }
    return root;

}


void level_order(Node *root)
{

    if(root == NULL)
    {
        cout << "KHALI MAMMA" << endl;
        return;
    }

    int sum = 0;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* f = q.front(); 
        q.pop();

        sum = sum + f->val;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);

        // if(f->right) q.push(f->right);
        // if(f->left) q.push(f->left);
        

    }
    cout << sum << endl;
}



int main()
{
    Node* boot = input_tree();
    // cout << count(boot) << endl;
    level_order(boot);
    return 0;
}