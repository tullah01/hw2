#include <stdio.h>

int main()
{
    unsigned int num = 3100000000;
    char * pointer = &num; 
    printf("%d\n", *pointer);

    printf("Num %d in hex: %x\n", num, num);
    
    for(int i = 0; i < sizeof(num); i++)
        printf("Byte #%d of num %d: %hhx\n", i, num, pointer++);    

    printf("*************************************\n");
    pointer = &num;
    for(int i = 0; i < sizeof(num); i++)
    {
        pointer++;
        printf("Increased byte #%d by 1\nIn decimal: %d\nIn hex: %x\nThe address: %p\n\n", i, pointer, pointer,  pointer);
    }

    printf("************************************\n");
    pointer = &num;
    for(int i = 0; i < sizeof(num); i++)
    {
        (pointer) += 16;
        printf("Increased byte #%d by 16\nIn decimal: %d\nIn hex: %x\nThe address: %p\n\n", i, pointer, pointer,  pointer);
    }

    printf("*************************************\n");
    pointer = &num;
    for(int i = 0; i < sizeof(num); i++)
    {
        (pointer) += 64;
        printf("Increased byte #%d by 64\nIn decimal: %d\nIn hex: %x\nThe address: %p\n\n", i, pointer, pointer,  pointer);
    }

}
