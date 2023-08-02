class Customer:
    def __init__(name, self, age, salary):  # Constructor
        self.age = age
        self.name = name
        self.salary = salary

    def display(self):
        print("Name:{}".format(self.name))
        print("Age:{}".format(self.age))
        print("Salary:{}".format(self.salary))


# Creating an Object
Felix = Customer("Daniel", 34, 3475.890)
# Calling  a Function
Felix.display()
