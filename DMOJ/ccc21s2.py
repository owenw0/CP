import sys

input = sys.stdin.readline

row_count, col_count, choices = int(input()), int(input()), int(input())

rows, cols = [False] * row_count, [False] * col_count

for i in range(choices):
    choice, index = input().split()
    index = int(index) - 1

    if choice == "R":
        # paint row
        rows[index] = not rows[index]
    else:
        # paint col
        cols[index] = not cols[index]

total_gold = 0
gold = 0
black = 0

for i in range(row_count):
    if rows[i] == True:
        gold += 1
        total_gold += col_count
    else:
        black += 1

for i in range(col_count):
    if cols[i] == True:
        total_gold += black - gold

print(total_gold)
