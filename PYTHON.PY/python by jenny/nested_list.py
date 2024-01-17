# nested list

# list1=[1,5,3,6,8,4,9,[4,5,6,6,8],9,6]
# print(len(list1))
# print(list1[7])
# print(list1[5])
# print(list1[-1])
# print(list1[7][2])
# print(list1[-3][0:2])
# print(list1[7][0:3:2])

# coding exercise
# row1=[1,2,3]
# row2=[4,5,6]
# row3=[7,8,9]
# matrix=[row1,row2,row3]
# print(f"{row1}\n {row2}\n {row3}")
# position=input(" enter the position where you want to hide your money:")
# #32
# row_number=int(position[0])
# column_number=int(position[1])
# row_selected=matrix[row_number-1]
# row_selected[column_number-1]='X'
# print(f"{row1}\n {row2}\n {row3}")

# # rock sciessor and paper game 
# import random
# print("0 for rock \n1 for sciessor \n2 for paper")
# n=int(input(" enter the numbers for how many times you want to play the game.\n"))
# for i in range (0,n):
    
#     user_choice = int(input("enter your choice acc. to mention detail\n"))
#     computer_choice= random.randint(0,2)
#     if user_choice==0 & computer_choice==2:
#         print("you loose the game.")
#     elif computer_choice==0 & user_choice==2:
#         print(" you win the game.")
#     elif user_choice>computer_choice:
#         print(" you loose the game.")
#     elif computer_choice>user_choice:
#         print(" you win the game.")
#     elif user_choice==computer_choice:
#         print(" game drwa ")
#     else:
#         print(" your choice is not according to the given details .")