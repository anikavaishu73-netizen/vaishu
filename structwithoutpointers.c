#include <stdio.h>

void swap_even_offsets(int *ptr, int length)
{
    int temp;
    while (length > 1)
    {
        
        temp = *ptr;
        *ptr = *(ptr + 1);
        *(ptr + 1) = temp;

      
        ptr += 2;
        length -= 2;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40 , 50 ,60 ,70};
    int len = sizeof(arr) / sizeof(arr[0]);
    int *p = arr;

    swap_even_offsets(p, len);
    p = arr;
    while (len--)
    {
        printf("%d ", *p);
        p++;
    }

    return 0;
}
