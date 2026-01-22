#include <stdio.h>

int main()
{
    int bl = 0; // 0 = false
    if (!bl) // true
        printf("Hello\n");
    if (bl) // false
        printf("World!\n");
}