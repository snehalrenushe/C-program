#include<stdio.h>

int main()
{
    int val=0;

    printf("\n ASCII Table");
    while(val<128)
    {
        printf("\n %d = %c",val,val);
        val++;
    }

    return 0;

}
