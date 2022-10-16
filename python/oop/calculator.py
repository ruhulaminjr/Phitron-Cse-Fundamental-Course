class Calculator:
    def add(self, x, y):
        return x+y

    def subtract(self, a, b):
        return a-b

    def multiply(self, s, t):
        return s*t

    def divide(self, e, f):
        return e/f

    def reminder(self, w, z):
        return w % z


calc = Calculator()
print(calc.add(5, 8))
print(calc.subtract(11, 10))
print(calc.multiply(2, 9))
print(calc.divide(99, 9))
print(calc.reminder(99, 9))
