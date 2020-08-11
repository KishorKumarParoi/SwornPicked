from fractions import gcd
def lcm(a, b): 
    return a // gcd(a, b) * b

L = 20
print ("LCM of all numbers from 1 through", L, 'is', reduce(lcm, range(L//2+1, L+1))