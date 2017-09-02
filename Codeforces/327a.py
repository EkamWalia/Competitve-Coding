n = int(input())
a = [int(i) for i in input().split()]
count1=0
maxi = curr = 0
for i in a:
	if i == 1:
		count1 +=1
		maxi = max(maxi , curr)
		curr = 0
	elif i == 0:
		curr+=1
maxi = max(maxi , curr)
print(maxi + count1)
