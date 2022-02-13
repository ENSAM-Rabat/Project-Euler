# prob 1 

# lanch a for loop to search for multipliers of 5 & 3
sum = 0
for i in range(1000):
    if i %3==0 or i%5==0:
        sum +=i

print("sum of all numbers under 1000 dividing 3 or 5 is", sum)

# array that contains all those numbers
numbers = [i for i in range(1000) if i%3==0 or i%5==0]

