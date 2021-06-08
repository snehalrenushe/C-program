#include<stdio.h>
#include<conio.h>

int main()
{

    int A=20 ;
    int B=10 ;
    int C=0 ;

    // Addition

    C = A + B ;

    printf("\n Addition Of %d + %d is = %d \n",A,B,C);

    getch();

    // Subtraction

    C = A - B ;

    printf("\n Subtraction Of %d - %d is = %d \n",A,B,C);

    getch();

    // Multiplication

    C = A * B ;

    printf("\n Multiplication Of %d * %d is = %d \n",A,B,C);

    getch();

    // Division

    C = B / A ;

    printf("\n Division Of %d / %d is = %d \n",B,A,C);

    getch();

    // Modulus

    C = B % A ;

    printf("\n Modulus Of %d %% %d is = %d \n",B,A,C);

    getch();

    // Increment

    C = A++ ;

    printf("\n Increment is = %d \n",C);

    getch();

    // Decrement

    C = A-- ;

    printf("\n Decrement is = %d \n",C);


    getch();
    return 0;
}
