#pragma once
#ifndef RESERVATION_H
#define RESERVATION_H
#include <iostream>
#include <vector>

using namespace std;

class Reservation {
private:
    int reservationID;
    string customerName;
    string date;
    string time;
    bool indoor;
    bool outdoor;
    bool parking;
    bool kidsArea;
    bool privateRoom;

public:
    Reservation(int id, string name, string date, string time,
        bool indoor, bool outdoor, bool parking,
        bool kidsArea, bool privateRoom);

    // Getters
    int getReservationID();
    string getCustomerName();
    string getDate();
    string getTime();
    bool isIndoorTableNeeded();
    bool isOutdoorTableNeeded();
    bool isParkingNeeded();
    bool isKidsAreaNeeded();
    bool isPrivateRoomNeeded();
};

class ReservationManager {
private:
    vector<Reservation> reservations;

public:
    void addReservation(Reservation reservation);
    vector<Reservation> getReservations();
};

#endif 
