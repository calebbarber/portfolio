class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key

def insert(root, key):
    if root is None: return Node(key)

    if root.val == key: return root
    elif root.val < key: root.right = insert(root.right, key)
    else: root.left = insert(root.left, key)

    return root

def inorder(root):
    if root:
        inorder(root.left)
        print(root.val)
        inorder(root.right)

n = Node(50)
n = insert(n, 17)
n = insert(n, 6)
n = insert(n, 69)
n = insert(n, 26)
n = insert(n, 37)
n = insert(n, 78)
n = insert(n, 85)
n = insert(n, 42)

inorder(n)