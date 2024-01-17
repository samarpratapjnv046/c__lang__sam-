#lets built an calculator
first=input("enter a number")
operator=input("choose an operator(+,-,*,/)")
second=input("enter a  number")
first=int(first)
second=int(second)
if operator=="+":
    print(first+second)
elif operator=="-":
    print(first-second)
elif operator=="*":
    print(first*second)
elif operator=="/":
    print(first/second)
else:
    print("invalid operation")
