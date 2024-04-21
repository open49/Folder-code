'''
hàm len trả về sô phần tử có trong list
lst = [2,3,1]
print(len(lst))
output: 3

----dung ham len de ho tro duyet cac phan tu trong list

lst = [2,3,1]

for i in range (len(lst)):
    print(lst[i])
    
    output: 2
            3
            1


---------ham max , min : de tra ve gia tri lon nhat va nho nhat trong mang

lst = [2,3,1]
print(max(lst))
print(min(lst))

output : 3
         1


hafm insert de them 1 phan tu vao vi tri trong list
xau = ['x' , 'a','u']
xau.insert(2,'s')
print(xau)

output:
 x ,a ,s ,u
 
  Hàm remove

Hàm này dùng để xóa một phần tử khỏi list:

lst = ['A', 'B', 'C']
lst.remove('A')
print(lst)
Kết quả khi chạy chương trình:

['B', 'C']

Hàm pop

Hàm pop() được dùng để xóa một phần tử với chỉ số cho trước trong list:

lst = ['A', 'B', 'C']
# Xóa phần tử thứ 2 khỏi list
lst.pop(1)
print(lst)
Kết quả khi chạy chương trình:

['A', 'C']

Hàm sort

Hàm này được dùng để sắp xếp các phần tử trong list theo một thứ tự nhất định. Ví dụ:

lst = [4, 5, 3, 7, 6, 1]
# Sắp xếp các phần tử trong list theo thứ tự tăng dần
lst.sort()
print(lst)
# Sắp xếp các phần tử trong list theo thứ tự giảm dần
lst.sort(reverse=True)
print(lst)
Kết quả khi chạy chương trình:

[1, 3, 4, 5, 6, 7]
[7, 6, 5, 4, 3, 1]

àm reverse

Đây là hàm dùng để đảo ngược list:

lst = [4, 5, 3, 7, 6, 1]
lst.reverse()
print(lst)
Kết quả khi chạy chương trình:

[1, 6, 7, 3, 5, 4]

Hàm count

Đây là hàm dùng để đếm số lần xuất hiện của một thành phần trong list:

lst = [6, 2, 3, 8, 2]
print(lst.count(2))
Kết quả khi chạy chương trình:

2

Hàm clear

Đây là hàm dùng để xóa hết các phần tử bên trong list:

lst = [1, 2, 3]
lst.clear()
print(lst)
Kết quả khi chạy chương trình:

[]
'''

#cach 1 
lst = []
n = int(input())

for i in range(n):
    lst.append(int(input()))
lst.sort()
print(lst)


#cach 2
lst = []
n = int(input())

for i in range(n):
    lst.append(int(input()))

for i in range(len(lst)):
    for j in range(i):
        if lst[i] < lst[j]:
            tmp = lst[i]
            lst[i] = lst[j]
            lst[j] = tmp
print(lst)