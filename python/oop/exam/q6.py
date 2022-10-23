
class Subset:
    def __init__(self):
        self.subset = [[]]

    def getSubset(self, arr):
        for el in arr:
            for i in range(len(self.subset)):
                self.subset.append(self.subset[i]+[el])
        return self.subset


num = Subset()
print(num.getSubset([4, 5, 6]))
