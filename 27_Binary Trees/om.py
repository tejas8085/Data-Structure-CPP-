n=int(input())
for i in range(n):
    len1=int(input())
    temp=input().split(" ")
    temp1=[]
    for j in temp:
        temp1.append(int(j))
    om=int(input())
    johnny=temp1[om]
    temp1.sort()
    print(temp1.index(johnny)+1)


    