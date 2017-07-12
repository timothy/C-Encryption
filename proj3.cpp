#include <iostream>
#include <string>
#include <sstream>
#include "secret.hpp"





int main() {

	char a = (char) ('V' + 'H' - 2 * 'A') % 26 + 'A';


	std::cout << (char) ('V' + 'H' - 2 * 'A') % 26 + 'A' << std::endl;

	std::cout << a << std::endl;

	Caesar c("Caesar msg");// this works checked it with http://www.braingle.com/brainteasers/codes/caesar.php
	Vigenere v("Vigenere msg");// This is very close but still has some edge cases that are off... Tested with http://www.cs.du.edu/~snarayan/crypt/vigenere.html

	c.display();
	c.encrypt("5");
	c.display();
	std::cout << std::endl;

	v.display();
	v.encrypt("Hello");
	v.display();
	//c.display();
	//c.decrypt("THISISTHEKEY"); Not finished yet...
	//c.display();


	/*

	Autokey a("Autokey msg");

	c.display();
	c.encrypt("THISISTHEKEY");
	c.display();
	c.decrypt("THISISTHEKEY");
	c.display();
	*/
	// v.display();
	// v.encrypt("THISISTHEKEY");

	// a.display();
	// a.encrypt("THISISTHEKEY");

	// Secret *sp[] = {&c, &v, &a};
	// for (Secret * s : sp) {
	// 	s->display();
	// 	// s->encrypt("KEY");
	// 	// s->display();
	// 	// s->decrypt("KEY");
	// }
}