cmake_minimum_required(VERSION 3.5)
project(HospitalManagement1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Hospital.cpp Hospital.h Notification.cpp Notification.h Patient.cpp Patient.h Doctor.cpp Doctor.h Administrator.cpp Administrator.h Scheduling.cpp Scheduling.h Users.cpp Users.h Appointment.cpp Appointment.h)
add_executable(HospitalManagement1 ${SOURCE_FILES})