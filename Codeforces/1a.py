import math
string=raw_input()
n,m,a=string.split()
n=int(n)
m=int(m)
a=int(a)
count=((m+a-1)/a)*((n+a-1)/a)
print count