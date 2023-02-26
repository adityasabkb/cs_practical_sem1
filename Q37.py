def takeInput(max):
    x = float(input(f"enter marks out of {max}: "))
    assert(x<=max),"marks greater than maximum"
    return x

max = int(input("enter maximum marks"))

m1 = takeInput(max)
m2 = takeInput(max)
m3 = takeInput(max)

print(f"percentage in subject 1 is {m1/max *100}")
print(f"percentage in subject 2 is {m2/max *100}")
print(f"percentage in subject 3 is {m3/max *100}")

print(f"average marks precentage is {(m1+m2+m3)/3 /max *100}")
