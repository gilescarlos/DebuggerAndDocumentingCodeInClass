
#pragma once

#include<iostream>

using namespace std;

/*! \class ParkedCar
    \brief  Class to store information about a car's make, model, color, licenseNumber, and minutesParked.

*/

class ParkedCar
{
private:

    string make; /**< stores the make */
    string model; /**< stores the model */
    string color; /**< stores the color */
    string licenseNumber; /**< stores the license number */
    int minutesParked; /**< stores the number of minutes parked */

public:
    ParkedCar();
    //! ParkedCar Constructor
    /*!
     * Constructor to create new car.
     * \param make of the car
     * \param model of the car
     * \param color of the car
     * \param licenseNumber of the car
     * \param minutes parked by the car
     * */
    ParkedCar(string make, string model, string color, string licenseNumber, int minutes);

    // Mutators
    void setMake(string make); /**< sets make */
    void setModel(string model); /**< sets model */
    void setColor(string color); /**< sets color */
    void setLicenseNumber(string licenseNumber); /**< sets the license number */
    void setMinutesParked(int minutes); /**< sets the number of minutes parked */

    // Accessor
    string getMake() const; /**< retrieves the make */
    string getModel() const; /**< retrieves the model */
    string getColor() const; /**< retrieves the color */
    string getLicenseNumber() const; /**< retrieves the license number */
    int getMinutesParked() const; /**< retrieves the number of minutes parked */

    void print() const; /**< prints the information of the car */

};

