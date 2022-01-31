s = 0
a = 1
b = 1
c = 0
while c <= 4000000:
    if c % 2 == 0:
        s += c
    a = b
    b = c
    c = a + b
print (s)