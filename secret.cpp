#include <iostream>
#include <string>
#include "secret.hpp"



//----------------------------------------------------

void Caesar::encrypt(std::string key) {
	 	 int key_len = key.length();
	 	 int msg_len = message.length();
	 	 int ii=0;
	 	 // unsigned int c, ii=0, newchar;
 
  

	 	 for(int i=0; i<msg_len; i++){
	 	 	message[i] += key[ii];
	 	 	ii = (ii + 1) % key_len;
	 	 }


	} 

void Caesar::decrypt(std::string key) {
	 	 int key_len = key.length();
	 	 int msg_len = message.length();
	 	 int ii=0;
	 	 // unsigned int c, ii=0, newchar;
 
  

	 	 for(int i=0; i<msg_len; i++){
	 	 	message[i] -= key[i];
	 	 	ii = (ii + 1) % key_len;
	 	 }
	} 

	
//----------------------------------------------------

void Vigenere::encrypt(std::string key) {
		 std::string s = key;
	 	 int key_len = s.length();
	 	 unsigned int c, ii=0, newchar;
 
  	while ((c = getchar()) != EOF) {
	    newchar = c + s[ii];
	    s[ii] = c;   
		std::cout << newchar; 
  		ii = (ii + 1) % key_len;
  	 }

	} // End of Caesar Encrypt

void Vigenere::decrypt(std::string key) {
		std::string s = key;
	 	 int key_len = s.length();
	 	 unsigned int c, ii=0, newchar;
 
  	while ((c = getchar()) != EOF) {
	    newchar = c - s[ii];
	    s[ii] = c;   
		std::cout << newchar; 
  		ii = (ii + 1) % key_len;
  	 }
	}
//----------------------------------------------------

void Autokey::encrypt(std::string key) {
	int key_len = key.length();
	 	 int msg_len = message.length();
	 	 int ii=0;
	 	 // unsigned int c, ii=0, newchar;
 
  

	 	 for(int i=0; i<msg_len; i++){
	 	 	message[i] += key[ii];
	 	 	ii = (ii + 1) % key_len;
	 	 }

	} 

void Autokey::decrypt(std::string key) {
	int key_len = key.length();
	 	 int msg_len = message.length();
	 	 int ii=0;
	 	 // unsigned int c, ii=0, newchar;
 
  

	 	 for(int i=0; i<msg_len; i++){
	 	 	message[i] += key[ii];
	 	 	ii = (ii + 1) % key_len;
	 	 }
	}