"""
2.3
Implement an algorithm to delete a node in the middle of a
single linked list, given only access to that node.
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

    def remove_element(n):
        curr = Node.head
        prev = Node.head
        while curr:
            if curr.data == n:
                prev.next = curr.next
                break
            prev = curr
            curr = curr.next




if __name__ == '__main__':
    Node.insert_elements(2)
    Node.insert_elements(4)
    Node.insert_elements(1)
    Node.insert_elements(2)
    Node.print_elements()
    print("After")
    Node.remove_element(1)
    Node.print_elements()
