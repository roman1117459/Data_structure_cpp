#include<bits/stdc++.h>
using namespace std;

//eta ekta NODE GROUP
class Node
{
    public:
        int val;
        Node* next;
};

int main()
{

    Node a, b;

    a.val = 10;
    b.val = 20;

    a.next = &b;
    b.next = NULL;

    cout << a.val << endl;
    cout << (*a.next).val << endl;
    cout << a.next->val << endl;

    return 0;
}