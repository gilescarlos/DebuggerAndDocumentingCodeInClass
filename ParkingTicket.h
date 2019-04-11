// ParkingTicket.h

#pragma once

#include<iostream>

using namespace std;

#include"ParkedCar.h"
#include"ParkingMeter.h"
#include"PoliceOfficer.h"
/*! \class ParkingTicket
    \brief  Class to display information as a parking ticket.

*/
class ParkingTicket
{
private:
    double fine; /**< stores the amount of the fine */
    int illegallyParkedHr; /**< stores how long a car has been illegaly parked */

public:
    ParkingTicket(); // Constructor
    //! ParkingTicket Constructor
    /*!
     * Constructor to create new parking ticket.
     * \param aFine of a car
     * */
    ParkingTicket(double aFine); // Parameter Constructor

    // Mutators
    void setFine(double aFine); /**< sets the cost of the fine */

    // Accessors
    double getFine() const; /**< retrieves the cost of the fine */

    // Print
    void print(ParkedCar aParkedCar, ParkingMeter aParkingMeter, PoliceOfficer aPoliceOfficer); /**< prints information of the ticket */

};
