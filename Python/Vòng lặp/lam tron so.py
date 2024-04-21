'''
print(number, ndigit)
ex :
input :print (1.23, 1)
output: 1.2

'''



n = int(input())

answer =0 

for i in range (1, n+1):
    answer += i/(i+1)


print(round(answer, 2))