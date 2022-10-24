
class Calculation:
    def __init__(self, x, n):
        self.x = x
        self.n = n

    def sum(self):
        return self.x+self.n

    def pow(self):
        return self.x**self.n


calc = Calculation(5, 2)
print(calc.sum())
print(calc.pow())

