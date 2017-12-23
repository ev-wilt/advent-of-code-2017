import sys

checksum = 0

for line in sys.stdin:

    index = 1
    numbersList = line.split()
    numbersList = list(map(int, numbersList))

    for i in numbersList:
        for j in numbersList:
            if i % j == 0 and i != j:
                checksum += i / j

print(int(checksum))