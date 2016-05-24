//
// Created by Anaïs Ha on 24/05/2016.
//

#ifndef HOSPITALMANAGEMENT1_SCHEDULING_H
#define HOSPITALMANAGEMENT1_SCHEDULING_H

#include <string>

class Scheduling {
public:
    Scheduling();
    ~Scheduling();
    /**
     * @param string doctorname
     * @param string patientname
     * @param string date
     */
    void DisplayPlanning(std::string doctorname, std::string patientname, std::string date);
private:
    std::string PatientName;
    std::string DoctorName;
    std::string date;
};


#endif //HOSPITALMANAGEMENT1_SCHEDULING_H
