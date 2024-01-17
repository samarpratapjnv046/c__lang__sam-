#create a list and find the second highest number
n=int(input("enter the number of elements in the list"))
l1=[]
for i in range (0,n):
    ele=input('enter a element')
    l1.append(ele)
    print(l1)
m=max(l1)
l1.remove(m)
print(max(l1))