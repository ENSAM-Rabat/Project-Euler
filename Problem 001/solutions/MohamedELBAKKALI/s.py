# Test mokamed
content = []
file1 = open('input.txt', 'r')
Lines = file1.readlines()
iter = 0;
for line in Lines:
    content.append(line.replace('\n', '').split(" "))
    if iter == 0 :
        print("this file contans ",int(line),"operatons")
    else:
        print("Operation ",iter," :")
        D, L, R  = list(map(int, line.split()))
        if D <= R and D>= L:
            print('Take second dose now')
        elif D > R:
            print('Too Late')
        elif D < L:
            print('Too Early')
    iter = iter+1
print("----- content -----")
print(content)


    