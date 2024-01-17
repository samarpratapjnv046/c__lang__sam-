n = int(input(" enter a number for which u want to calculate average\n"))
total_sum =0
for i in range (0,n):
    ele=float(input("enter the number \n"))
    total_sum += ele
avg = total_sum/ n 
print("average is :" , avg)
