"""
The first number evenly divisible by range [1, 20]
is simply the lowest common multiple of every number in this range.
where: LCM(a, b) = a * b // GCD(a, b)
"""
from math import gcd

def lcm(a, b):
    return a * b // gcd(a, b)

def rlcm(end, s=1):
    if end != 0:
        return rlcm(end-1, lcm(s, end))
    return s

print(rlcm(20)) # output : 232792560