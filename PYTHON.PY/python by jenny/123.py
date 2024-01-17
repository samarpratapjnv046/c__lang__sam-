# import random
# side=random.randint(0,1)
# print(side)
# if side==0:
#     print('TALE')
# else:
#     print("HEAD")


# import random 
# l1=["ram", "shyam","raju","shubham", " anuj"]
# a=random.choice(l1)
# print(a ," will pay the bill of all ")

# code for who will pay the bill 
# import random
# names=input(" enter the name of all party member and separated by comma:")
# name_list=names.split(",")
# print(name_list)
# length=len(name_list)
# a=random.randint(0,length-1)
# print(f"{name_list[a]} will pay the bill")

# fix the index related problem
names=["jemnny", " jiya", " ram"]
print(f"hi,{names[2]}")
# print(f"hi,{names[3]}") for this problem we have a solution 
length=len(names)
print(f"hi,{names[length-1]}")