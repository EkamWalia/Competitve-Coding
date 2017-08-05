t=int(input())
while t:
	a=input().split(' ')
	b=input().split(' ')
	list.sort(a)
	list.sort(b)
	count=0
	for i in range(0,4):
		for j in range(0,4):
			if a[i]==b[j]:
				count+=1
	if count>=2:
		print("similar")
	else:
		print("dissimilar")
	t-=1