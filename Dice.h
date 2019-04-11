//
// Created by Giles Pierre Carlos on 2019-03-11.
//

#ifndef GAMEOF21_DICE_H
#define GAMEOF21_DICE_H

class Dice {
private:
    int sides; /**< stores number of sides of the dice */
    int value; /**< stores the value of a roll */
public:
    //! Dice Constructor
    /*!
     * Constructor to create new dice.
     * \param number of sides of the dice, default is six
     * */
    Dice(int = 6);
    void roll(); /**< simulates a roll of dice */
    int getSides(); /**< gets the number of sides of the dice */
    int getValue(); /**< gets the value of a roll */
};

#endif //GAMEOF21_DICE_H
