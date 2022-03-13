Task 1
Design a structure Person to hold the following information: first name, last name, age, weight, height. In the main program create three objects of the above type, two of them fill with data in the program code and the third with data loaded from the user. At the end create a function which will display above structures.

Task 2
Change the code from Task 1 so that structure is loaded using a function that takes as argument a reference to the structure to be loaded. Also modify the function that displays structures so that it takes as argument a reference to the structure to display.

Task 3
Create a 5-element array storing objects of type Person (at least one of the cells should be filled with data loaded from the user using the function). Write out all the elements of the array using the function from task 2.

Task 4
Divide the program from Task 3 into separate files:
Create a file Person.cpp containing the read and display functions from the previous tasks.
Create a header file Person.h containing the structure declaration and function declaration from the *.cpp file.
Then attach the header file to the file with the main function of the program.

Task 5
Add to the file person.cpp and use a function that will take a pointer to an array of Person elements and return the average weight of all persons.

Task 6
Write a function to the file person.cpp that will return the highest person. Then display its data in the main program.

Task 7
Extend the program from task 3 with a function that sorts all the people in the array by age.

Task 8
Write a program that solves quadratic equations of the form ax2+bx + c = 0, where a0. Use a function that takes as argument a structure describing the equation and returns a structure describing the solutions to the equation. Remember about composite solutions. The program should read in the coefficients of the equation from the user and output the solutions.