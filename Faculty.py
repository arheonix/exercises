class Person:

    def __init__(self, name, age):
        self.name = name
        self.age = age


class Student(Person):

    def __init__(self, name, age, year, mark):
        Person.__init__(self, name, age)
        self.year = year
        self.mark = mark

    @staticmethod
    def get_info():
        print('%s, %s, учится на %s курсе и имеет средний балл %s' % (Person.name, Person.age, Student.year,
                                                                      Student.mark))


class Teacher(Person):

    def __init__(self, name, age, department, title):
        Person.__init__(self, name, age)
        self.department = department
        self.title = title

    @staticmethod
    def get_info():
        print('%s, %s, преподает на кафедре "%s" и имеет ученую степень %s' % (Person.name, Person.age,
                                                                               Teacher.department, Teacher.title))


class Dean(Person):

    def __init__(self, name, age, faculty):
        Person.__init__(self, name, age)
        self.faculty = faculty

    def get_info(self):
        print('%s, %s, занимает должность декана на факультете "%s"' % (Person.name, Person.age, Dean.faculty))


# Пример выполнения кода:

def main():
    s1 = Student("Вася", 22, 3, 3.5)
    s2 = Student("Маша", 19, 2, 4.8)
    t1 = Teacher("Анатолий", 45, "Механика", "к.т.н")
    d1 = Dean("Пётр", 56, "Математика")

    s1.get_info()
    s2.get_info()
    t1.get_info()
    d1.get_info()


main()
