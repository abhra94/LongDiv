## Long Division using C programming Language

**Editor and Compiler used**: Dev-C++ 5.11, gcc 4.9.2

Have you ever wondered of dividing an integer with an integer that exceeds the _long int_ data type in C? 
_Long int_ ranges from -2,147,483,648 to 2,147,483,647. So total number of digits we can enter upto 10 using long int datatype.

For Java, C# and other object oriented programmers, there is a class named _BigInteger_. You can use it for long division, but there is no such logic, just few lines of code. create object of BigInteger, pass value to BigInteger Constructor and call the method "divide" and Done.

So if you prefer manual logic, or how this works, or you are a C coder, here goes my [code](https://github.com/abhra94/LongDiv/blob/master/BigDivision.c). 

**Disadvantage:** When the number of digits of quotient will be greater than 9, the result will be shown after sometime. This is because of loop. When the number of iterations goes higher, program will run slow. You may think that program goes to infinite loop or just hanged or crashed, but not. Just remain your program running, after sometime it will automatically show the correct result :)

Screenshot-1 (Normal Division) <br />
![Normal Division](/Screenshots/division3.png)

Screenshot-2 (No of Digits in quotient=10, Run time: 279.4s)<br />
![No of Digits in quotient=10, Run time: 279.4s](/Screenshots/division.png)

Screenshot-3 (No of Digits in quotient=11, Run time: 2746s)<br />
![No of Digits in quotient=11, Run time: 2746s](/Screenshots/division2.png)

Screenshot-4 (Divide by Zero Error)<br />
![Divide by Zero Error](/Screenshots/division4.png)

