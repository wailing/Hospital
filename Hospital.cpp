//
// Created by Anaïs Ha on 24/05/2016.
//

#include "Hospital.h"

using namespace std;



void Hospital::registerAdmin(string username, string pwd, string name, string address, string email, int age) {
    Administrator* administrator = new Administrator(username, pwd, name, address, email, age);
    getListAdmin().push_back(administrator);
    administrator = nullptr;
    delete administrator;
}

void Hospital::registerPatient(string username, string pwd, string name, string address, string email, int age, string function) {
    Patient* patient = new Patient(username, pwd, name, address, email, age, function);
    getListPatient().push_back(patient);
    patient = nullptr;
    delete patient;
}

void Hospital::registerDoctor(string username, string pwd, string name, string address, string email, int age, string speciality) {
    Doctor* doctor = new Doctor(username, pwd, name, address, email, age, speciality);
    getListDoctor().push_back(doctor);
    doctor = nullptr;
    delete doctor;
}


void Hospital::displayHospital() {
    cout <<"************ Hospital ************ \n\n";
    cout <<"************ List of Patient ************\n\n";
    if(getListPatient().size() == 0) {
        cout << "No Patient in this Hospital\n\n";
    }
    else {
        for (int i = 0; i <= getListPatient().size() - 1; i++) {
            cout << getListPatient()[i]->getName() << "\n\n";
        }
    }

    cout <<"************ List of Doctors ************\n\n";
    if(getListDoctor().size() == 0) {
        cout << "No Doctor in this Hospital\n\n";
    }
    else {
        for (int i = 0; i <= getListDoctor().size() - 1; i++) {
            cout << getListDoctor()[i]->getName() << "\n\n";
        }
    }

    cout <<"************ List of Administrators ************\n\n";
    if(getListAdmin().size() == 0) {
        cout << "No Administrator in this Hospital\n\n";
    }
    else {
        for (int i = 0; i <= getListAdmin().size() - 1; i++) {
            cout << getListAdmin()[i]->getName() << "\n\n";
        }
    }
    cout <<"************ Hospital ************ \n\n";
}


