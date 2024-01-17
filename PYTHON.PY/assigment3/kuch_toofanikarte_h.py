#give you a hint to reach at the svbh 
print("choose your cureent location:\n '1' if you are at ganga gate \n '2' if you are at yamuna gate \n '3' if you are at pmc chauraha\n ")
current_location=input("choose a number according to details given:\n")
if current_location =='1':
    print(" go forward and take a right turn from upcoming chauraha")
elif current_location =='2':
    print("go forward and cross the yamuna cafe and then take a right turn")
elif current_location =='3':
    print("turn your face towards ganaga gate and move 100m then take a left turn")
else:
    print("this detail is not in my record")