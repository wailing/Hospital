//
// Created by Anaïs Ha on 24/05/2016.
//

#ifndef HOSPITALMANAGEMENT1_HOSPITAL_H
#define HOSPITALMANAGEMENT1_HOSPITAL_H


#include <string>
#include "Patient.h"
#include "Doctor.h"
#include "Administrator.h"
#include "Appointment.h"
#include <vector>

class Hospital {
public:

    Hospital(const std::string &name) : name(name) { }


    //~Hospital();
    std::vector<Patient*> listPatient;
    std::vector<Doctor*> listDoctor;
    std::vector<Administrator*> listAdmin;
    std::vector<Appointment*> listAppointment;

    void registerAdmin(std::string username, std::string pwd, std::string name, std::string address, std::string email, int age);

    void registerPatient(std::string username, std::string pwd, std::string name, std::string address, std::string email, int age, std::string function);

    void registerDoctor(std::string username, std::string pwd, std::string name, std::string address, std::string email, int age, std::string speciality);

    void displayHospital();


    std::vector<Patient *> &getListPatient()  {
        return listPatient;
    }

    std::vector<Administrator *> &getListAdmin()  {
        return listAdmin;
    }

    std::vector<Doctor *> &getListDoctor()  {
        return listDoctor;
    }

    std::vector<Appointment *> &getListAppointment()  {
        return listAppointment;
    }

    std::string &getName()  {
        return name;
    }

private:
    std::string name;
};


#endif //HOSPITALMANAGEMENT1_HOSPITAL_H
