
from math import sqrt
days = ["Sat", "Sun", "Mon", "Tue", "Wed", "Thus", "Fri"]
data = []
for i in range(0, 7):
    rainfall = int(input(f"{days[i]} day Rain fall : "))
    data.append(rainfall)

maxval = max(data)
minval = min(data)

print(f"Max Rain Fall : {days[data.index(maxval)]} is {maxval}")
print(f"Min Rain Fall : {days[data.index(minval)]} is {minval}")

mean = sum(data) / len(data)

sum = 0
for val in data:
    calc = (val-mean) ** 2
    sum += calc

sd = sqrt(sum / mean)

print(sd)
