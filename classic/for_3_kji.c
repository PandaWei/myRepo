#include <stdio.h>

int main()
{
    int a[10][20][30],i,j,k;

    for(i=0;i<10;i++)

        for(j=0;j<20;j++)

            // for(k=0;k<=30;k++) is wrong
            for(k=0;k<30;k++)
                printf("i:j:k->%d:%d:%d\n", i, j, k);
                a[i][j][k]=0;

    return 0;
}
