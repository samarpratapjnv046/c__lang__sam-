l1=list(input("enter element for the first list").split())
l2=list(input("enter element for the second list").split())
if len(l1)!=len(l2):
    print(" list are unequal")
else:
    for i in range(len(l1)):
        if l1[i]!=l2[i]:
            print("the two list are unequal")
            break
        else:
            print("both list are equal")
