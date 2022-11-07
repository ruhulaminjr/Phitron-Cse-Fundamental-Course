from itertools import permutations
# Get all permutations of [1, 2, 3]
# perm = permutations([1, 2, 3])

# perm = permutations(["My","name","is","Ruhul"])

perm = permutations([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])

print(type(perm))
print(perm)

for i in perm:
    print(i)
