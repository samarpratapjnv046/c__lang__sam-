#LOVE CALCULATOR
name1=input("enter your name\n")
name2=input("enter her/his name\n")
combine_string=name1+name2
lower_case_string=combine_string.lower()
t=lower_case_string.count('t')
r=lower_case_string.count('r')
u=lower_case_string.count('u')
e=lower_case_string.count('e')
true=t+r+u+e
l=lower_case_string.count('l')
o=lower_case_string.count('o')
v=lower_case_string.count('v')
e=lower_case_string.count('e')
love=l+o+v+e
love_score=int(true)+int(love)
if love_score <10 or love_score> 90:
    print(f"your  love score is :{love_score} and you together like a coke and mantos")
elif love_score >= 40  and love_score  <= 50:
    print(f"your love score is :{love_score}. you are alright together")
else:
    print(" your love score is:", love_score)
