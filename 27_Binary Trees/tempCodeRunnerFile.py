str1=input()
str1=str1[::-1]
str2=""
for i in str1:
    if i==i.lower():
        str2=str2+str1.upper()