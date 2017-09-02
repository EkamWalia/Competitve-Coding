n,m = input().split()
n = int(n) ; m = int(m)
days=0
while n!=0:
	n-=1
	days+=1
	if days%m == 0:
		n+=1

print(days)
