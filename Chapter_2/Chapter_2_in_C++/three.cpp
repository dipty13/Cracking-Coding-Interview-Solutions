/*  2.3
*   Implement an algorithm to delete a node in the middle of a
*   single linked list, given only access to that node.
*/
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *next;
};
Node *head;
Node *tail;
void insert_elements(int value)
{
    Node *tmp = new Node();
    if(head == NULL)
    {
        tmp->data = value;
        head = tmp;
        tail = tmp;
    }else{
        tmp->data = value;
        tail->next = tmp;
        tail = tail->next;
    }

}
void remove_element(int n)
{
    Node *tmp = head;
    Node *prev = head;
    while(tmp != NULL)
    {
        if(tmp->data == n)
        {
            prev->next = tmp->next;
            break;
        }
        prev = tmp;
        tmp = tmp->next;
    }
}
void print_elements()
{
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int main()
{
    insert_elements(5);
    insert_elements(5);
    insert_elements(3);
    insert_elements(2);
    insert_elements(3);
    print_elements();
    remove_element(3);
    print_elements();
    return 0;
}
