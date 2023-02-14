import pickle
class Student:
    def __init__(self,name,age):
        self.name = name
        self.age = age
        
    def get_info(self):
        print(self.name)
        print(self.age)


obj1 = Student("aditya",18)

obj2 = Student("manas",20)

obj1.get_info()


f = open("first_file.bin","wb")

pickle.dump(obj1,f)

f.close()


'''
format 

'''