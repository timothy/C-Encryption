
// Project3 - base class
#ifndef SECRET_HPP
#define SECRET_HPP

class Secret {
protected:
    bool isEncrypted;
    std::string message;

    char shifter(char, int);

    char shifter(char, char);

public:
    Secret(std::string s = "Generic Message", bool flag = false) {
        message = s;
        isEncrypted = flag;
    }

    virtual void encrypt(std::string key) = 0; // Pure virtual method
    virtual void decrypt(std::string key) = 0; // Pure virtual method
    virtual ~Secret() {};

    //I added display here and took it out of the other areas.
    void display() {
        std::cout << message << std::endl;
    }

    bool isUpperCase(char letter);

    bool isLowerCase(char letter);


}; // ----------- End of Secret Class -----------


class Caesar : public Secret {
public:
    Caesar(std::string s = "Caesar Message") : Secret(s) {} //Constructor

    void encrypt(std::string key) override;

    void decrypt(std::string key) override;

}; // ----------- End of Caesar Class -----------



class Vigenere : public Secret {
public:
    Vigenere(std::string s = "Vigenere Message") : Secret(s) {} //Constructor

    void encrypt(std::string key) override;

    void decrypt(std::string key) override;

}; // ----------- End of Vigenere Class -----------



class Autokey : public Secret {
public:
    Autokey(std::string s = "Autokey Message") : Secret(s) {} //Constructor

    void encrypt(std::string key) override;

    void decrypt(std::string key) override;

}; // ----------- End of Autokey Class -----------



#endif



