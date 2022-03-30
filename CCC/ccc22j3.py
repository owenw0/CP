import sys

input = sys.stdin.readline

y = "1234567890"

sequence = list(input())

for i in range(len(sequence)):
    if sequence[i] == "+":
        print(" tighten ", end="")
    elif sequence[i] == "-":
        print(" loosen ", end="")
    elif sequence[i] not in y:
        print(sequence[i], end="")
    elif sequence[i] in y and sequence[i + 1] in y:
        print(sequence[i], end="")
    else:
        print(sequence[i])
