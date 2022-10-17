class Node:
    def __init__(self, val):
        self.val = val
        self.next = None


class Linked_list:
    def __init__(self):
        self.head = None

    def insert_at_pos(self, pos, val):
        newNode = Node(val)
        if pos == 0:
            newNode.next = self.head
            self.head = newNode
        else:
            tmp = self.head
            for i in range(pos-1):
                tmp = tmp.next
                if (tmp == None):
                    print("Position Out Of Boundary")
                    return
            newNode.next = tmp.next
            tmp.next = newNode

    def delete_at_pos(self, pos):
        if pos == 0:
            delNode = self.head
            self.head = self.head.next
            del delNode
        else:
            tmp = self.head
            for i in range(pos-1):
                tmp = tmp.next
                if (tmp == None):
                    print("Position Out Of Boundary")
                    return
            delNode = tmp.next
            if (delNode == None):
                print("Position Out of Boundary")
                return
            tmp.next = delNode.next
            del delNode

    def insertAtTail(self, val):
        newNode = Node(val)
        if self.head == None:
            self.head = newNode
        else:
            tmp = self.head
            while tmp.next != None:
                tmp = tmp.next
            tmp.next = newNode

    def reverse(self):
        if self.head.next == None:
            return self.head
        prevhead = self.head
        self.head = self.head.next
        newHead = self.reverse()
        prevhead.next.next = prevhead
        prevhead.next = None
        return newHead

    def print_list(self):
        tmp = self.head
        while tmp != None:
            if tmp.next != None:
                print(tmp.val, end="->")
            else:
                print(tmp.val)
            tmp = tmp.next


lst = Linked_list()
lst.insertAtTail(11)
lst.insertAtTail(22)
lst.insert_at_pos(2, 100)
lst.insertAtTail(33)
lst.delete_at_pos(3)
lst.print_list()
lst.reverse()
lst.print_list()
