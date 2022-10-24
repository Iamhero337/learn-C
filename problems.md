## Q-001. 31-07-2021
Write a C program to input Name, Age, and Salary of employee and print the details in below format:

Name:          Employee name here
Age:           32
Salary:        25000


## Q-002. 03-08-2021
Write a C program to input Name, Age, and Salary of employee and print the details in below format:
where Designation is calculated based on following conditions:

10000 < salary <= 20000		Intern
salary <= 35000				Jr. SDE
above 35000					Product Manager
below 10001					Unknown

Name:          Employee name here
Age:           32
Salary:        25000
Designation:   Jr. SDE

## Q-003. 06-08-2021
Write a C program to input length l and breadth b of 4 sided shape. Find the area of that shape.
Also print "Square" if l and b are same otherwise print "Rectangle".
l and b are real number. Print the area upto 4 decimal places.


## Q-004. 07-08-2021
Given a year, find out it's a leap year or common year in Gregorian calendar.
A Leap year occurs every 4 years, but every 100 years we skip a leap year unless the year is divisble by 400.
In other words, a leap year is a year which is either divisible by 4 but not 100 or by 400.

1.
Example Input:
1900
Example Output:
COMMON YEAR

2.
Example Input:
2000
Example Output:
LEAP YEAR


## Q-005. 08-08-2021
Given three sides of a triangle a, b and c, check whether the triangle is equilateral, scalence, or isosceles.
A triangle is:
Equilateral - All three sides are equal
Isosceles - Any two sides are equal
Scalence - All sides are unequal

1.
Example Input:
Side A: 5
Side B: 6
Side C: 7
Example Output:
The triangle is Scalence.

2.
Example Input:
Side A: 5
Side B: 6
Side C: 5
Example Output:
The triangle is Isosceles.


## Q-006. 09-08-2021
You are asked to write a program which should take details of a student and print the details in nice format and also prints the
grade and percentage that student has scored.
* Ask student name
* Ask Student roll number
* Ask student class
* Ask marks of 4 subjects English, Mathematics, Physics and Bio (out of 100)
* The grading scheme is as follows:
	- If percenage is greater than or equal to 80 then Grade = A
	- If percenage is greater than or equal to 60 and less than 80 then Grade = B
	- If percenage is greater than or equal to 50 and less than 60 then Grade = C
	- If percenage is greater than or equal to 45 and less than 50 then Grade = D
	- Otherwise Grade = F

1.
Example Input:
Name: Wasim
Roll: 1
Class: XII
Marks of English: 50
Marks of Mathematics: 55
Marks of Physics: 30
Marks of Bio: 40

Example Output:
+--------------------------------------+
| Roll:             1                  |
| Name:             Wasim              |
| Class:            XII                |
| Percentage:       43.75%             |
| Grade:            D                  |
+--------------------------------------+


## Q-007. 11-08-2021
Convert given temperature in Celsius if user choice is 'C' or Fahrenheit if user choice is 'F'.
So when user choice is 'C' then ask for Fahrenheit value and convert this to Celsius and vice versa.
celsius = 5 / 9 * (fahrenheit - 32)
fahrenheit = (celsius * 9 / 5) + 32

1.
Example Input:
Choice: C
Fahrenheit: 60

Example Output:
Celsius = 15.56C

2.
Example Input:
Choice: F
Celsius: 10

Example Output:
Fahrenheit = 50F


## Q-008. 13-08-2021
Write a program to read all characters until new line ('\n') and count occurrence of upper case letter 'A' and lower case letter 'a'.

1.
Example Input:
aAaaaaBBBBBBB

Example Output:
Total 1 'A' found
Total 5 'a' found 

2.
Example Input:
A B C D e f g hijkl

Example Output:
Total 1 'A' found
Total 0 'a' found 

## Q-009. 13-08-2021
Write a program to read all characters until new line ('\n') and count total number of spaces present in the input.
Notice the output has correct grammar.

1.
Example Input:
The quick brown fox jumps over the lazy dog.

Example Output:
Total 8 spaces found

2.
Example Input:
One Space.

Example Output:
Total 1 space found 


## Q-010. 21-08-2021
Write a program to read all characters until new line ('\n') and duplicate every characters that are entered by user.
Hint: use putchar() function

1.
Example Input:
The quick brown fox jumps over the lazy dog.

Example Output:
TThhee  qquuiicckk  bbrroowwnn  ffooxx  jjuummppss  oovveerr  tthhee  llaazzyy  ddoogg..


## Q-011. 21-08-2021
Write a program to read all characters until End of File  and replace every lowercase alphabets to its corresponding uppercase alphabets.
Hint: perform arithmetic on character

1.
Example Input:
The quick brown fox jumps over the lazy dog.

Example Output:
THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG.

2.
Example Input:
123 ABC efg HiJklm.

Example Output:
123 ABC EFG HIJKLM.


## Q-012. 21-08-2021
Write a program to read all characters until new line and point out all occurence of digits in the string.

1.
Example Input:
This is a simple number 1234 to assign test #1.

Example Output:
This is a simple number 1234 to assign test #1.
                        ^^^^                 ^
Note that you don't need to print the entered character just print the caret '^' symbol when digit found.


## Q-013. 22-08-2021
Write a program to read all characters until End of File and count how many vowels are present in given input.
If there is not a signel vowel found then print "Not a single vowel found."

1.
Example Input:
This is a dummy line.

Example Output:
There are 6 vowels present in the given input.

2.
Example Input:
bcd fgh jklmn pqrst vwxyz :p

Example Output:
Not a single vowel found.


## Q-014. 23-08-2021
Write a program to read all characters until End of File and count how many lines are present in the file/input.
If there is no line then print 0.

1.
Example Input:
This is a dummy line 1.
This is a dummy line 2.
This is a dummy line 3.
<LINE THAT CONTAINS ONLY ONE CHAR THAT IS NEW LINE ITSELF>.
I am the last line.

Example Output:
5 Lines

2.
Example Input:
<EOF>

Example Output:
0 Line


## Q-015. 23-08-2021
Write a program to read all characters until End of File and replaces more than one contiguous spaces to single space.

HINT: You can use the logic of word counting program here.

1.
Example Input:
This line has    contiguous spaces     which are    more than    one.
This    line    too has    contiguous spaces     which are    more than    one.

Example Output:
This line has contiguous spaces which are more than one.
This line too has contiguous spaces which are more than one.

2.
Example Input:
This line is written normally.
Without any extra spaces.
So the output should be exactly as input.

Example Output:
This line is written normally.
Without any extra spaces.
So the output should be exactly as input.


## Q-016. 24-08-2021
Write a program to read all characters until End of File and print every word in seperate line.

HINT: You can use the logic of word counting program here.

1.
Example Input:
The quick brown fox jumps over the lazy dog.

Example Output:
The
quick
brown
fox
jumps
over
the
lazy
dog.

2.
Example Input:
Word1
Word2
Word3
Word4      Word5.

Example Output:
Word1
Word2
Word3
Word4
Word5.


## Q-017. 31-08-2021
Write a program to check whether a number is a prime number or not.

1.
Example Input:
Number: 3

Example Output:
3 is a Prime Number.

2.
Example Input:
4

Example Output:
4 is not a Prime Number.


## Q-018. 31-08-2021
Write a program to print the following pattern for input n.

1.
Example Input:
4

Example Output:
* * * *
* * * *
* * * *
* * * *

2.
Example Input:
5

Example Output:
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *


## Q-019. 31-08-2021
Write a program to print the following pattern for input n.

1.
Example Input:
4

Example Output:
  1   2   3   4
  5   6   7   8
  9  10  11  12
 13  14  15  16

2.
Example Input:
5

Example Output:
  1  2  3  4  5
  6  7  8  7  8
  9 10 11 12 13
 14 15 16 17 18


## Q-020. 31-08-2021
Write a program to print the following pattern for input n.

1.
Example Input:
4

Example Output:
*
* *
* * *
* * * *

2.
Example Input:
5

Example Output:
*
* *
* * * 
* * * *
* * * * *


## Q-021. 31-08-2021
Write a program to print the following pattern for input n.

1.
Example Input:
4

Example Output:
  1
  2  3
  4  5  6
  7  8  9 10

2.
Example Input:
5

Example Output:
  1
  2  3
  4  5  6
  7  8  9 10
 11 12 13 14 15



## Q-022. 31-08-2021
Write a program to print the following pattern for input n.

1.
Example Input:
4

Example Output:
       *
     * *
   * * *
 * * * *

2.
Example Input:
5

Example Output:
         *
       * *
     * * *
   * * * *
 * * * * *


## Q-023. 31-08-2021
Write a program to print the following pattern for input n.

1.
Example Input:
4

Example Output:
* * * *
* * *
* *
*

2.
Example Input:
5

Example Output:
* * * * *
* * * *
* * *
* *
*


## Q-024. 31-08-2021
Write a program to print the following pattern for input n.

1.
Example Input:
4

Example Output:
 * * * *
   * * *
     * *
       *

2.
Example Input:
5

Example Output:
 * * * * *
   * * * *
     * * *
       * *
         *


## Q-025. 31-08-2021
Write a program to print the following pattern for input n.
HINT: Read question #025

1.
Example Input:
4

Example Output:
 *
   *
     *
       *

2.
Example Input:
5

Example Output:
 *
   *
     *
       *
         *

## Q-026. 31-08-2021
Write a program to print the following pattern for input n.

1.
Example Input:
4

Example Output:
 0
   1
     2
       3

2.
Example Input:
5

Example Output:
 0
   1
     2
       3
         4


## Q-027. 03-09-2021
Write a program to print the following pattern for input n.

1.
Example Input:
4

Example Output:
   *
  * *
 * * *
* * * *

2.
Example Input:
5

Example Output:
    *
   * *
  * * *
 * * * *
* * * * *


## Q-028. 04-09-2021
Write a program to find the result of following searies upto first n term.
1 + 1/2 + 1/3 + ... + 1/n

1.
Example Input:
4

Example Output:
2.08


## Q-029. 04-09-2021
Write a program to find the result of following searies upto first n term.
1 + 1/2^2 + 1/3^2 + ... + 1/n^2

1.
Example Input:
4

Example Output:
1.42


## Q-030. 04-09-2021
Write a program to find the result of following searies upto first n term.
2 + 1 + 4 + 3 + ...

1.
Example Input:
4

Example Output:
10


## Q-031. 04-09-2021
Write a program to print the first n term of fibonacci sequence.

1.
Example Input:
10

Example Output:
0 1 1 2 3 5 8 13 21 34


## Q-032. 06-09-2021
Write a program to print the following pattern for input n.

1.
Example Input:
4

Example Output:
```
   *
  ***
 *****
*******
```


## Q-033. 06-09-2021
Write a program to print the following pattern for input n.

1.
Example Input:
4

Example Output:
```
   *
  ***
 *****
*******
 *****
  ***
   *
```


## Q-034. 06-09-2021
Write a program to find the result of following searies upto first n term.
1 - x^2/2! + x^4/4! ...

1.
Example Input:
x = 9, n = 10

Example Output:
-5.1463

2.
Example Input:
x = 5, n = 15

Example Output:
0.2837


## Q-035. 07-09-2021
Write a program to create an integer array of size 100 and ask user for array size n between 1 and 100. Fill the array with user input
and count total number of even and odd elements in the array.
Explanation of array size and user input n: Declare the array by size 100 but only use upto n array space.

1.
Example Input:
4
22
66
33
44

Example Output:
Even = 3
Odd  = 1

Explanation: First line of input (i.e. 4) is the n, after that n line follows, each line represnts element for arri[i].


## Q-036. 08-09-2021
Given size of array n (0 < n <= 100). n integers are given and x. You need to find the index of x, if present otherwise print -1.
This is called searching in the array.

1.
Example Input:
44
4
22
66
33
44

Example Output:
3

2.
Example Input:
45
4
22
66
33
44

Example Output:
-1

Explanation 1: First line of input (i.e. 44) is the x, second line is n (i.e. 4)  after that n line follows, each line represnts element for arri[i].
+----+----+----+----+
| 22 | 66 | 33 | 44 | 	<- Array
+----+----+----+----+
   0    1    2     3    <- index
Output is 3 since x (i.e. 44) is found at index 3 in the array.


## Q-037. 10-09-2021
Given size of array n (0 < n <= 100). n integers are given.
You need to sort the array in descending order using bubble sort algorithm.

1.
Example Input:
4
22
66
33
44

Example Output:
66 44 33 22


## Q-038. 10-09-2021
Given size of array n (0 < n <= 100). n integers are given.
You need to find all the numbers which are duplicate in the array.

1.
Example Input:
4
22 66 33 22

Example Output:
22

2.
Example Input:
10
-1 -1 20 37 4 37 10 100 10 232

Example Output:
-1
10 37

3.
Example Input:
4
1 2 3 4

Example Output:

Explanation (Example 3): Since there is no duplicates in input therefore there is no output (just the new line)

## Q-039. 21-09-2021
Write a function `int linear_search(int x, int arr[], int n)` that will find x in arr[] and returns the index of x in arr if found otherwise
returns -1. Also implement the main function to take input and call the function and print the result.

1.
Example Input:
44
4
22
66
33
44

Example Output:
3

2.
Example Input:
45
4
22
66
33
44

Example Output:
-1

Explanation 1: First line of input (i.e. 44) is the x, second line is n (i.e. 4)  after that n line follows, each line represnts element for arr[i].
+----+----+----+----+
| 22 | 66 | 33 | 44 | 	<- Array
+----+----+----+----+
   0    1    2     3    <- index
Output is 3 since x (i.e. 44) is found at index 3 in the array.


## Q-040. 22-09-2021
Write a function `int isvowel(char ch)` that return 1 (means true) if ch is vowel otherwise 0 (means false).
Now write the main function and print the return value of isvowel function for the following characters:
'a', 'B', '6' and ' '.


## Q-041. 22-09-2021
Write a program that will take input upto EOF and for every line print the line after removing the vowel
characters. Use the isvowel() function from last question Q-040 to check character is vowel or not.

1.
Example Input:
The quick brown fox jumps over the lazy dog.
And this is second line which is just a dummy line.

Example Output:
Th qck brwn fx jmps vr th lzy dg.
nd ths s scnd ln whch s jst  dmmy lne.

2.
Example Input:
01269797 8978979 979, 9797.

Example Output:
01269797 8978979 979, 9797.

NOTE: Your output will be right below the input line so don't worry about taking the entire input
first and then processing line by line. Therefore you need to just read and process character by
character as we did in our previous problems (e.g. Q-009, Q-010 etc.).


## Q-042. 24-09-2021
Write a function `void reverse_string(char s[])` which will take C string `s` and reverse that string.
You can use the `get_line` function for reading a line.

1.
Example Input:
The quick brown fox jumps over the lazy dog.

Example Output:
.god yzal eht revo spmuj xof nworb kciuq ehT

2.
Example Input:
01269797 8978979 979, 9797.

Example Output:
.7979 ,979 9798798 79796210


## Q-043. 25-09-2021
Write a program to read until EOF and print only the lines which has length greater than 100.
Use the `get_line` function that we have already implemented in class.

Sample input file is given `inputs/Q-041-input.txt`, use this file as input so you don't need to type
100 or more characters line to test your program's correctness.

## Q-044. 26-09-2021
Write a program to input two integer array of size 10, merge these two array in a third array.

1.
Example Input:
1 2 3 4 5 6 7 8 9 10
11 12 13 14 15 16 17 18 19 20

Example Output:
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20

Explanation: The first line of input is first array and second line of input is second array the
resulted output is another array which is of size 20.


## Q-045. 28-09-2021
Write a program to find minimum and maximun element in an integer array of size n.
where n is the number of elements present in the array.
0 < n <= 100


## Q-046. 04-10-2021
Write a function `int sub_string(char s[], char sub[])` which will return index of first match of `sub` in `s` if found otherwise -1.
You will also have to write main function to take two inputs from user, s and sub, in main function and call the `sub_string()`
function passing the required argument and print the return value of `sub_string()` function.

1.
Example Input:
aabcd efgh
abc

Example Output:
1

Explanation: The first line of input is `s` (the string) i.e. `aabcd efgh` and second line is `sub` i.e. `abc` (the search string),
which you need to search in `s`.
Output is 1 because the substring `abc` which exactly matches in `aabcd efgh` from index position 1.


## Q-047. 04-10-2021
Write a program to take integer n and create array of size n x n and fill the array with user input.
Print the left triangle of the 2D matrix.

1.
Example Input:
3
1 2 3
4 5 6
7 8 9

Example Output:
1
4 5
7 8 9


## Q-048. 04-10-2021
Write a program to take integer n and create array of size n x n and fill the array with user input.
Sort the array using bubble sort algorithm.

1.
Example Input:
3
4 3 2
1 5 9
6 8 7

Example Output:
1 2 3
4 5 6
7 8 9

## Q-049. 09-10-2021
Write a function `int power(int b, int p)` which will calculate the `b^p` using recursion technique.
You also need to write `main()` function.

constraint:
0 < b < 100
0 < p < 10


## Q-050. 11-10-2021
Write a function `void array_reverse_print(int *arr, int size)` which will print the given array `arr` of size `size`
using recursion technique, you can not use loop here.
You also need to write `main()` function, you can statically initialize an integer array of size 8 like this below:
```
int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
```


## Q-051. 11-10-2021
Given below the main function:

```
#include <stdio.h>

int main(void)
{
	double d[] = {1.0, 1.1, 2.0, 2.1, 3.2, 4.5, 11.34, 33.44};

	/* @NOTE Please fill out the code below to print the address of
	 * every element of array d */



	return 0;
}
```

Fill out the rest of the code as instructed in the @NOTE.


## Q-052. 11-10-2021
Given below the main function:

```
#include <stdio.h>

void print_address(double *arr, int size);

int main(void)
{
	double d[] = {1.0, 1.1, 2.0, 2.1, 3.2, 4.5, 11.34, 33.44};

	print_address(d, 8);

	return 0;
}
```

Implement the `print_address()` function to print out the address of every element
of given array using pointer arithmetic (do not use array subscript syntax).


## Q-053. 11-10-2021
Find and eliminate all code that generates Segmentation Fault
Please note that last `printf()` call should print the character `H` of the
string `"Hello World"`.

```
#include <stdio.h>

int main()
{
	char *s;
	char foo[] = "Hello World";

	*s = foo;
	printf("s is %s\n", s);

	s[0] = foo;
	printf("s[0] is %c\n", s[0]);

	return 0;
}
```


## Q-054. 15-10-2021
Read the below code and do what the comment says. Do not delete the comment.
Do not modify this file. Copy the code in your editor and perform all the task.

```
#include <stdio.h>

int main()
{
	int a;
	int *aptr;

	aptr = &a;

	/* @TASK Now write the code below to print the content of aptr */


	/* @TASK Now write the code below to print the value of a using aptr */


	/* @TASK Can you print the size of aptr using sizeof operator?
	 * If yes then write the code below */

	return 0;
}

```


## Q-055. 15-10-2021
Read the below code and do what the comment says. Do not delete the comment.
Do not modify this file. Copy the code in your editor and perform all the task.

```
#include <stdio.h>

int main()
{
	char ch;
	/* @TASK Declare a character pointer variable here */

	/* @TASK Store the address of character variable ch in newly declared variable */

	/* @TASK Print the address of ch variable using only ch variable */

	/* @TASK Verify that the address of ch and content inside pointer variable are same
	 * using if condition */


	/* @TASK Now write the code below to print the value of ch using pointer variable */

	return 0;
}

```


## Q-056. 15-10-2021
Read the below code and do what the comment says. Do not delete the comment.
Do not modify this file. Copy the code in your editor and perform all the task.

```
#include <stdio.h>

int main()
{
	char string[] = "HELLO!";

	/* @TASK Write the statement below to show what is the value of string
	 * and also the value of &string[0], are the same? */

	/* @TASK  Print every characters of string using pointer arithmetic,
	 * don't use array subscript notaion i.e. []. */

	

	return 0;
}

```


## Q-057. 16-10-2021
Run the below code and do what the comment says. Do not delete the comment.
Do not modify this file. Copy the code in your editor and perform all the task.

```
/* @TASK Write below what will the function print_array will print: */
/* @YOUR_ANSWER:  */

#include <stdio.h>

void print_array(double *arr, int size);

int main()
{
	double darr[] = {1.50, 22.45, 45.23, 55.90, 12.00};

	/* @TASK What &darr[2] means here? */
	print_array(&darr[2], 3);

	return 0;
}

void print_array(double *arr, int size)
{
	double *ptr = arr;
	
	while (ptr != arr + size) {
		printf("%lf\n", *ptr);
		ptr++;
	}
}

```


## Q-058. 16-10-2021
Read the below code and do what the comment says. Do not delete the comment.
Do not modify this file. Copy the code in your editor and perform all the task.

```
#include <stdio.h>

int main()
{
	double d1, d2;
	double *ptr1, *ptr2;

	/* @TASK Assign the address of d1 in ptr1 and d2 in ptr2 */

	d1 = 1.0;
	d2 = 2.0;

	/* @TASK What will the below line print? */
	/* YOUR_ANSWER:  */
	printf("%lf\n", *ptr1 + *ptr2);

	return 0;
}

```

## Q-059. 16-10-2021
Write a function `void sum_by_reference(int *a, int *b, int *sum)` which will take three integer pointers
where `a` will point to some integer value and `b` will point to another integer value.
You need to add values pointed by `a` and `b` and store the result in the address where `sum` points to.
The main function is written here to let you understand what the question asks you to do, therefore you
just need to write the `sum_by_reference` function.

```
#include <stdio.h>

void sum_by_reference(int *a, int *b, int *sum);

int main()
{
	int x, y, result;
	
	x = 10;
	y = 20;
	sum_by_reference(&x, &y, &result);
	printf("SUM = %d\n", result);

	return 0;
}

void sum_by_reference(int *a, int *b, int *sum)
{
	//
}

```

## Q-060. 16-10-2021
Read the below code and do what the comment says. Do not delete the comment.
Do not modify this file. Copy the code in your editor and perform all the task.

```
#include <stdio.h>

int main()
{
	char str1[] = "Hello World";
	char *str2  = "Hello world";

	/* @TASK What this below code does?
	 * Is there any problem with the below code?
	 * If YES then what and why */
	/* YOUR_ANSWER:  */

	*(str1 + 0) = 'B';
	*(str2 + 0) = 'B';

	return 0;
}

```


## Q-061. 16-10-2021
Read the below code and do what the comment says. Do not delete the comment.
Do not modify this file. Copy the code in your editor and perform all the task.

```
#include <stdio.h>

int main()
{
	/* @TASK Declare a char pointer "str" and initialise it with your name */

	/* @TASK Write a code to print every character of that pointer variable
	 * You can only use putchar() function to print a char.
	 * Write the code in such a way that you would not need any extra variable */

	return 0;
}

```


## Q-062. 24-10-2021
Wite a program that will implement the following instruction:

- Declare two char array of size 100
- Declare a third variable of char pointer
- Input two strings in char array variable you declared
- Allocate enough new memory that will hold the both string joined together and
  there should not be single byte of extra space
- Copy the first string in new memory which should be pointed by the pointer you declared
- Then concatenate the second string in the new memory
- Print the newly created string


## Q-063. 26-10-2021
You are asked to write a program that will work as calculator and will print the final result in decimal value upto 2 decimal places for the `n` given operations.
First line of input is v and then next line will be n then n line follows
every line will have operator o and operand p.
where
- o is one of the following operator in one letter `+, -, * and /`.
- p is operand which is a double precision value e.g. 5.0
- v is an initial value in decimal
- n is integer denoting number of operation you need to perform
Use switch case

constraints
0.00 < v < 1000000000.00
0 < n < 100
-1000000000.00 < p < 1000000000.00

1.
Eample input
100.0
3
+ 50.50
- 50.50
* 0.5

2.
Example output
50.00

Explanation:
First line of input is `v` second line is `n` and then n line follows
first line of operation is `+ 50.50` therefore v + 50.50 -> 150.50
second line of operation is `- 50.50` therefore v - 50.50 -> 100.00
third line of operation is `* 50.50` therefore v * 0.5 -> 50.00
Hence the final value of `v` is 50.00



## Q-064. 26-10-2021
Write a program that will read line(s) until end of file and print the same line(s) in reverse order.

1.
Example input:
This is line 1
This is line 2
This is line 3

Example output:
This is line 3
This is line 2
This is line 1


## Q-065. 26-10-2021
Write a program to merge two sorted integer arrays arr1 and arr2 of size n and m in a new sorted array.
You need to implement a function `int *merge_array(int *arr1, int *arr2, int n, int m)` which will take
two array and it's sizes and creates a new array of size `n + m` dynamically and merges the arrays in
this new array in sorted order and return this new array.
You need to also write `main()` function to handle input, output and calling of `merge_array()` function.
PLEASE maintain the input output format (don't print anything extra)

1.
Example input:
3
1 4 5
3
2 3 6

Example output:
1 2 3 4 5 6

Explanation:
Here n is 3 and in the next line n integers are given so arr1 is 1, 4, 5
then m is 3 and in the next line m integers are given so arr2 is 2, 3, 6
both arrays are sorted

the new merged array will become 1, 2, 3, 4, 5, 6


## Q-066. 10-11-2021
Write a program that will read lines from user until end of file and write the same
line in a file "para.txt".
Use the `get_line()` function that we wrote in the past to read user input.


## Q-067. 12-11-2021
Write a program that will open file `/usr/share/dict/words` and read every line of
this file and print every line.
NOTE: This program is for linux OS.


## Q-068. 13-11-2021
Let's make our own basic file copy program.
Write a program that will take two file paths as command line argument, let's call
these file `source` and `destination` respectively.
Open the `source` file in read mode and open the `destination` file in write and
read one line at a time from `source` file and wrie that same line in `destination`
file. You can use `get_line()` function or can also read file character by character
using `getc()` function.


## Q-069. 16-11-2021
Write a program that will take filename as command line argument and opens that file
in append mode, first prints every line from the file (if any) then reads a line
from user at a time and appends that newly read line in the same file.
When users enters EOF then you should stop reading the line and close the file.

Explanation: Let's say program is ran with `file.txt` as argument to program
and this file already has 3 lines in it. You should print this three line first
on terminal then read new line from user and append those new lines to the same
file until end of file. Let's say user typed 4 new lines then final content of
the file should be 7 lines (3 from previous and 4 new lines from user).


## Q-070. 17-11-2021
Write a program that will take filename as command line argument and print
the content of the file twice.

Explanation:
Let's say the file has 2 lines
```
Line 1
Line 2
```
Your program should print
```
Line 1
Line 2
Line 1
Line 2
```


## Q-071. 18-11-2021
Write a program to initialize five any integers in an array `arr` of size 5.
Create a file `numbers.bin` and write entire array `arr` in it, close the
file and exit the program.


## Q-072. 18-11-2021
Write a program to open the file `numbers.bin` from previous problem `Q-071`
and read the entire file in an integer array `arr` of size 5 and print that
array on `stdout` (terminal).
Verify that the output of this program matches the integers that are wrote
in file `numbers.bin` in problem `Q-071`.


## Q-073. 20-11-2021
You are given a struct `struct student` as declared below. You need to 
write a program to read input from `stdin` (keyboard) and fill the member
of the struct and then write that struct to file `student.db`.
```c
struct student {
	int roll;
	char name[100];
	char phone[16];
};
```


## Q-074. 20-11-2021
You are given the same struct `struct student` as in problem `Q-073`. You need to 
write a program to read input from file `student.db` (from prev question) in struct
`struct student` and print the value of student on `stdout` (terminal).


## Q-075. 24-11-2021
You are given the same struct `struct student` as in problem `Q-073`. You need to 
write a program that will create `struct student` array of size 3 to read input
from `stdin` (keyboard) of 3 students and fill that array and then write that array
to file `student.db`.
After writing, this `student.db` file must contain those three students that you wrote.


## Q-076. 25-11-2021
You are given the same struct `struct student` as in problem `Q-075`. You need to 
write a program to read input from file `student.db` (from prev question) in
`struct student` array (you need to declare struct student array of size 3) and print
the value of all students on `stdout` (terminal).


## Q-077. 30-11-2021
You are given a partially solved problem of managing student records as a menu driven program
in the file `cclass-common/partials/prob077.c`.
Currently the structure of student data type, handling of user input and output has been done.

- Add function should be implemented in given function `student_add()`.
- List funtionality should be implemented in given function `student_list()` which should
  print all the students present in the `students` array.

The format of the output should be like:
ID    ROLL    SCORE    NAME
1     2       300      Student name
...


## Q-078. 02-12-2021
Continuing `Q-077`...
You are given a partially solved problem of managing student records as a menu driven program
in the file `cclass-common/partials/prob077.c`.
Currently the structure of student data type, handling of user input and output has been done.

- Edit functionality should be implemented in given function `student_edit()` which should
  ask `id` of student to be edited, ask new details of students and then update it with old one.
- Delete functionality should be implemented in given function `student_delete()` which should
  ask `id` of student to be deleted, and then delete that student from students array.


## Q-079. 05-12-2021
Rewrite program `Q-077` using file as storage place and not students array in memory.
You are given a partially solved problem of managing student records as a menu driven program
in the file `cclass-common/partials/prob079.c`.
Currently the structure of student data type, and few functions are declared.

- Add function should be implemented in given function `student_add()`.
- List funtionality should be implemented in given function `student_list()` which should
  print all the students present in the file `fp` (passed as arg).

The format of the output should be like:
ID    ROLL    SCORE    NAME
1     2       300      Student name
...


## Q-080. 05-12-2021
Rewrite program `Q-077` using file as storage place and not students array in memory.
You are given a partially solved problem of managing student records as a menu driven program
in the file `cclass-common/partials/prob080.c`.
Currently the structure of student data type, and few functions are declared.

- Edit functionality should be implemented in given function `student_edit()` which should
  ask `id` of student to be edited, ask new details of students and then update it with old one.
- Delete functionality should be implemented in given function `student_delete()` which should
  ask `id` of student to be deleted, and then delete that student from the file `fp`.


## Q-081. 09-12-2021
You are given the data structure of a UFC Martial Artist below.
You need to ask details of 5 fighters and fill the struct and then print details of all fighters
in tabular form as shown below.
```c
struct Fighter {
	char name[100];
	char country[100];
	int rank;
	double height;
	int weight_class; /* just use 150, 170, 180, .. */
};
```
```console
SL.    RANK    HEIGHT    WGHT.        NAME                     COUNTRY
1      5       5.7"      150          Dustin Poirier           US
```


## Q-082. 13-12-2021
You need to improve the previous problem `Q-066` by sorting the array of fighter struct
by fighter rank and then print the same, therefore the rank 1 fighter will be in top.


## Q-083. 04-11-2021
You need to improve the previous problem `Q-067`. As you are sorting the array of fighters
by their rank but now you need to modify your program to take sort by column from command
line argument and sort it according to that column.
The cli argument can be any of the following:
rank, wreight and height
For example your program can be run as
```console
$ ./prog weight
```
So your program should sort the array using weight field in struct after taking input
and print the sorted result in tabular form.

Hint:
You should first compare the `argv[1]` value to check what column is given and call
appropriate function for sorting the array. Implementation of this logic may look
like this:
```c
if (strcmp(argv[1], "weight") == 0) {
	// Call sort by weight function or just implement the sorting
	// logic right in this if block by using weight_class member
	// for comparision.
} else if (strcmp(argv[1], "height") == 0) {
	// Call sort by height function or just implement the sorting
	// logic right in this if block by using height member
	// for comparision.
} else if (strcmp(argv[1], "rank") == 0) {
	// Call sort by rank function or just implement the sorting
	// logic right in this if block by using rank member
	// for comparision.
} else {
	// Handle invalid column name
}
```


## Q-084. 17-12-2021
Write a program to create linked list of 5 nodes. The node struct is given below.
You need to store value in `data` member using user input.
After building the linked list you need to find sum of all `data` in the linked list.
```c
struct node {
	int data;
	struct node *next;
};
```


## Q-085. 18-12-2021
Write a program to create linked list of `n` nodes. The node struct is given below.
You need to store value in `data` member using user input.
After building the linked list you need to print the linked list on `stdout` in
the format given below.
Note: Don't try to create a function for adding new node in the list.
```c
struct node {
	int data;
	struct node *next;
};
```

Example input:
8
1 2 3 4 5 6 7 8

Example output:
1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8

Explanation: First line of input, i.e. 8, is `n` then `n` integers are input.


## Q-086. 21-12-2021
Given a long sequence of digits `d` you need to print each digit as word.

constraint:
`0 < |d| (length of digits) <= 100`

Example input:
12345678910111213

Example output:
One Two Three Four Five Six Seven Eight Nine One Zero One One One Two One Three


## Q-087. 20-12-2021
Write a program to create linked list of `n` nodes. The node struct is given below.
You need to store value in `data` member using user input.
After building the linked list you need to print the number of even and odd numbers
are present in the list.
```c
struct node {
	int data;
	struct node *next;
};
```

Example input:
8
1 2 3 4 5 6 7 8

Example output:
Total Even = 4
Total Odd  = 4

Explanation:
First line of input in 8 which is `n` and next line is space seperated `n` integers.
Since the total number of even and odd integers present in the input is `4` and `4` respectively, the output
shows the same.


## Q-088. 24-12-2021
Given a string `s` you need to replace every lowercase alphabets to it's corresponding uppercase alphabets.

constraint:
* 0 < |s| (length of string) <= 100

1.
Example Input:
The quick brown fox jumps over the lazy dog.

Example Output:
THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG.

2.
Example Input:
123 Abc456 efg HiJklm.

Example Output:
123 ABC456 EFG HIJKLM.


## Q-089. 24-12-2021
Write a program to input 2D array of size `n` and create a 2D array of size `n x n`. Fill the array
in such a way that the left diagonal of the 2D array should be filled with `1` and other cells
with `0`.

constraints:
* 0 < n <= 100

1.
Example Input:
5

Example Output:
1 0 0 0 0
0 1 0 0 0
0 0 1 0 0
0 0 0 1 0
0 0 0 0 1


## Q-090. 24-12-2021
Write a program to create linked list of `n` nodes. The node struct is given below.
You need to store value in `data` member using user input.
After building the linked list you need to print the `data` of first and last node
of the linked list.
```c
struct node {
	int data;
	struct node *next;
};
```

Example input:
8
1 2 3 4 5 6 7 8

Example output:
First node = 1
Last node  = 8


## Q-091. 29-12-2021
You are given partially solved linked list problem for impelementing linked listed
operations, insertion, deletion and traversal, in the file `cclass-common/partials/prob091.c`.
You need to implement only these functions:
```
Node *llist_insert_before(Node *head, Node *node, int data);
Node *llist_insert_after(Node *head, Node *node, int data);
Node *llist_delete_end(Node *head);
Node *llist_delete_node(Node *head, int data);
void llist_print(Node *head);
```
You don't need to write test code, all the test code is already written and your
implemented functions will automatically tested. Except the `llist_print()` function
should be tested by you by verifying the below output:
```
2 4 6 8 10
```


## Q-092. 02-01-2022
You need to create a menu driven program that will allow to perform all the following
operations on singly linked list:

* Insear new node at the front
* Insert new node at the end
* Insert new node before a given key
* Insert new node after a given key
* Delete node from front
* Delete node from end
* Delete node of given key
* Print the list
* Print the list in reverse order

You can use the solution from previous problem `Q-091`.

The menu should look like this:
```console
 1: To insert node at the front
 2: To insert node at the end
 3: To insert node before a key
 4: To insert node after a key
 5: To delete frist node
 6: To delete last node
 7: To delete node of given key
 8: To print the linked list
 9: To print the linked list in reverse order

 > 

```


## Q-093. 06-01-2022
Write a program to create doubly linked list of 5 nodes inserting at the end.
The node struct is given below. You need to store value in `data` member using user input.
After building the list you need to print the data of all nodes.
```c
struct node {
	int data;
	struct node *prev;
	struct node *next;
};
```


## Q-094. 06-01-2022
Write a program to create doubly linked list of 5 nodes inserting at the front.
The node struct is given below. You need to store value in `data` member using user input.
After building the list you need to print the data of all nodes.
```c
struct node {
	int data;
	struct node *prev;
	struct node *next;
};
```


## Q-095. 06-01-2022
Write a program to create doubly linked list of 5 nodes inserting at the front.
The node struct is given below. You need to store value in `data` member using user input.
Then insert `999` (data) before a given node (input by user) in the list.
After building the list you need to print the data of all nodes.
```c
struct node {
	int data;
	struct node *prev;
	struct node *next;
};
```

Example Input:
1 2 3 4 5
5

Example Output:
999 5 4 3 2 1

Explanation:
First line of input is value of 5 nodes and in the second line value of data i.e. 5
before which new node `999` must be inserted.
Input for 5 nodes are given in the first line of example input. As mentioned in the problem
that new node will be inserted at the front so the list will be
5 4 3 2 1
And inserting new node `999` before `5` will make the list as
999 5 4 3 2 1


## Q-096. 06-01-2022
Write a program to create doubly linked list of 5 nodes inserting at the end.
The node struct is given below. You need to store value in `data` member using user input.
Then insert `999` (data) after a given node (input by user) in the list.
After building the list you need to print the data of all nodes.
```c
struct node {
	int data;
	struct node *prev;
	struct node *next;
};
```

Example Input:
1 2 3 4 5
5

Example Output:
1 2 3 4 5 999

Explanation:
First line of input is value of 5 nodes and in the second line value of data i.e. 5
after which new node `999` must be inserted.
Input for 5 nodes are given in the first line of example input. As mentioned in the
problem that new node will be inserted at the end then the list will be
1 2 3 4 5
And inserting new node `999` after `5` will make the list as
1 2 3 4 5 999


## Q-097. 13-01-2022
Write a program to delete node from the front in a doubly linked list.
Use the solution of previous problems (insert at the end) to build
doubly linked list first.
Delete two nodes and then print the list to verify that your program
gives correct output.
```c
struct node {
	int data;
	struct node *prev;
	struct node *next;
};
```
Example input:
1 2 3 4 5

Example output:
3 4 5


## Q-098. 13-01-2022
Write a program to delete node from the end in a doubly linked list.
Use the solution of previous problems (insert at the end) to build
doubly linked list first.
Delete two nodes and then print the list to verify that your program
gives correct output.
```c
struct node {
	int data;
	struct node *prev;
	struct node *next;
};
```
Example input:
1 2 3 4 5

Example output:
1 2 3


## Q-099. 13-01-2022
Wrie a program to print the doubly linked list in reverse order using
loop and without using extra space.
Use the solution of previous problems (insert at the end) to build
doubly linked list first.
```c
struct node {
	int data;
	struct node *prev;
	struct node *next;
};
```
Example input:
1 2 3 4 5

Example output:
5 4 3 2 1


## Q-100. 15-01-2022
Implement stack data structure using linked list data structure.
You can use the previous linked list data structure solution.
You need to implement these operations using functions:

- push
- pop
- top
- empty


## Q-101. 15-01-2022
Implement queue data structure using linked list data structure.
You can use the previous linked list data structure solution.
You need to implement these operations using functions:

- enqueue
- dequeue
- front
- rear
- empty

## Q-102. 16-01-2022
Write the program to perform the below given `n` operations using stack data structure.
You need to print the elements left in the stack after performing all the operations.
The operations are:
- `+` to push item onto stack
- `-` to pop item from stack

These operations may appear in any order and any number of time. The `+` (push) operation 
requires a parameter so the actual `+` operation will look like `+ 5`, this means push
`5` onto stack.

Example Input:
5
+ 1
+ 2
+ 3
+ 4
-

Example Output:
3 2 1

Explanation:
The first line of input is `n` (i.e. 5), the number of operations then `n` line follows.
Each line represents single operation. Now the first 4 operations are push so the stack
will look like `4 3 2 1` (4 being top element and 1 being bottom element). Next the 5th
line is pop operation there for stack will be `3 2 1` and this is the output.


## Q-103. 17-01-2022
Write a linked list program to search an element in the linked list.
You are given the number of nodes `n` and data for `n` nodes. Next you are
given data `x` to find first occurance of that data in the linked list, if found
then print the position (indexed 0) of data `x` in the list otherwise print `-1`.

1.
Example Input:
5
1 2 3 4 5
4

Example Output:
3

2.
Example Input:
5
1 2 3 4 5
6

Example Output:
-1


## Q-104. 17-01-2022
Write a singly linked list program to swap given nodes.
You are given the number of nodes `n` and data for `n` nodes. Next you are
given data `x` to swap `x` with it's next node and print the list, you need to
swap the node not the data. It is guaranteed that given data `x` will not be
last node of the list.
1.
Example Input:
5
1 2 3 4 5
4

Example Output:
1 2 3 5 4


## Q-105. 01-02-2022
Write a singly linked list program to find kth node from the beginning.
You are given the number of nodes `n` and data for `n` nodes. Next you are
given `k` to find the kth node in the linked list from the beginning.

constraints:
1 <= n <= 100
1 <= k <= n

1.
Example Input:
5
5 4 3 2 1
4

Example Output:
2


## Q-106. 02-02-2022
Write a singly linked list program to find kth node from the end.
You are given the number of nodes `n` and data for `n` nodes. Next you are
given `k` to find the kth node in the linked list from the end.

constraints:
1 <= n <= 100
1 <= k <= n

1.
Example Input:
5
1 2 3 4 5
2

Example Output:
4


## Q-107. 03-02-2022
Write a singly linked list program  (insert at the end) to find kth node from
the end but this time, you need to implement function `void list_kth_node(Node *head, int k)`
which will take `head` of the list and `k` to print kth node in the list from the end.
You are given the number of nodes `n` and data for `n` nodes. Next you are
given `k` to find the kth node in the linked list from the end.

constraints:
1 <= n <= 100
1 <= k <= n

1.
Example Input:
5
1 2 3 4 5
2

Example Output:
4


## Q-108. 03-02-2022
Write a singly linked list program (insert at the end) to find middle node of
the list, you need to implement function `void list_middle_node(Node *head)`
which will take `head` of the list print data of middle node in the list.
You are given the number of nodes `n` and data for `n` nodes.

constraints:
1 <= n <= 100

1.
Example Input:
5
1 2 3 4 5

Example Output:
2

Explanation:
n is 5 and 5 / 2 is 2 (integer division)  therefore 2nd position element (which is 2 is printed).

2.
Example Input:
4
1 2 3 4

Example Output:
2

Explanation:
n is 4 and 4 / 2 is 2 therefore 2nd position element (which is 2 is printed).


## Q-109. 04-02-2022
Write a program to convert a decimal non negative integer `n` to it's binary equivalent.

constraints:
1 <= n <= 1000000007

1.
Example Input:
45

Example Output:
101101


## Q-110. 10-02-2022
Write a program to implement hash table data structure and also implement a function
`void ht_print_list_length(ht)` which will take only one argument Hash Table struct
and prints lengths of every linked list in hash table (do not print those array elements
which has zero linked list length).

Let's say you have hash table array size 100 and index 0, 1 and 99 has linked list with
length 12, 3, 8 respectively other indices of the array has 0 length linked list.
So the output should be:

0  -> 12
1  ->  3
99 ->  8

Where first column respresents index of the array and second column represents length of
the linked list at that indices.


## Q-111. 12-02-2022
Write a program to find all the words which are not present in the given dictionary.
You are given a dictionary file path `d` and a text file path `f`, you need to print
all the words from file `f` which are not present in the dictionary file `d`.
The content of the dictionary file is: each word in a seperate line.
The content of the text file is: can have multiple words in a single line and can have
more than 1 line. In other words the content will be like this problem statement.

Example Input:
`d` = `/usr/share/dict/words`
`f` = `problems.md`


## Q-112. 18-07-2022
Given positive integer `n` and `n` integers in next line separated by space.
You need to sort the input using `Selection Sort` algorithm.

Example Input:
5
9 1 4 2 7

Example Output:
1 2 4 7 9


## Q-113. 18-07-2022
Given positive integer `n` and `n` integers in next line separated by space.
You need to sort the input using `Insertion Sort` algorithm.


## Q-114. 18-07-2022
Given positive integer `n` and `n` integers in next line separated by space.
You need to sort the input using `Merge Sort` algorithm.


## Q-115. 18-07-2022
Given positive integer `n` and `n` integers in next line separated by space.
You need to sort the input using `Quick Sort` algorithm.


## Q-116. 18-07-2022
Given positive integer `n` and `n` integers in next line separated by space.
You need to sort the input using `Heap Sort` algorithm.


## Q-117. 18-07-2022
Given positive integer `n` and `n` non-negative integers in next line separated by space.
You need to sort the input using `Counting Sort` algorithm.


## Q-118. 25-07-2022
Write a program to merge two sorted integer linked list list1 and list2 in a new linked list.
You need to implement a function `ListNode *merge_list(ListNode *list1, ListNode *list2)` which will take
two linked list and creates a new linked list dynamically and merges the linked list in
this new linked list in sorted order and return this new linked list.

Example Input:
5
1 3 5 6 8
4
1 2 3 4

List 1 and list 2 will look like
list1 = 1 -> 3 -> 5 -> 6 -> 8
list2 = 1 -> 2 -> 3 -> 4

Example Output:
1 1 2 3 3 4 5 6 8

The output list will look like
list3 = 1 -> 1 -> 2 -> 3 -> 3 -> 4 -> 5 -> 6 -> 8


## Q-119. 25-07-2022
Minimize subtraction of Array elements to make X at most 0
Given a number X, and an array arr[] of length N containing the N numbers. The task is to find the minimum number of operations required to make X non-positive. 

In one operation:
Select any one number Y from the array and reduce X by Y. 
Then make Y = Y/2 (take floor value if Y is odd).
If it is not possible to make X non-positive, return -1.

Example:

Input: N = 3, arr[] = {3, 4, 12}, X = 25
Output:  4
Explanation: Operation 1: Y=12,   X reduces to 13,  Y becomes 6, arr[]: {3, 4, 6}
Operation 2: Y = 6, X reduces to 7, Y becomes 3, arr[]: {3, 4, 3}
Operation 3: Y = 4, X reduces to 3, Y becomes 2, arr[]: {3, 2, 3}
Operation 4: Y = 3, X reduces to 0, Y becomes 1, arr[]: {1, 2, 3}
Total operations will be 4.

Input:  N = 3, arr[] = {11, 11, 110}, X = 11011
Output: -1
Explanation: It is impossible to make X non-positive


## Q-120. 25-07-2022
Find First and Last Position of Element in Sorted Array
**Medium**

Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.


Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]


Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]


Example 3:

Input: nums = [], target = 0
Output: [-1,-1]


Constraints:

0 <= nums.length <= 105
-109 <= nums[i] <= 109
nums is a non-decreasing array.
-109 <= target <= 109


## Q-121. 04-08-2022

You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

xample 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps

Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step


## Q-122. 08-08-2022

Given an integer n (number of rows), return the first n rows of Pascal's triangle.
You need to implement `int **pascal_triangle(int n, int *nrows, int **ncols)`.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

```

    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

```

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

Example 2:

Input: numRows = 1
Output: [[1]]



Constraints:

1 <= numRows <= 30


## Q-123. 19-08-2022

Given two non-empty arrays of integers, write a function that determines whether
the second array is a subsequence of the first one.

A subsequence of an array is a set of numbers that aren't necessarily adjacent in the array but that are in the same order as they appear in the array. For instance, the numbers `[1, 3, 4]` from a subsequence of the array `[1, 2, 3, 4]`, and so do the numbers `[2, 4]`. Note that a single number in an array and the array itself are both valid subsequences of the array.


Example Input:

array = [5, 1, 22, 25, 6, -1, 8, 10]
sequence = [1, 6, -1, 10]

Example Output:

true


## Q-124. 19-08-2022

Write a function that takes in the head of a Singly Linked List and an integer `k`, shifts the
list in place (i.e., doesn't create a brand new list) by `k` positions, and returns it's new head.

Shifting a Linked List means moving its nodes forward or backward and wrapping them around the list where
appropriate. For example, shifting a Linked List forward by on position would make its tail become the
new head of the linked list.

Whether nodes are moved forward or backward is determined by whether `k` is positive or negative.

```c
struct lnode {
	int data;
	struct lnode *next;
};

```

You can assume that the input Linked List will always have at least one node; in other words, the head
will never be NULL.


Example Input:

head = 0 -> 1 -> 2 -> 3 -> 4 -> 5
k = 2

Example Output:

4 -> 5 -> 0 -> 1 -> 2 -> 3


## Q-125. 26-08-2022

Pint sum of all left leaf node of a Binary Search Tree.

Example Input:

   15
  /  \
 7    20
     /  \
    19  25

Example Output:

26

Explanation:

7 + 19


## Q-126. 26-08-2022

Print all leaf node of the Binary Search Tree.


## Q-127. 27-08-2022

Print all internal nodes (all nodes except leaf) of the Binary Search Tree.


## Q-128. 27-08-2022

Given a binary tree rooted at `root` to a function `struct node *bt_mirror(struct node *root)`.
Implement this function and return root of mirrored binary tree. Do not create new tree.

Example Input:

   15
  /  \
 7    20
     /
    19

Example Output:

   15
  /  \
 20   7
   \
   19
