# class-and-object
THEORY

Class in C++ is the building block that leads to Object-Oriented programming. It is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A C++ class is like a blueprint for an object. For Example: Consider the Class of Cars. There may be many cars with different names and brands but all of them will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range, etc. So here, Car is the class, and wheels, speed limits, and mileage are their properties.

A Class is a user-defined data type that has data members and member functions.
Data members are the data variables and member functions are the functions used to manipulate these variables together, these data members and member functions define the properties and behavior of the objects in a Class.
In the above example of class Car, the data member will be speed limit, mileage, etc, and member functions can be applying brakes, increasing speed, etc.
An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.

Defining Class and Declaring Objects
A class is defined in C++ using the keyword class followed by the name of the class. The body of the class is defined inside the curly brackets and terminated by a semicolon at the end.

C++ Class and Object 


Declaring Objects
When a class is defined, only the specification for the object is defined; no memory or storage is allocated. To use the data and access functions defined in the class, you need to create objects.

Syntax
ClassName ObjectName;
Accessing data members and member functions: The data members and member functions of the class can be accessed using the dot(‘.’) operator with the object. For example, if the name of the object is obj and you want to access the member function with the name printName() then you will have to write obj.printName().

Accessing Data Members
The public data members are also accessed in the same way given however the private data members are not allowed to be accessed directly by the object. Accessing a data member depends solely on the access control of that data member. This access control is given by Access modifiers in C++. There are three access modifiers: public, private, and protected.

ALGORITHM

Find the volume of cube
The code you provided defines a C++ class named cuboid to represent a cuboid (a 3D rectangular shape) with default values for its height, width, and length. It then calculates and prints the volume of the cuboid in the main function. Here's an algorithmic description of the code:

1.Include the necessary header file for input and output operations, i.e., .

2.Declare the use of the std namespace to avoid having to prepend std:: before standard library objects like cout.

3.Define a class named cuboid with the following public data members:

double height with a default value of 2.0.
double width with a default value of 3.0.
double length with a default value of 5.0.
4.In the main function:

5.Create an instance of the cuboid class named c1.

6.Calculate the volume of the cuboid using the formula volume = height * width * length, where height, width, and length are the data members of the c1 object.

7.Store the calculated volume in a double variable vol.

8.Print the calculated volume using cout.

Write a function to display output
1.Include the necessary header file for input and output operations, i.e., .

2.Declare the use of the std namespace to avoid having to prepend std:: before standard library objects like cout.

3.Define a class named cuboid with the following public data members:

float l with a default value of 3.0 (length).
float w with a default value of 5.0 (width).
float h with a default value of 7.0 (height).
4.Define a member function display that takes a float parameter a (representing the volume of the cuboid) and displays the volume using cout.

5.In the main function:

6.Create an instance of the cuboid class named c1 with default dimensions.

7.Calculate the volume of the cuboid using the formula volume = length * width * height, where length, width, and height are the data members of the c1 object.

8.Store the calculated volume in a float variable vol.

9.Call the display member function of the c1 object, passing vol as an argument to display the volume.

Take input from user
1.Include the necessary header file for input and output operations, i.e., .

2.Declare the use of the std namespace to avoid having to prepend std:: before standard library objects like cout.

3.Define a class named cuboid with the following public member functions:

4.float calculate(float a, float b, float c): This function takes three float parameters representing the length, breadth, and height of the cuboid, calculates the volume using the formula volume = a * b * c, and returns the calculated volume as a float.

5.float display(float a): This function takes a float parameter a (the calculated volume) and displays it using cout.

6.In the main function:

7.Create an instance of the cuboid class named c1.

8.Declare float variables l, b, and h to store the length, breadth, and height of the cuboid.

9.Prompt the user to enter the length, breadth, and height of the cuboid.

10.Read the values entered by the user into the variables l, b, and h.

11.Calculate the volume of the cuboid by calling the calculate member function of the c1 object, passing l, b, and h as arguments, and store the result in the variable vol.

12.Call the display member function of the c1 object, passing vol as an argument, to display the calculated volume.

shapes_vol_class
1.Include the necessary header file for input and output operations, i.e., .

2.Declare the use of the std namespace to avoid having to prepend std:: before standard library objects like cout.

3.Define a class named shapes with the following public data members for dimensions of various shapes:

double h, double wid, double len for a cuboid. double s for a cube. double r for a sphere.

4.Define constructors for each shape:

cuboid(): Prompt the user to enter the dimensions (height, width, length) of a cuboid and read them into the respective class members.

cube(): Prompt the user to enter the dimension (side length) of a cube and read it into the class member.

sphere(): Prompt the user to enter the dimension (radius) of a sphere and read it into the class member.

5.Define member functions to calculate the volume of each shape:

double cuboid_volume(): Calculate the volume of the cuboid using the formula volume = h * wid * len, display it, and return the volume.

double cube_volume(): Calculate the volume of the cube using the formula volume = s * s * s, display it, and return the volume.

double sphere_volume(): Calculate the volume of the sphere using the formula volume = 4/3 * π * r^3, display it, and return the volume.

double cone_volume(): Calculate the volume of the cone (although the formula is incorrect, it should be fixed), display it, and return the volume.

5.In the main function:

Create instances of the shapes class for a cuboid, cube, and sphere.

Use the constructors to input the dimensions of each shape.

6.Calculate the volumes of each shape using their respective member functions and store the results in variables vCu, vC, and vS.

OUTPUT

Program to find volume

Volume:30

volume of cuboid =105

enter the length,breath and height:5 5 5 

Volume of cuboid=125

Enter the dimensions of cuboid :2 2 2

Enter the dimensions of cube :2

Enter the dimensions of sphere :2

volume of the cuboid is = 8

Volume of the cube is = 8

Volume of the sphere is = 33.4096

Program to write a date, day and month:

Enter the date :2

Enter the month :8

Enter the year :23

The date is :2th August 2023


Enter Date: 31

Enter Month: 8  

Enter Year: 23

Enter First Day of The Year: 

Sunday

The current month is: July

The current week is: thursday
