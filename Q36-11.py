a=int(input("Enter a number: "))
b=0
i=0
while (a>=1):
    b+=(a%10)
    a=a//10
    i=i+1
    b=b*(10)
print(b//10)