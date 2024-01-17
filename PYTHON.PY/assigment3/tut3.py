print(8//7)
#gives integer value after devision
print(5/2)
#comparison operator
print(5>2)
# we can code for other comparison operator in same way it print the values in true and false term like (==,!=,<,>, etc)
print(not 3>2)
#if and else
age=input("enter your age:")
if int(age)>=18:
    print("your are an adult.")
    print("you can vote.")
    print("thank you")
elif int(age)<18 and int(age)>3:
    print("you are in school")
else:
    print("you are a child")

