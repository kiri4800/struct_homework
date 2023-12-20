//
// Created by k_pry on 15.12.2023.
//

#ifndef HTLM_GOV_NUMBER_H
#define HTLM_GOV_NUMBER_H
#include <iostream>

struct gov_number{
private:
    int reg;
    char* c = new char[7];
public:
    void print(){
        std::cout << c << " " << reg;
    }
    char *getC() const {
        return c;
    }
    int getReg() const {
        return reg;
    }

    void setReg(int reg) {
        gov_number::reg = reg;
    }

    void setC(char *c) {
        gov_number::c = c;
    }

};
#endif //HTLM_GOV_NUMBER_H
