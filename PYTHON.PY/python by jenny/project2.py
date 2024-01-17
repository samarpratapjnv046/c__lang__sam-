#possword generator program
import random 
letters=['A','B','C','D','E','F','G','H','I']
symbol=[',','@','$','^','*','#',"%",'!']
numbers=['0','1','2','3','4','5','6','7']
print("welcome to password generator.")
n_letters=int(input("how many letters you want in your password\n"))
n_symbol=int(input("how manysymbol you want in your password\n"))
n_numbers=int(input("how many numbers you want in your password\n"))
password=[]
for i in range(1,n_numbers+1):
    char=random.choice(numbers)
    password+=char
for i in range(1,n_symbol+1):
    char=random.choice(letters)
    password+=char
for i in range (1,n_letters):
    char=random.choice(letters)
    password+=char
random.shuffle(password)
print(password)
passwordG=""
for char in password:
    passwordG+=char
print(passwordG)
