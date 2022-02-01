def recur_fibo(n):  
   if n <= 1:  
       return n  
   else:  
       return(recur_fibo(n-1) + recur_fibo(n-2))
i,s=0,0
c=recur_fibo(i)
while c <= 4000000:
    if c % 2 == 0:
        s+=c
    i+=1
    c=recur_fibo(i)
print(s)
