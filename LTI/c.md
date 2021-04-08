## C (Programming Language)

##### Q1. Which Code saple will eventually cause the computer to run out of memory ?

- [x]

```
while(1)
{
    char *smallString = (char *) malloc(10);
}
```

- [ ]

```
long long number = 1;
while(1)
    number *= 2;
```

- [ ]

```
while(1)
{
    char hugeString[1000000L];
    memset(hugeString, 0, 1000000L);
}
```

- [ ]

```
while(1)
{
    long *bigArray = (long *) malloc(sizeof(long) * 1000);
    memset(bigArray, 1000000, 1000);
    free(bigArray);
}
```

#### Q2. What will this code print on the screen?

```
int f1 (int a, int b)
{
    if (a > b)
    {
        printf("A is greater than B\n");
        return 1;
    }
    else
    {
        printf("B is greater than A");
        return 0;
    }
}

main()
{
    if (f1(20,10) || f1(10,20))
        printf("C is fun!\n");
}
```

- [X] A is greater then B
  C is fun!
- [ ] A is greater then B
  B is greater then A
  C is fun!
- [ ] A is greater then B
  B is greater then A
- [ ] Northing is printed on Screen

#### Q3. What is the name for calling a function inside the same function?

- [X] recursion
- [ ] subfunction
- [ ] inner call
- [ ] infinite loop

#### Q4. What does the declaration of variable c2 demonstrate?

```
main(){
    char c1 ='a';
    char c2 = c1+10;
}
```

- [X] character arithmetic
- [ ] undefined assignment
- [ ] type conversion
- [ ] invalid declaration

#### Q5. A pointer to void named vptr, has been set to point to a floating point variable named g. What is the valid way to dereference vptr to assign its pointed value to a float variable named f later in this program?

```
float g;
void *vptr=&g;
```

- [ ] f = _(float _)vptr;
- [ ] f = (float \*)vptr;
- [X] f = (float)\*vptr;
- [ ] f = \*(float)vptr;

#### Q6. What is this declaration an example of?

```
struct s {
    int i;
    struct s *s1;
    struct s *s2;
};
```

- [X] a node
- [ ] a linked list
- [ ] a stack
- [ ] a binary tree

#### Q7. A C header file is a file with extension .h that contains function declarations and macro definitons to be shared between several source files. Header files are listed using the preprocessing directive #include, and can have one of the following formats: #include &lt;fileA&gt; or #include "fileB". What is the difference between these two formats?

- [ ] The preprocessor will try to locate the fileA in same directory as the source file, and the fileB in a predetermined directory path.
- [ ] The preprocessor will try to locate the fileA in the fixed system directory. It will try to locate fileB in the directory path designated by the -l option added to the command line while compiling the source code.
- [ ] The file using fileA syntax must be system files, of unlimited number. fileB must be a user file at a maximun of one per source file.
- [X] The preprocessor will try to locate the fileA in a predetermined directory path. It will try to locate fileB in the same directory as the source file along with a custom directory path.

#### Q8. Using a for loop, how could you write a C code to count down from 10 to 1 and display each number on its own line?

- [ ]

```
for (int i = 0; i>=0, i--){
    printf("%d\n", i);
}//end of loop
```

- [ ]

```
int i;
for (i=1; i<=10; i++){
    printf("%d", i);
}
```

- [ ]

```
int i = 10;
while (i>0){
    printf("%d\n", i);
    i--;
}
```

- [x]

```
int i;
for (i= 10; i>0; i--){
    printf("%d\n", i);
}// end of loop
```

#### Q9. What is not one of the reserved words in standard C?

- [ ] volatile
- [X] typeof
- [ ] register
- [ ] typedef

#### Q10. What does the program shown below return?

```
int main(){
    int a=1, b=2, c=3, d=4;
    int x = a;
    if (a>b)
    if (b<c) x=b;
    else x=c;
    return(x);
}
```

- [X] 1
- [ ] 3
- [ ] 2
- [ ] 0

#### Q11. Using the Union declaration below, how many bytes of memory space will the data of this type occupy?

```
union Cars{
    char make[20];
    char model[30];
    short year;
}car;
```

- [ ] 32
- [ ] 54
- [X] 30
- [ ] 52

#### Q12. In this code sample, what is not a problem for C compiler?

```
main(){
    constant int PI = 3.14;
    printf("%f\n", pi);
}
```

- [ ] The value of PI needs to be set to 3.141593, not 3.14
- [X] The declaration of PI needs to say const, not constant.
- [ ] The data type of PI needs to be float not int.
- [ ] The printf statement needs to use PI, not pi.

#### Q13. Which is the smallest program to compile and run without errors?

- [ ] main()
- [ ] int main() {return 0;}
- [X] main() { }
- [ ] main() { ; }

#### Q14. What is optional in a function declaration?

- [ ] data type of parameters
- [ ] return type of function
- [X] parameter names
- [ ] number of parameters

#### Q15. C treats all devices, such as the display and the keyboard, as files. Which files opens automatically when a program executes?

- [X] stdout
- [ ] stdio.h
- [ ] default.h
- [ ] string.h

#### Q16. In which segment does dynamic memory allocation takes place?

- [ ] BSS Segment
- [ ] stack
- [X] heap
- [ ] data segment

#### Q17. Which of the following do you use to deallocate memory?

- [ ] dalloc()
- [ ] dealloc()
- [ ] release()
- [X] free()

#### Q18. In C language what are the basic building blocks that are constructed together to write a program?

- [ ] keywords
- [ ] identifiers
- [X] tokens
- [ ] functions

#### Q19. When is memory for a variable allocated?

- [ ] during the assigment of the variable
- [ ] during the initialization of the variable
- [X] during the declaration of the variable
- [ ] during the definition of the variable

#### Q20. By default c uses the call by value method to pass arguments to functions. How can you invoke the call by reference method?

- [X] by using pointers
- [ ] by declaring functions separately from defining them
- [ ] by using recursive functions
- [ ] by using global variables

#### Q21. A union allows you to store different **\_** in the same **\_**.

- [ ] Objects; Structure
- [ ] Variables; Declaration
- [X] Data types; Memory location
- [ ] Arrays; Header file

#### Q22. What is the output of this program?

```
main(){
    char c1='a' , c2='A';
    int i=c2-c1;
    printf("%d", i);
}
```

- [ ] 32
- [ ] Runtime error
- [X] -32
- [ ] 0

#### Q23. What is the difference between scanf() and sscanf() functions?

- [ ] The scanf() function reads data formatted as a string; The sscanf() function reads string input from the screen.
- [X] The scanf() function reads formatted data from the keyword; The sscanf() function reads formatted input from a string.
- [ ] The scanf() function reads string data from the keyword; The sscanf() function reads string data from a string.
- [ ] The scanf() function reads formatted data from a file; The sscanf() function reads input from a selected string

#### Q24. What is not a valid command with this declaration?

`char *string[20] = { "one", "two", "three"};`

- [ ] printf("%c", string[1][2]);
- [X] printf("%s", string[1][2]);
- [ ] printf("%s", string[1]);
- [ ] printf(string[1]);

#### Q25. What is the expression player->name equivalent to?

- [ ] player.name
- [X] (\*player).name
- [ ] \*player.name
- [ ] player.\*name