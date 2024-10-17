# Python program to add one to a linked list

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# Recursively add 1 from end to beginning and return
# carry after all nodes are processed.
def addWithCarry(head):
    
    # If linked list is empty, return carry
    if head is None:
        return 1
    
    # Add carry returned by the next node call
    res = head.data + addWithCarry(head.next)
    
    # Update data and return new carry
    head.data = res % 10
    return res // 10

def addOne(head):
    
    # Add 1 to linked list from end to beginning
    carry = addWithCarry(head)
    
    # If there is carry after updating all nodes,
    # then we need to add a new node to the linked list
    if carry:
        newNode = Node(carry)
        newNode.next = head
        
        # New node becomes head now
        return newNode
    
    return head

def printList(head):
    curr = head
    while curr:
        print(curr.data, end=" ")
        curr = curr.next
    print()

if __name__ == "__main__":
    
    # Create a hard-coded linked list:
    # 1 -> 9 -> 9 -> 9
    head = Node(1)
    head.next = Node(9)
    head.next.next = Node(9)
    head.next.next.next = Node(9)
    
    head = addOne(head)
    
    printList(head)
