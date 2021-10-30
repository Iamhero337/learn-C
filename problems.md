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

Sample input file is given `Q-041-input.txt`, use this file as input so you don't need to type
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
	printf("s[0] is %s\n", s[0]);

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

void sum_by_reference(int *a, int *b, int *sum)
{
	//
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
You are asked to write a program that will work as calculator and will print the final result in decimal value upto 2 decimal places.
First line of input is v and then next line will be n then n line follows
every line will have operator o and operand p.
where
- o is one of the following operator in one letter +, -, * and /.
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


## Q-066. 28-10-2021
You are given a partially solved problem of managing student records as a menu driven program
in the file `cclass-common/prob066.c`.
Currently the structure of student data type and add student functionality is implemented.

You need to implement the list functionality and delete functionality.
List funtionality should be implemented in given function `student_list()` which should
print all the students present in the `students` array.
Delete funtionality should be implemented in given function `student_delete()` which should
delete the student (i.e. removing the student from students record by shifting over students
present in the right side of the delete element) by student ID.
You should ask from user the ID of student that the user wants to delete.

The format of the output should be like:
ID    ROLL    SCORE    NAME
1     2       300      Student name
...



