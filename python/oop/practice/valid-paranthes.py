class Valid:
    def check(self, data):
        stack = []
        for i in range(len(data)):
            if data[i] == '(' or data[i] == '{' or data[i] == '[':
                stack.append(data[i])
            if data[i] == ')' or data[i] == '}' or data[i] == ']':
                if stack[0] == '(' and data[i] == ')':
                    stack.pop(0)
                elif stack[0] == '{' and data[i] == '}':
                    stack.pop(0)
                elif stack[0] == '[' and data[i] == ']':
                    stack.pop(0)
        print(stack)


""" 
Write a Python class to find validity of a string of parentheses, '(', ')', '{', '}', '[' and ']. These brackets must be close in the correct order.

    For example "()" and "()[]{}" "are valid but "[)", "({[)]" and "{{{" are invalid.
"""

Valid().check("()[]{}")
Valid().check("()")
Valid().check("{{{")
