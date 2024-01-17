#write a python programe to create two distinct list, where the element for each list is taken from user and check wheather two list is equal or not
n=int(input("enter  the number of element"))
l1=[]
for i in range(0,n):
    ele=input("enter the element")
    l1.append(ele)
print(l1)
m=int(input("enter  the number of element"))
l2=[]
for i in range(0,m):
    ele=input("enter the element")
    l2.append(ele)
print(l2)
if l1==l2:
    print("both are equal")
else:
    print("both are not equal")
