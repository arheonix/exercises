class Person:

    def __init__(self, name, age):
        self.name = name
        self.age = age


class Student(Person):

    def __init__(self, name, age, year, mark):
        Person.__init__(self, name, age)
        self.year = year
        self.mark = mark

    def get_info(self):
        print(self.name + ', ' + self.age + ', учится на ' + self.year + ' курсе и имеет средний балл ' + self.mark)


class Teacher(Person):

    def __init__(self, name, age, department, title):
        Person.__init__(self, name, age)
        self.department = department
        self.title = title

    def get_info(self):
        print(self.name + ', ' + self.age + ', преподает на кафедре "' + self.department + '" и имеет ученую степень ' 
        + self.title)


class Dean(Person):

    def __init__(self, name, age, faculty):
        Person.__init__(self, name, age)
        self.faculty = faculty

    def get_info(self):
        print(self.name + ', ' + self.age + ', занимает должность декана на факультете "'+ self.faculty + '"')


# Пример выполнения кода:

def main():
    s1 = Student("Вася", "22", "3", "3.5")
    s2 = Student("Маша", "19", "2", "4.8")
    t1 = Teacher("Анатолий", "45", "Механика", "к.т.н")
    d1 = Dean("Пётр", "56", "Математика")

    s1.get_info()
    s2.get_info()
    t1.get_info()
    d1.get_info()


main()
