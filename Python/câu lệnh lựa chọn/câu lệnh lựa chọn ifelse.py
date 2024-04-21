age = int(input())

if age<5:#if else binh thuong 
    print("your cat is young")
else:
    print("your cat is old")

print("your cat is young ") if age<5 else print("your cat is old") #su dung toan tu 3 ngoi

#27
temperature = int(input())

if temperature >= 100:
    print("Stay at home and enjoy a good movie")
elif temperature >= 92:
    print("Stay at home")
elif temperature == 75:
    print("Go outside and enjoy the weather")
elif temperature <0:
    print(" It's cool outside")
else: 
    print("Let's go to school.")
       
    
#28

x = int(input())
y = int(input())
z = int(input())

if x %2 ==0:
    if  y >= 20:
        print(" y > 20 ")
    else:
        print("y < 20 ")
else:
    if z< 30:
        print("z<30")
    else :
        print("z> 30")
        
