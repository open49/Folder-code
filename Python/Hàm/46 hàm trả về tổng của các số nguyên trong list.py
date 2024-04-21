'''
khai báo 1 hàm dùng hàm def


def<ten ham>  : khai bao 1 doan code trong than ham 


ex

def show():
 for i in range (1, 11):
  print(i , end =" ")
 print()
 
 
//goi ham show

show()


output 
1 2 3 4 5 6 7 8 9 10 


truyền tham số vào hàm thì dùng return để trả về kết quả


ex : tinh tong cua list nhap vao 

def sum_of_list(lst):
 sum = 0
 for v in lst:
  sum += v
 return sum
 
 
print(sum_of_list([3,4,5]))

ex : ham tra ve so cac so chan trong lst

def count_even(lst):
 count = 0
 for v in lst:
  if v %2 ==0 :
   count += 1
 return count
 
 
print(count_even([3,4,5]))

'''
'''
def sum_of_list(lst):
    answer = 0
    for v in lst:
        answer += v
    return answer
lst = []

n = int(input())

for i in range (n):
    lst.append(int(input()))
print(sum_of_list(lst))
'''
def sum_of_list(lst):
    answer = 0
    for v in lst:
        answer += v
    return answer

lst = []
n = int(input())
for i in range(n):
    lst.append(int(input()))
print(sum_of_list(lst))

