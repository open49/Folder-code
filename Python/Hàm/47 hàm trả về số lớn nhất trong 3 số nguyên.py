def max3 (a,b,c):
    if a>b and a>c :
        return a
    return b if b>c else c
# why return b  if b > c , maybe a>b???\\
    '''
    new way *****************
    max = a 
    if max < b:
    max = b 
    if max <c :
    max = c 
    return max 
    '''
a = int(input())
b = int(input())
c = int(input())
print (max3(a,b,c))
