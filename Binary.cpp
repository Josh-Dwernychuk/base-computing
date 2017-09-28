#include<iostream>
#include<math.h>
#include<cmath>
#include<stdlib.h>
#include<string>

using namespace std;
// Defines conversion functions
string decimal_to_binary(int num);
string decimal_to_hex(int num);
string decimal_to ascii(int num);


int main()
{// Creates titles of the table
    cout << "Decimal" << "   " << "Binary" << "   " << "Hexadecimal" << "   " << "ASCII" << endl;
//Loops through all values for display
    for (i=0 ; i<=127 ; i++)
        {
//Displays all values in table
        cout << i << "   " << decimal_to_binary(i) << "   " << decimal_to_hexadecimal(i) << "   " << decimal_to_ascii(i) << endl;


        }
    return 0;
}
// Function converts all decimal values to binary values
string decimal_to_binary(int num) {
//set counter at zero and create string of zeros
    int counter=0;
    string bin = "00000000";
//while decimal is not zero, run binary conversion
    while(num !=0)
    {
        bin[bin.length() - counter -1] = num%2+'0';
        num/=2;
        counter++;
    }
    //Return binary value
    return bin;
}
// Function converts decimal values to hexidecimal values
string decimal_to_hexadecimal(int num) {
// create characters of the hexidecimal number and the remainder variable
    char char1=num/16+'0';
    char char2;
    int rem=num%16;
// Begin hex string with 0x
    string hex="0x";
// Use switch to check the remainder and make the second character a letter if need be
    switch (rem)
    {
    case 10:
        char2='A';
        break;
    case 11:
        char2='B';
        break;
    case 12:
        char2='C';
        break;
    case 13:
        char2='D';
        break;
    case 14:
        char2='E';
        break;
    case 15:
        char2='F';
        break;
    default:
        char2=rem+'0';
    }
// Concatenate the two characters on to the hex string
    hex+=char1;
    hex+=char2;
// Return final hex string
    return hex;

    }
//This function converts decimal values to ASCII characters
char decimal_to_ascii(int num)
{
//create character variable of typr char
    char character;
//skip te first 32 decimal values, then convert decimal value to ASCII character
    if(num>32)
    {

        character=char(num)

    }
// Return character
    return character;
}
