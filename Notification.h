//
// Created by Anaïs Ha on 24/05/2016.
//

#ifndef HOSPITALMANAGEMENT1_NOTIFICATION_H
#define HOSPITALMANAGEMENT1_NOTIFICATION_H

#include <string>

class Notification {
public:
    Notification(const std::string &date, const std::string &doctorName, const std::string &patientName) : date(date),
                                                                                            doctorName(doctorName),
                                                                                            patientName(patientName) { }

    ~Notification();

    /**
     * @param string date
     * @param string doctorName
     * @param string patientName
     */
    bool SendNotification(std::string date, std::string doctorName, std::string patientName);
private:
    std::string date;
    std::string doctorName;
    std::string patientName;
};


#endif //HOSPITALMANAGEMENT1_NOTIFICATION_H
