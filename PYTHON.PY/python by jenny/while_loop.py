# count=0
# while count<=5:
#     print(count)
#     count=count+1
#     # if count==3:
#     #     break
# else:
#     print("enter in else ")
# print("end of te programm")
#else body will not print when you force fully terminate the loop
# number=int(input("enter a number (-1 to quit)"))
# while number!=-1:
#     print(number)
#     number=int(input("enter a number (-1 to quit)"))
# else:
#     print("in else block")
# print("out from loop ")
# # here termination is not force fully 

# count=0
# while True:
#     print(count)
#     count+=1
#     if count==5:
#         break
# else:
#     print("in else block ")
# print("out from loop")

total=0
number=int(input("enter a number(o to quit)"))
while number!=0:
    total=total+number
    number=int(input("enter a number(o to quit)"))
print("total is",total)
