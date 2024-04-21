#lay 1 ki tu trong chuoi thong qua chi so nhu trong list
name = 'codelearn'
print(name[0])

#co the truy xuat toi chi so am cua chuoi
s = 'Python String'
# s[0] là phần tử đầu tiên trong chuỗi
print(s[0])
# s[-1] là phần tử đầu cuối cùng trong chuỗi
print(s[-1])
# s[-2] là phần tử đứng trước phần tử cuối cùng trong chuỗi
print(s[-2])

#cat chuoi torng python : phuong phap slicing

s= 'python string '

print(s[0:2])
print(s[3:5])
print(s[7:])
print(s[:6])
print(s[7:-4])

'''
output:

py
ho
string
python
st
'''


s = input()
if len(s)<2 :
    print("")
else:
    print(s[0:2]+ s[-2:]) # or print(s[0:2] + s[len(s) - 2: len(s)])
    