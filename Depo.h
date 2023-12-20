//
// Created by k_pry on 15.12.2023.
//

#ifndef HTLM_DEPO_H
#define HTLM_DEPO_H
#include <iostream>
#include "gov_number.h"
struct Depo{
    gov_number* govNumbers = nullptr;
    char** lastNames = nullptr;
    int* numbers_of_buses = nullptr;
    char** current_street = nullptr;
public:
    Depo(gov_number* govNumbers,char** lastNames){
        this-> govNumbers  = govNumbers;
        this->lastNames = lastNames;
    };
    Depo(gov_number* govNumbers,char** lastNames,int* numbes_of_buses){
        this->govNumbers = govNumbers;
        this->lastNames = lastNames;
        this->numbers_of_buses = numbes_of_buses;
    };
    Depo(gov_number* govNumbers,char** lastNames,int* numbes_of_buses, char** current_street){
        this->govNumbers = govNumbers;
        this->lastNames = lastNames;
        this->numbers_of_buses = numbes_of_buses;
        Depo::current_street = current_street;
    }
    void setGovNumbers(gov_number *govNumbers) {
        Depo::govNumbers = govNumbers;
    }

    void setLastNames(char **lastNames) {
        Depo::lastNames = lastNames;
    }

    void setNumbersOfBuses(int *numbersOfBuses) {
        numbers_of_buses = numbersOfBuses;
    }


    gov_number *getGovNumbers() const {
        return govNumbers;
    }

    char **getLastNames() const {
        return lastNames;
    }

    int *getNumbersOfBuses() const {
        return numbers_of_buses;
    }

    char **getCurrentStreet() const {
        return current_street;
    }

    void setCurrentStreet(char **currentStreet) {
        current_street = currentStreet;
    }
};
#endif //HTLM_DEPO_H
