// a program to demonstrate the differences among getch(), getche() & getchar(),scanf() & gets(),& printf() & puts()
#include <stdio.h>
#include <conio.h>
int main( )
{
//difference between scanf() and gets()
char nam[10] ;
printf("\nEnter name: ");
gets(nam); //will take multi-word input
char name[10];
printf("\nEnter name ") ;
scanf("%s",name); //will only take one word as input
printf("%s",name);

getchar();//to make another getchar() work

//differenece between getch(), getche() and getchar()
char ch ;
printf ("\nPress any key to continue") ;
getch() ; //will not echo the character
printf ("\nType any character") ;
ch = getche( ) ; //will echo the character typed
printf("\nType any character\n") ;
getchar() ; // will echo character, must be followed by enter key


//difference between puts() and printf()
puts(nam); //simpler syntax and have to define the variable type in syntax
printf("\n%s",name);
return 0;
}
