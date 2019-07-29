f=0
priya=input()
for j in priya:
	if priya.count(j)>1:
		f=1
		print("No")
		break
if f==0:
	print("Yes")
