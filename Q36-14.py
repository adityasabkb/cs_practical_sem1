n=int(input("Enter the number of fibonaci numbers to print: "))
b=0
c=1
for i in range (1,n+1):
    print(c,",",sep="",end="")
    d=c
    c=c+b
    b=d 