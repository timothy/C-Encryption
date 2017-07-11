#include <iostream>
#include <string>
#include <sstream>
#include "secret.hpp"





int main() {

	char a = ((('V' + 'H') - (64*2)) % 26) + 64;
//	int numKey = std::stoi("13");

	std::cout << 'V' + 'H' << std::endl;

	std::cout << (char) (('V' + 'H') % 26) + 64 << std::endl;
	std::cout << 'V' + 'H' << std::endl;
	std::cout << 'V' + 'H' << std::endl;

	std::cout << a << std::endl;



	Caesar c("Caesar msg");// this works checked it with http://www.braingle.com/brainteasers/codes/caesar.php
	Vigenere v("Vigenere msg");// This does not work... Tested with http://www.cs.du.edu/~snarayan/crypt/vigenere.html

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