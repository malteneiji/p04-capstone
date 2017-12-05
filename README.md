# p04-capstone
This program is a find function which will ask the user for files up to 10 text files and it will ask the user for a specific word and the program will find that word in all the files and report their line and word numbers


## Input/Output
[main.cpp lines 32-33](/main.cpp)
I have used the iostream cin to get the file names from the user and cout to display messages on the terminal for the user to see.

## Control Flow
[main.cpp lines 38-52](/main.cpp)
I have used if and else here to determine if the user has entered "done" after typing in the filenames.
Also i have used it to determine if the file open is a success and if the file is not succesfull it will display some message or else if its succesfull , the filenames will be set.
[find.cpp lines 52-69](/find.cpp)
I have used if and else if to determine if the word read by the string stream is valid or not and if it is , check if the word matches the users find word.

## Iteration
[main.cpp lines 28-55](/main.cpp)
I have used two do while loops. 
The first one will loop until the user enters done.
The second do while will repeat until the user enters a correct filename
[main.cpp lines 59-64](/main.cpp)
I have used a for loop here to go through all the files and display the Filename , and the find results of each file .
The for loop will run for the number of files the user entered.
[find.cpp lines 43-74](/find.cpp)
Here i have used a while loop because it first has to check if the file is still good and in every loop iteration it will check so the file is read until the end and then the loop will exit.

## Data Structure
[main.cpp lines 21-25](/main.cpp)
Here i have used two arrays to store the line numbers and word numbers after a certain word has been found in a file.
Also an Array of f1 objects is used for different files up to 10 files




## Function
[main.cpp lines 70-83](/main.cpp)
Here i have used a void function since it has nothing to return to print the found search results to the terminal .
Also Pass by value variables are used to pass the filename , word count , line numbers and wordnumbers to the function so that they can be printed.
[find.cpp lines 17-22](/find.cpp)
Here i have used a string return type function to return the filename of the class which is a private variable 
[find.cpp lines 7-15](/find.cpp)
Here i have used a void return type function to set the filename of the class which is a private variable .
[find.cpp lines 24-77](/find.cpp)
Here i have used an ineteger return type function which will return how many words found in a file 
Also Pass By reference variables are pass here so that after the function searches through the file , it will put the found words line numbers and word numbers into the array so the main function can access those and print


## File IO
[find.cpp lines 39-45](/find.cpp)
Here i have used the filestream to get input from the text file and get the data line by line to search though it for the chosen word

## Class
[find.h lines 5-18](/find.h)
Here i have used a class which has public member functions which will set , get filenames and to find through a text file for a word
Here the filename is private and the setFilename function will set its name .

