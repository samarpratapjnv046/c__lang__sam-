# fizzBuzz job interviews question
#rule 1- divisible by 3 then print fizz
#     2- divisible by 5 then print buzz
#     3- divisible by 3 and 5 then print fizzBuzz
for number in range(1,101):
    if number%3==0 & number%5==0:
        print("fizzBuzz")
    elif number%3==0:
        print("fizz")
    elif number%5==0:
        print("buzz")
    elif number%3==0 & number%5==0:
        print("fizzBuzz")
    else:
        print(number)