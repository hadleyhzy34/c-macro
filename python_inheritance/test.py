# class
class SoftwareEngineer:
    # class attribute
    alias = 'SE'

    def __init__(self,name,age,level,salary):
        #instance attribute
        self.name = name
        self.age = age
        self.level = level
        self.salary = salary


#instance/object
# student2 = SoftwareEngineer()
student1 = SoftwareEngineer('max',20,'Junior',5000)
print(student1.name,student1.age)
print(SoftwareEngineer.alias)
print(student1.alias)