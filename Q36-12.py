def isPrime(x):
    flag=1
    for i in range (2,x):
        if (x%i==0):
            flag=0
    if (flag==0):
        return 0
    else:
        return 1

l=int(input("Enter the lower limit: "))
u=int(input("Enter the upper limit: "))

for i in range (l,u+1):
    if (isPrime(i)==1):
        print(i)
