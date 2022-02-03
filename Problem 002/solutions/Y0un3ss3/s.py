def efibo(n, s):
    f = 2*n if n<2 else (4*efibo(n-1, s)[0] + efibo(n-2, s)[0])
    s.add(f)
    return  (f, s)


## biggest even fib number less than 4.10^6 is reached after 11 calls.
f = efibo(11, {0})
# print(sorted(f[1]))
print(sum(f[1]))
