

from math import sqrt


class Distance:
    def __init__(self, x1, y1, x2, y2):
        self.x1 = x1
        self.x2 = x2
        self.y1 = y1
        self.y2 = y2

    def compute(self):
        dist = sqrt((self.x2 - self.x1)**2 + (self.y2 - self.y1)**2)
        return dist


d = Distance(3, 2, 9, 7)

print(d.compute())
