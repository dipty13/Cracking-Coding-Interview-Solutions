/*  2.2
*   Implement an algorithm to find the nth to last element of a singly linked list.
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
void elements_from_nth_to_last(int n)
{
    Node *tmp = head;
    for(int i = 0; i < n; i++)
    {
        if(tmp == NULL)
        {
            break;
        }
        tmp = tmp->next;
    }
    while(tmp != NULL)
    {
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
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
    elements_from_nth_to_last(3);
    return 0;
}
