#include <iostream>
#include "secret.hpp"



//----------------------------------------------------

void Caesar::encrypt(std::string key) {
    //NOTE: it only makes sense to have a key as a number when implementing a caesar cipher
    int numKey = std::stoi(key);//If this is not a number it will throw fail...
    int msg_len = (int) message.length();

    for (int i = 0; i < msg_len; i++) {
        message[i] = shifter(message[i], numKey);
    }

    isEncrypted = true;
}

void Caesar::decrypt(std::string key) {
    int key_len = (int) key.length();
    int msg_len = (int) message.length();
    int ii = 0;
    // unsigned int c, ii=0, newchar;



    for (int i = 0; i < msg_len; i++) {
        message[i] -= key[i];
        ii = (ii + 1) % key_len;
    }
}


//----------------------------------------------------

void Vigenere::encrypt(std::string key) {
    int keyLength = (int) key.length();
    int msg_len = (int) message.length();

    for (int i = 0, count = 0; i < msg_len; i++) {
        message[i] = shifter(message[i], key[count]);
        count = count < keyLength ? count + 1 : 0;
    }

    isEncrypted = true;

} // End of Caesar Encrypt

void Vigenere::decrypt(std::string key) {
    std::string s = key;
    int key_len = (int) s.length();
    unsigned int c, ii = 0, newchar;

    while ((c = (unsigned int) getchar()) != EOF) {
        newchar = c - s[ii];
        s[ii] = (char) c;
        std::cout << newchar;
        ii = (ii + 1) % key_len;
    }
}
//----------------------------------------------------

void Autokey::encrypt(std::string key) {
    int key_len = (int) key.length();
    int msg_len = (int) message.length();
    int ii = 0;
    // unsigned int c, ii=0, newchar;



    for (int i = 0; i < msg_len; i++) {
        message[i] += key[ii];
        ii = (ii + 1) % key_len;
    }

}

void Autokey::decrypt(std::string key) {
    int key_len = (int) key.length();
    int msg_len = (int) message.length();
    int ii = 0;
    // unsigned int c, ii=0, newchar;



    for (int i = 0; i < msg_len; i++) {
        message[i] += key[ii];
        ii = (ii + 1) % key_len;
    }
}

/**
 * @param letter this is the letter to be shifted.
 * @param shift this is the count of how many places over to shift letter.
 * @return the char in its shifted form. i.e. if letter 'a' is given with a shift of 3 then the result will be letter 'd'
 */
char Secret::shifter(char letter, int shift) {
    if(letter == ' ' || letter < 32 || letter > 126){
        return letter;
    }
    const int startOfUpperCase = 64;
    const int startOfLowerCase = 96;
    const int totalPossibleLetters = 26;

    const int startOfAllDec = 32;
    const int totalPossibleValues = 126;
    if (isUpperCase(letter)) {
        return (char) ((((letter + shift) - startOfUpperCase) % totalPossibleLetters) + startOfUpperCase);
    } else if (isLowerCase(letter)) {
        return (char) ((((letter + shift) - startOfLowerCase) % totalPossibleLetters) + startOfLowerCase);
    }

    return (char) ((((letter + shift) - startOfAllDec) % totalPossibleValues) + startOfAllDec);
}
//82
/**
 * @param letter this is the letter to be shifted.
 * @param shift this is the count of how many places over to shift letter.
 * @return the char in its shifted form. i.e. if letter 'a' is given with a shift of 3 then the result will be letter 'd'
 */
char Secret::shifter(char letter, char shift) {
    if(letter == ' ' || letter < 32 || letter > 126){
        return letter;
    }
    const int totalPossibleLetters = 26;
    const int totalPossibleValues = 126;

    if (isUpperCase(letter)) {
        shift = (char) toupper(shift);

        return (char) ((letter + shift - 2 * 'A') % totalPossibleLetters + 'A');
    } else if (isLowerCase(letter)) {
        shift = (char) tolower(shift);

        return (char) ((letter + shift - 2 * 'a') % totalPossibleLetters + 'a');
    }

    return (char) (((letter + shift - 2 * ' ') % totalPossibleValues) + ' ');
}

/*
 * Check to see if a char is upper case or not
 * Returns a bool
 */
bool Secret::isUpperCase(char letter) {
    return (letter >= 'A') && (letter <= 'Z');
}

/*
 * Check to see if a char is upper case or not
 * Returns a bool
 */
bool Secret::isLowerCase(char letter) {
    return (letter >= 'a') && (letter <= 'z');
}