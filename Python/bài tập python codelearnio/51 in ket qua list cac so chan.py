res = []
lengths = int(input())
for i in range(lengths):
    n = int(input())
    res.append(n)
def evenNum(res):
    save = [] 
    for i in res:
        if i % 2 == 0:
          save.append(i)
    return save
print(evenNum(res))