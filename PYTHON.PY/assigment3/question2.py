#write a python programe  to create a list and check the maximum elementin it
n=int(input("enter  the number of element in the list"))
l1=[]
for i in range (0,n):
    ele=input("enter a real number")
    l1.append(ele)
print(l1)
print(max(l1))