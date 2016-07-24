/* Title-Write a C program to show the solution of Tower of Hanoi problem using recursive method.
	Author-Subhamrit Bimali 
	Reference- Data structure using C and C++
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
 void tower(int, char , char , char); 
 
 int main()
 {
 	int disk;
 	printf("Enter the number of disk.\n");
 	scanf("%d",&disk);
 	tower(disk,'A','C','B');
 }
 
 void tower(int num, char A, char C, char B)
 {
 	if(num==1)
 	{
 		printf("\n%s %c %s %c","Move disk 1 from peg",A,"to peg",C);
 		return ;
	}
	 	tower(num-1,A,B,C);
		printf("\n%s %d %s %c %s %c","Move disk",num,"from peg",A,"to peg",C);
	 	tower(num-1,B,C,A);

}
