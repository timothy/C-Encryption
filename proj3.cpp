#include <iostream>
#include <string>
#include "secret.hpp"





int main() {


	Caesar c("Caesar msg");
	Vigenere v("Vigenere msg");
	Autokey a("Autokey msg");

	c.display();
	c.encrypt("THISISTHEKEY");
	c.display();
	c.decrypt("THISISTHEKEY");
	c.display();
	
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
