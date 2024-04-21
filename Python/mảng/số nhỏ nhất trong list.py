#37
'''
list1 = [1,2,3]
list2 = [" tuan", "hu huh uhuhuhuhuhu ", "heheheheh"]

list3 = [7,3.5,"codelearn"]
ex :
-truy xuat casc phan tu trong list : name[0] 
names = [ "viet","tuan ", "ccccccccc']
print(names[0])
print(names[1])
print(names[2])
-dung vong lap for
names =["dcu","huhudsfhjhsjf","ggggggg"]
for name in names:
print(name)
them 1 phan tu dung ham append

lst = []
lst.append(4)
lst.append(3)
lst.append(6)
print(lst)
output : [4,3,6]

'''

n = int(input())
lst = []
for i in range(n):
    lst.append(int(input()))
    
min_value = lst[0]

for i in lst:
    if i< min_value:
        min_value = i
print(min_value)
