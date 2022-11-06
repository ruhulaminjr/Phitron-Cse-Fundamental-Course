

def nearly_equal(s1, s2):
    p1 = 0
    for i in range(0, len(s1)):
        if s1[p1] in s2:
            p1 += 1

    return len(s1) == p1


print(nearly_equal('python', 'perl'))
print(nearly_equal('perl', 'pearl'))
print(nearly_equal('bgde', 'bangladesh'))
