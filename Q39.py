f = open("input.txt","r")

x = f.read()
f.close()

f2 = open("output.txt","w")
f2.write(x)
f2.close()