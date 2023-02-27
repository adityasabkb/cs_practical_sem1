main_str=input("Enter main_str string: ")
c=input("Enter character to search: ")

n=0
for i in main_str:
    if (c==i):
        n=n+1
print("The occurence is: ", n)