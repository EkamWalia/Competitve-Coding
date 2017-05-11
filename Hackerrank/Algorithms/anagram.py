t=int(input())
while t:
	s=input()
	l=len(s)
	if l%2==1:
		print('-1')
		continue
	a=list(s[:int(l/2)])
	b=list(s[int(l/2):])
	a.sort()
	b.sort()
	l=len(b)
	count=0
	for i in range(0,l):
		if a[i]!=b[i]:
			count+=1
	print(count)
	t-=1 
