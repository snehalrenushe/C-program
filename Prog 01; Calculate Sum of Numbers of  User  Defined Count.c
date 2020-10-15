#include<stdio.h>
#include<conio.h>

int Recursion_Add(int);
int main()
{
  int Cnt=0,Result=0;
  printf("\n Enter a count to calculate sum of the number : ");
  scanf("%d",&Cnt);
  Result= Recursion_Add(Cnt);
  printf("\n Sum of number = %d",Result);
  return 0;
}

int Recursion_Add(int Count)
{
  static int Add=0,i=0;
  int No=0;

    if(i<Count)
    {
        printf("\nEnter a %d number: ",++i);
        scanf("%d",&No);
        Add=Recursion_Add(Count)+No;
    }
    return Add;

}
