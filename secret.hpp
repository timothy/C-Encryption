
// Project3 - base class
#ifndef SECRET_HPP
#define SECRET_HPP

class Secret {
protected:
	bool isEncrypted;
	std::string message;

public: 
	Secret(std::string s = "Generic Message", bool flag = false){
		message = s;
		isEncrypted = flag;
	}

	virtual void encrypt(std::string key) = 0; // Pure virtual method
	virtual void decrypt(std::string key) = 0; // Pure virtual method
	virtual ~Secret() {};
	void display();

}; // ----------- End of Secret Class -----------


class Caesar : public Secret {
public:
	Caesar(std::string s = "Caesar Message") : Secret(s) {} //Constructor

	void encrypt(std::string key);
	void decrypt(std::string key);
	
	void display() {
		std::cout << message << std::endl;
	}
	

}; // ----------- End of Caesar Class -----------



class Vigenere : public Secret {
public:
	Vigenere(std::string s = "Vigenere Message") : Secret(s) {} //Constructor

	void encrypt(std::string key);
	void decrypt(std::string key);

	void display() {
		std::cout << message << std::endl;
	}

}; // ----------- End of Vigenere Class -----------



class Autokey : public Secret {
public:
	Autokey(std::string s = "Autokey Message") : Secret(s) {} //Constructor

	void encrypt(std::string key);
	void decrypt(std::string key);

	void display() {
		std::cout << message << std::endl;
	}

}; // ----------- End of Autokey Class -----------



#endif


