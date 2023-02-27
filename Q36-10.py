basic = int(input("enter your basic salary"))

if (basic >= 40000):
    print("Level 1")
    tax = 10
    perks = 10000 
elif (basic < 40000 and basic >= 30000):
    print("Level 2")
    tax = 8
    perks = 8000
elif (basic < 30000 and basic >= 20000): 
    print("Level 3\n")
    tax = 8
    perks = 6500

else:
    print("Level 4")
    tax = 0
    perks = 6500

gross = basic + perks +basic/4

print("grosss amount is :",gross)
print("tax is :",(basic*tax)/100)
print("net salary is :",gross-(basic*tax)/100)
