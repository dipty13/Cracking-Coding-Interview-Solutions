/*  2.1
*   Write code to remove duplicates from an unsorted linked list.
*   FOLLOW UP
*   How would you solve this problem if a temporary buffer is not allowed?
*/
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
Node *head;
Node  *newNode;
Node  *tmp;
void insert_elements(int n)
{
    newNode = new Node;
    if(head == NULL)
    {
        newNode->data = n;
        head = newNode;
        tmp = newNode;
    }
    else
    {

        newNode->data = n;
        tmp->next = newNode;
        tmp = tmp->next;
    }

}
void removeDuplicateValue()
{
    unordered_set<int> seen;
    Node *curr = head;
    Node *prev = NULL;
    while (curr != NULL)
    {
        if (seen.find(curr->data) != seen.end())
        {
           prev->next = curr->next;
           delete (curr);
        }
        else
        {
           seen.insert(curr->data);
           prev = curr;
        }
        curr = prev->next;
    }
}
void print_element()
{
    Node *currentNode = head;
    while(currentNode != NULL)
    {
        cout<<currentNode->data<<" ";
        currentNode = currentNode->next;
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
    print_element();
    removeDuplicateValue();
    print_element();
    return 0;
}
