# single inhertance
# multiple inheritance
# multilevel inheritance
class grandparent:
    def __init__(self):
        self.str = "Hello From Grand Parent"


class parent(grandparent):
    def __init__(self):
        self.str = "Hello from parent Class"
        super().__init__()


# class child(parent, grandparent):
#     def __init__(self):
#         self.str = "Hello from child Class"
#         super().__init__()
#         grandparent.__init__(self)
class child(parent):
    def __init__(self):
        self.str = "Hello from child Class"
        super().__init__()


c = child()

print(c.str)
