//Write a program which accept one number from user and 
//range of positions from user
//Toggle all bits from that range.
#include<stdio.h>

void toggle_bits_in_range(int *num, int start, int end) 
{
    unsigned int mask = 0;
    int i = 0, no = 0;

    // Validate the range (start and end should be within 1 to 32)
    if (start < 1 || start > 32 || end < 1 || end > 32 || start > end) 
    {
        printf("Invalid range.\n");
        return;
    }

    // Create a mask to toggle bits in the specified range
    i = (end - start + 1);      // to set the range
    no = (1 << i) - 1;  // to get all bits as 1
    mask = no << (start-1);
    
    // Toggle bits using XOR (^) with the mask
    *num = *num ^ mask;
}

int main() 
{
    int iValue, start, end;
    
    printf("Enter a number: ");
    scanf("%d", &iValue);
    
    printf("Enter starting position (0-31): ");
    scanf("%d", &start);
    
    printf("Enter ending position (0-31): ");
    scanf("%d", &end);
    
    toggle_bits_in_range(&iValue, start, end);
    
    printf("Number after toggling bits in range [%d, %d]: %d\n", start, end, iValue);
    
    return 0;
}



