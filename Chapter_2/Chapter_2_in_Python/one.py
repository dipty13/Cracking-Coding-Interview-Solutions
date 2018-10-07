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

    def remove_duplicate_values():
        seen = dict()
        curr = Node.head
        prev = None
        while curr:
            if curr.data in seen:
                 prev.next = curr.next
                 curr = None
            else:
                seen[curr.data] = 1
                prev = curr
            curr = prev.next



if __name__ == '__main__':
    Node.insert_elements(2)
    Node.insert_elements(4)
    Node.insert_elements(1)
    Node.insert_elements(2)
    Node.print_elements()
    Node.remove_duplicate_values()
    print("After removing duplicates")
    Node.print_elements()
