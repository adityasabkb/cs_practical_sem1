def fact(n):
    b=1
    for i in range (1,n+1):
        b=b*i
    return b

x=float(input("Enter the angle in radian: "))
sin= x -x**3/fact(3) + x**5 / fact(5) -x**7 /fact(7)

print(sin)