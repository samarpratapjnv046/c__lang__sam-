# program to find the max number fffrom a list of numbers
numbers=input("enter list of numbers separated by space\n")
numbers_list=numbers.split()
count=0
for i in numbers_list:
    count=count+1
print(" the length of he list is",count)
for i in range(count):
    numbers_list[i]=int(numbers_list[i])
print(numbers_list)
maximum_number= numbers_list[0]
for number in numbers_list:
    if number>maximum_number:
        maximum_number=number
print(f"the maximum number is :{maximum_number}")