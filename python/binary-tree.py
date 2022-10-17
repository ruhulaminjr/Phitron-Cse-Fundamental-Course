class Node:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None

# print level order


def levelOrderPrint(root):
    q = []
    q.append(root)
    while len(q) != 0:
        el = q[0]
        q.pop(0)
        print(el.val, end=" ")
        if el.left != None:
            q.append(el.left)
        if el.right != None:
            q.append(el.right)
    print("\n")


def printInorder(root):
    if root == None:
        return
    printInorder(root.left)
    print(root.val, end=" ")
    printInorder(root.right)
# input level order Tree


def inputLeverOrder():
    r = int(input())
    root = Node(r)
    q = []
    q.append(root)
    while len(q) != 0:
        newRoot = q[0]
        q.pop(0)
        l = int(input())
        r = int(input())
        left = None
        right = None
        if l != -1:
            left = Node(l)
            q.append(left)
        if r != -1:
            right = Node(r)
            q.append(right)
        newRoot.left = left
        newRoot.right = right
    return root


root = inputLeverOrder()
levelOrderPrint(root)
printInorder(root)
print("\n")
