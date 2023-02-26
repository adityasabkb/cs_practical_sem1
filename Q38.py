def addRecord(record,n,name,age,department,salary):
    dict = {"id":n,"name":name,"age":age,"department":department,"salary":salary}
    record.append(dict)


n=1
employee_record = []


while True:
    print("what do you wnat to do")
    print("check all record -> 1")
    print("check specific record -> 2")
    print("delete specific record -> 3")
    print("modify specific record -> 4")
    print("add record ->5")
    print("exit -> 6")

    x = int(input())
    if (x==6):
        exit()
    elif (x==1):
        if(len(employee_record)==0):
            print("No records found")
            continue
        for i in employee_record:
            print()
            print(f"id: { i['id']}")
            print(f"name: { i['name']}")
            print(f"age: { i['age']}")
            print(f"department: { i['department']}")
            print(f"salary: { i['salary']}")
            print()
    elif(x==2):
        id = int(input("enter id"))
        for i in employee_record:
            flag = 0
            if(i["id"]==id):
                flag = 1
                print()
                print(f"id: { i['id']}")
                print(f"name: { i['name']}")
                print(f"age: { i['age']}")
                print(f"department: { i['department']}")
                print(f"salary: { i['salary']}")
                print()
            if flag==0:
                print("No record found")
    elif(x==3):
        id = int(input("enter id"))
        flag = 0
        for i in employee_record:
            if i["id"]==id:
                flag=1
                print(i)
                employee_record.remove(i)
                print("deleted successfully")
                
        if (flag==0):
            print("No such record")
    elif(x==4):
        id = int(input("enter id"))
        flag = 0
        for i in employee_record:
            if (i["id"]==id):
                flag=1
                print(i)
                new_name=input("enter new name: ")
                new_age=input("enter new age: ")
                new_department=input("enter new department: ")
                new_salary=input("enter new salary: ")

                i["name"]=new_name
                i["age"]=int(new_age)
                i["department"]=new_department
                i["salary"]=new_salary
            if(flag==1):
                print("record updated")
            else:
                print("no such record found")
    elif(x==5):    
        name=input("enter name: ")
        age=input("enter age: ")
        department=input("enter department: ")
        salary=input("enter salary: ")
        addRecord(employee_record,n,name,int(age),department,int(salary))
        print("added successfully")
        n+=1
                   


