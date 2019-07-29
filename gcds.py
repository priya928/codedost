m,s=input().split()
m=int(m)
s=int(s)
minimum=m
if m>s:
	minimum=s
g=1
for k in range(2,minimum+1):
	if m%k==0 and s%k==0:
		g=k
print(g)
