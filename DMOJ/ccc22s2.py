x = []
for i in range(int(input())):
    x.append(input().split())

y = []
for i in range(int(input())):
    y.append(input().split())

g = []
for i in range(int(input())):
    g.append(input().split())

e = False
error = 0

for a in x:  # must be in same group
    for i in g:
        if a[0] not in i and a[1] not in i:
            e = True
        elif a[0] in i and a[1] in i:
            e = False
            break
    if e == True:
        error += 1

for i in g:
    for b in y:
        if b[0] in i and b[1] in i:
            error += 1
            break


print(error)
