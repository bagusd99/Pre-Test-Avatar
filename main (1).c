#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int pil, lebar,temp,i,j;
    printf("------------------------\n");
    printf ("1. Bintang bentuk jam pasir\n2. Keluar\n");
    printf("------------------------\nPilih : ");
    scanf("%d",&pil);
    switch(pil)
    {
        case 1:
        printf("Lebar : ");
        scanf("%d",&lebar);
            for(i=1;i<=lebar;i++)
            {
                for(j=1;j<=lebar;j++)
                {
                   printf("*"); 
                }
                printf("\n");
                lebar=lebar-2;
            }
            for(i=1;i<=lebar;i++)
            {
                for(j=1;j<=lebar;j++)
                {
                   printf("*"); 
                }
                printf("\n");
            }
        }
    
}
