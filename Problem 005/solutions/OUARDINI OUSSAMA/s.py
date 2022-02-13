# function to detect if a number n divide all number from 1 to number last
def is_div(n, last):
    for i in range(1, last):
        if n%i !=0:
            return False
    
    return True



dividers = [i for i in range(1, 21)]
print(dividers)
n=20
# the number is very large my computer took hours to reach to the right number
#n = 232792530
while True:
    all_dividers=[True for i in range(1, 21)]
    print("trying the number: ", n)
    if is_div(n, 21):
        print("the number is ", n)
        break
    else:
        print('-------------------------')
    
    n = n+1