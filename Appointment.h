//
// Created by Anaïs Ha on 24/05/2016.
//

#ifndef HOSPITALMANAGEMENT1_APPOINTMENT_H
#define HOSPITALMANAGEMENT1_APPOINTMENT_H

#include "Doctor.h"
#include "Patient.h"
#include <string>

class Appointment {
public:
    Appointment();
    ~Appointment();
    /**
     * @param Doctor doctor
     * @param Patient patient
     */
    bool FixAppointment(Doctor *doctor, Patient *patient);

    /**
     * @param Doctor doctor
     * @param Patient patient
     */
    void SeeAppointment(Doctor *doctor, Patient *patient);
private:
    std::string date;
    bool isAnEmergency;
    Doctor *doctor;
    Patient *patient;
    std::string medicalreport;
    int cost;
};

#endif //HOSPITALMANAGEMENT1_APPOINTMENT_H
