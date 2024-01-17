#calculator using pyhton programming language
num1=float(input("enter a number:"))
num2=float(input("enter a number:"))
print("choose a number from 1 to 4\n '1' for addition\n '2' for substraction\n '3' for multiplication\n '4' for division ")
operator= int(input("choose a number:"))
if operator==1:
    print("the addition of two number is:",num1+num2)
elif operator==2:
    print("the subtraction of two number is:",num1-num2)
elif operator==3:
    print("the multiplication of given numbers is:",num1*num2)
elif operator==4:
    print("the devision pof two numbers is:",num1/num2)
else:
    print("andha h kya launde condition  to dekh")