#%%

#lets create a class named "Person". and we assume the class gets parameters "oneage" and "onename"
class Person:
    def __init__(self, oneage, onename):
        self.age = oneage
        self.name = onename

#define a function named "introduce". This function gets an example of the class "Person" 
#after that, fill the parameters and print the person
def introduce():
    someone = Person(50, "Mehmet")
    print(someone.name, someone.age)

#call the function
introduce()


#%%

"""
class Mathematics:
    pass  # attributes and methods will come later
mat1 = Mathematics()
mat2 = Mathematics()
mat3 = Mathematics()

print(mat1)  # address where the object is stored
print(mat2)
print(mat3)

mat1.name = "Carl"
mat1.surname = "Gauss"
mat1.pieces= 50

mat2.name = "Simon"
mat2.surname = "Laplace"
mat2.pieces = 12

mat3.name = "Fred"
mat3.surname = "Komm"
mat3.pieces = 4

print(mat1.name)  # information about "mat1" object
print(mat2.surname)
print(mat3.pieces)
print('{}{}'.format(mat1.name, mat1.surname)) #it prints the name and surname of the "mat1" object without space in between
#because there is no space in between the curly brackets
"""

#for a shorter print operation
class Mathematics:
    def __init__(self, name, surname, pieces):
        self.name = name 
        self.surname = surname
        self.pieces = pieces
        #these are the attributes of the class

    #there is no method in this class cuze no function in the class except the constructor(def __init__))

mat1 = Mathematics("Carl", "Gauss", 50)
mat2 = Mathematics("Simon", "Laplace", 12)
mat3 = Mathematics("Fred", "Komm", 4)
print(mat1.name)  # prints the name of "mat1"
print(mat2.surname)  # prints the surname of "mat2"
print('{} {}'.format(mat1.name, mat1.surname))  # prints the name and surname of "mat1" with a space in between

#%%

#create a class named "Customer"
class Customer:
    def __init__(self):
        self.name = "default name"
        self.surname = "default surname"
        self.phone = "phone number"

def start():
    customer1 = Customer()
    customer1.name = "Buse" #update the name attribute
    customer1.phone = "1234567890" #update the phone attribute
    print(customer1.surname)  
    print(customer1.phone)
    "print(customer1.email)  # this will raise an error because there is no email attribute in the class"

start()