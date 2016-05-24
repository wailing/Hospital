//
// Created by Anaïs Ha on 24/05/2016.
//

#ifndef HOSPITALMANAGEMENT1_PATIENT_H
#define HOSPITALMANAGEMENT1_PATIENT_H


#include <iostream>
#include "Users.h"

class Patient: public Users {
public:


    Patient(const std::string &pseudo, const std::string &name, const std::string &password, const std::string &adress,
            const std::string &email, int age, const std::string &function) : Users(pseudo, name, password, adress,
                                                                                    email, age), function(function) { }

    ~Patient();
    /**
     * @param string lastname
     * @param string firstname
     */
    void ModifyPatientDetails(std::string lastname, std::string firstname);

    /**
     * @param string username
     * @param string pwd
     * @param string name
     * @param string adress
     * @param string email
     * @param int age
     */
    void registerPatient(std::string username, std::string pwd, std::string name, std::string adress, std::string email, int age, std::string function);
    void displayPatientInfo();


    const std::string &getFunction() const {
        return function;
    }

private:
    std::string function;
};
#endif //HOSPITALMANAGEMENT1_PATIENT_H
