// ParkingMeter.h

#pragma once

#include<iostream>

using namespace std;

/*! \class ParkingMeter
    \brief  Class to simulate a parking meter displaying minutes purchased.

*/
class ParkingMeter {
private:

    int minutesPurchased; /**< minutes purchased to park */

public:
    ParkingMeter();
    //! ParkingMeter Constructor
    /*!
     * Constructor to create new parking meter.
     * \param aMinForParking number of minutes on the parking meter.
     * */
    ParkingMeter(double aMinForParking); // Parameter Constructor

    // Mutator
    void setMinutesPurchased(int minutes); /**< sets minutes purchased to park */

    // Accessor
    double getMinutesPurchased() const; /**< retrieves minutes purchased to park */
};



