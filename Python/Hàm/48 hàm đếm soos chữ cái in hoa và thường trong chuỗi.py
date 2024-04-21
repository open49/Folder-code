#dung ham isupper va islower de kiem tra ki tu la in hoa hay in thuong 

def show(s):
    count_upper = 0
    count_lower = 0
    for c in s:
        if c.isupper():
            count_upper += 1
        if c.islower():
            count_lower += 1
    print("given string :", s)
    print("number of oppercase letters :", count_upper)
    print("number of lowercase letters :", count_lower)

s = str(input())
show(s)