//
// Created by Anaïs Ha on 24/05/2016.
//

#ifndef HOSPITALMANAGEMENT1_USERS_H
#define HOSPITALMANAGEMENT1_USERS_H


#include <string>

class Users {
public:

    Users(const std::string &pseudo, const std::string &name, const std::string &password, const std::string &address, const std::string &email, int age) : username(username), name(name), password(password), address(address), email(email), age(age) { }

    void userRegister();

    const std::string &getUsername() const {
        return username;
    }

    const std::string &getPassword() const {
        return password;
    }

    const std::string &getAddress() const {
        return address;
    }

    const std::string &getName() const {
        return name;
    }

    const std::string &getEmail() const {
        return email;
    }

    int getAge() const {
        return age;
    }

private:
    std::string username;
    std::string password;
    std::string name;
    std::string address;
    std::string email;
    int age;
};



#endif //HOSPITALMANAGEMENT1_USERS_H
