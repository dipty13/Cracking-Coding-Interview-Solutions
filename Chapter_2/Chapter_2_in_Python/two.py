"""
2.2
Implement an algorithm to find the nth to last element of a singly linked list.
"""
class Node:
    data = None
    next = None
    head = None
    tmp = None
    new_node = None

    def insert_elements(n):
        new_node = Node()
        if Node.head == None:
            new_node.data = n
            Node.head = new_node
            Node.tmp = new_node
        else:
            new_node.data = n
            Node.tmp.next = new_node
            Node.tmp = Node.tmp.next

    def print_elements():
        currentNode = Node.head;
        while currentNode != None:
            print(currentNode.data)
            currentNode = currentNode.next

    def elsements_from_nth_to_last(n):
        curr = Node.head
        for i in range(n):
            if curr == None:
                break
            curr = curr.next
        while curr:
            print(curr.data)
            curr = curr.next



if __name__ == '__main__':
    Node.insert_elements(2)
    Node.insert_elements(4)
    Node.insert_elements(1)
    Node.insert_elements(2)
    Node.print_elements()
    print("After")
    Node.elsements_from_nth_to_last(2)
