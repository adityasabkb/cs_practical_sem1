n=int(input("Enter the max number: "))

for i in range (1,n+1):
    for j in range (n-i,0,-1):
        print(" ", end=" ")
    for j in range (1,i+1):
        print(j, end=" ")
    for j in range (i-1,0,-1):
        print(j, end=" ")
    print()
for i in range (n-1,0,-1):
    for j in range (1,n-i+1):
        print(" ", end=" ")
    for j in range (1,i+1):
        print(j, end=" ")
    for j in range (i-1,0,-1):
        print(j, end=" ")
    print()    