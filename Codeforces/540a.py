n=int(input())
a=input()
b=input()
moves=0;
for i,j in zip(a,b):
    x=int(i);y=int(j);
    curr = min(abs(x-y) , abs(x) + abs(10-y) , 10-x + y)
    moves += curr
    
print(moves)
	
