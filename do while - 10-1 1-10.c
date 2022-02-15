#include <stdio.h>


int main()
{
    int nr, nrb;
    
    nr=1;
    nrb=10;

    do
    {
        printf("%d is %d\n",nr,nrb);
        nr++;
        nrb--;
    }
        while(nr<=10);

    return 0;
}
