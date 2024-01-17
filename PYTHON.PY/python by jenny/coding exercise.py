#FIND LEAP YEAR 
# year=int(input("enter a year"))
# if year%4==0:
#     if year%100==0:
#         if year%400==0:
#             print("it is a leap year")
#         else:
#             print(" it is not aleap year")
#     else:
#         print("not a leap year")
# else:
#     print(' it is not a leap year')

#MULTIPLE IF CONDITION 
height=int(input("enter your height in ft\n"))

if height>= 3:
    print("can ride")
    age=int(input("enter your age\n"))
    if age<=12:
        bill=150
        print("ticket price is 150 rs")
    elif age<= 18 :
        bill=250
        print("ticket price is 250  rs")
    else:
        bill=500
        print("ticket price is 500 rs")
    wants_photo=input("do you want to take photo(Y/N)\n")
    if wants_photo=='Y' or wants_photo=='y':
       bill=bill+50
    print(f"your total bill is :{bill}")
else:
    print(" can't ride")
print("thanks for take a visit")
    