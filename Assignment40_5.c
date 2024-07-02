// Write a program which accept one number and 
//Toggle the contents of first and last nibble of that number.
//Return modified number.(Nibble is a group of 4 bits)


#include <stdio.h>


unsigned int toggle_nibbles(unsigned int iNo) 
{
    unsigned int first_nibble=0, last_nibble = 0, toggled_first_nibble = 0, toggled_last_nibble = 0, iResult = 0;
    
    first_nibble = (iNo >> 28) & 0x0000000F; // Shift right by 28 bits and mask with 0x000000F
    
    last_nibble = iNo & 0x0000000F; // Mask with 0xF
    
    // Toggle the bits within each nibble
    toggled_first_nibble = first_nibble ^ 0x0000000F; // XOR with 0xF to toggle
    toggled_last_nibble = last_nibble ^ 0x0000000F; // XOR with 0xF to toggle
    
    // Combine the modified nibbles back into the number
    iResult = (iNo & 0xFFFFFFF0) | (toggled_first_nibble << 28) | toggled_last_nibble;
    
    return iResult;
}

int main() {
    unsigned int iValue, imod_number;

    // Input from user
    printf("Enter a number (32-bit unsigned integer): ");
    scanf("%u", &iValue);
    
    // Call the function to toggle nibbles
    imod_number = toggle_nibbles(iValue);

    // Print the modified number
    printf("Original number: %u\n", iValue);
    printf("Modified number after toggling nibbles: %u\n", imod_number);

    return 0;
}
