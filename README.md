# Homework_1
To implement a C program that uses structures, dynamic memory allocation, and  string functions provided by the C library.

#description
The goal of this project is to implement a C program that a variable number of 
keywords as command line argument, reads text from the standard input stream, 
searches the keywords in the input stream, and when the end of input stream is 
reached prints the number of times each keyword appears in the input text. 


# Getting started
These instructions will give you a copy of the project up and running on your local machine for development and testing purposes.
# prerequisites
Requirements for the software and other tools to build, test and push
1. gcc - GNU Compiler Collection
2. Text editor

# installing
A step by step series of examples that tell you how to get a development environment running
1. open the text editor
2. create a c programming file
3. save the file with .c extension.

# Running the tests

functionality of the program:

Program takes the command line arguments as well as standard input stream as input. command line arguments contain the key words, and standard input contains a sample text. This program uses the updateKeywordCount to update the count. 

In this program, we have methods such as displayKeywordCount, updateKeywordCount.

updateKeywordCount is used to update the count of each keyword while parallelly comparing in the input stream in command line. 

displayKeywordCount takes a struct, and the number of arguments
It displays the keywords and the count of each keyword. 

In the int main(), these methods are called at the right time. 


In general a c program is executed in this way:
1. To compile the file, type the command 'gcc filename.c'
2. To run the file, type './a.out'

To test our program, follow the below steps

1. gcc sample.c 
2. ./a.out a an the 
    a a a an an an the the the 
    
output: a   : 3
        an  : 3
        the : 3
To send a file in input stream, follow the below steps:

./a.out a an the <tintTale.txt

# Author
Sri Vastava RNV

# Acknoledgement

I thank my TA's and Dr. Mahmut Unan for helping me learn everyday. 

# references

https://www.tutorialspoint.com/c_standard_library/c_function_strstr.htm

