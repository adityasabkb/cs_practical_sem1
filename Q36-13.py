def hcf(a,b):
    hcf=1
    for i in range (1,a+1):
        if ((a%i==0) and (b%i==0)):
            hcf=i
    return hcf
a=int(input("Enter integer: "))
b=int(input("Enter integer: "))
if (a>b):
    print("The HCF of the two numbers is ", hcf(b,a))
if (a<b):
    print("THe value of the hcf of the two numbers is ", hcf(a,b))