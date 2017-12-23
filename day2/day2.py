import sys

checksum = 0

for line in sys.stdin:

    numbersList = line.split()
    numbersList = list(map(int, numbersList))
    minNum = numbersList[0]
    maxNum = numbersList[0]

    for num in numbersList:
        if num > maxNum:
            maxNum = num
        elif num < minNum:
            minNum = num
            
    diff = maxNum - minNum
    checksum += diff

print(checksum)