n = int(input())
a = [int(i) for i in input().split()]
sieve = [True]*100005
i=2
while i*i<100001:
	if sieve[i] == True:
		for j in range(i*2,100001,i):
			sieve[j]=False
	i+=1

for y in a:
	x = int(y**0.5)
	if x*x == y and sieve[x] == True:
		print("YES")
		
	else:
		print("NO")
