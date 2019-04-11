// PoliceOfficer.h

#pragma once

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

#include"ParkedCar.h"
#include"ParkingMeter.h"
#include"ParkingTicket.h"

/*! \class PoliceOfficer
    \brief  Class to store information about an officer's name and badgeNumber.

*/
class PoliceOfficer
{
private:

    string officerName; /**< stores the officer's name */
    int badgeNumber; /**< stores the officer's badgeNumber */

public:
    PoliceOfficer(); // Default Constructor
    //! PolicOfficer Constructor
    /*!
     * Constructor to create new policeOfficer.
     * \param name of the officer
     * \param abadgeNumber of the officer
     * */
    PoliceOfficer(string aOfficerName, int aBadgeNumber); // Parameter Constructor

    // Mutators
    void setOfficerName(string aOfficerName); /**< sets the officer's name */
    void setBadgeNumber(int aBadgeNumber); /**< sets the officer's badgeNumber */

    // Accessors
    string getOfficerName() const; /**< retrieves the officer's name */
    int getBadgeNumber() const; /**< retrieves the officer's badgeNumber */

    bool patrol(double purchasedTime, double parkedTime); /**< determines whether or not a car is illegaly parked */

};

