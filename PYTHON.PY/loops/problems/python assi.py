l1=[]
n=int(input("enter the number of intity"))
for i in range (0,n):
    ele=int(input("enter the number"))
    l1.append(ele)
l2=[]
m=int(input("enter the number of intity"))
for i in range (0,m):
    ele=int(input("enter the number"))
    l2.append(ele)
if l1==l2:
    print("both list is equal")
else:
    print("list is unequal")
    
