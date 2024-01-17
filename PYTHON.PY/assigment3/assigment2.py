

#write a python program to take an integer from user and find the factorial of that integer

# To take input from the user
num = int(input("Enter a number: "))

factorial = 1

# check if the number is negative, positive or zero
if num < 0:
   print("Sorry, factorial does not exist for negative numbers")
elif num == 0:
   print("The factorial of 0 is 1")
else:
   for i in range(1,num + 1):
     factorial = factorial*i
   print("The factorial of",num,"is",factorial)

