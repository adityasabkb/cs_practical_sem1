import pickle

class Student:
    def __init__(self,name,age):
        self.name = name
        self.age = age
        
    def get_info(self):
        print(self.name)
        print(self.age)


f = open("first_file.bin","rb")

x = pickle.load(f)

x.get_info()
f.close()