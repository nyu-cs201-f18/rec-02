#include <stdio.h>

void decipher( int * message, int size, char * deciphered_message); 

int main () { 
    int size = 13; 
    //secret message
    int message[] = {1668638787, 1867391083, 1936290418, 1851876128, 1818848032, 1870209132, 1699360373, 1142974054, 544104805, 544104803, 1819044203, 540618016, 7696249};
    //buffer to store the deciphered message 
    char deciphered_message [size * sizeof(int)];
    decipher( message, size, deciphered_message) ;
    printf("%s\n", deciphered_message); 
}

void decipher( int * message, int size, char * deciphered_message) { 
    //TODO: implement this function
}
