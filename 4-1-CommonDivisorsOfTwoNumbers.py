"""
TO FIND ALL DIVISORS FIND GCD OF GIVEN TWO NUMBERS AND THEN COUNT DIVISORS OF THAT GCD

"""
from fractions import gcd
import math
a,b=input().split(" ")
a,b=int(a),int(b)

n=gcd(a,b)
result=0
for i in range(1,int(math.sqrt(n))):
    if(n%i==0):
        if(n%i==i):
            result+=1
        else:
            result+=2
        
print(result)
