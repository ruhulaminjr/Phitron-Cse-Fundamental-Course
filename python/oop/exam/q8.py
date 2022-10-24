

class TargetSum:
    def get_sum(self, target, arr):
        for i in range(len(arr)-1):
            if arr[i] + arr[i+1] == target:
                return [i+1, i+2]
        return -1


numbers = [10, 20, 10, 40, 50, 60, 70]
target = 50
num = TargetSum()
print(num.get_sum(target, numbers))

