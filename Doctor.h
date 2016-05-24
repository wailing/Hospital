//
// Created by Anaïs Ha on 24/05/2016.
//

#ifndef HOSPITALMANAGEMENT1_DOCTOR_H
#define HOSPITALMANAGEMENT1_DOCTOR_H

#include <string>
#include "Users.h"

class Doctor: public Users {
public:


    Doctor(const std::string &pseudo, const std::string &name, const std::string &password, const std::string &address, const std::string &email, int age, const std::string &speciality) : Users(pseudo, name, password, address, email, age), speciality(speciality) { }

    //~Doctor();
    /**
     * @param string lastname
     * @param string firstname
     */
    void ModifyDoctorDetails(std::string lastname, std::string firstname);


private:
    std::string speciality;
};

#endif //HOSPITALMANAGEMENT1_DOCTOR_H
