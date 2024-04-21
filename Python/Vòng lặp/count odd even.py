a = int(input())
b = int(input())

count_even = 0 
count_odd = 0

for i in range (a, b+1):
    if i % 2 == 0:
        count_even += 1
    else :
        count_odd += 1
print (count_even)
print(count_odd)

#using while

a = int(input())
b = int(input())

count_enven = 0 
count_odd = 0

while a <= b:
    if a % 2 ==0:
        count_enven += 1
    else:
        count_odd += 1
print (count_even)
print(count_odd)