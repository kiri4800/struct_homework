#include <iostream>
#include <cstring>
#include "Depo.h"
using namespace std;


int main() {
    int n,reg;
    char* c = new char[256];
    cin >> n;
    Depo depo(new gov_number[n],new char*[n],new int[n],new char*[n]);
    for(int i = 0; i < n;++i){
        cout << "print reg number of " << i << " bus" << endl;
        cin >> reg;
        cin.ignore();
        cout << "print gov number" << endl;
        cin.getline(c,256);
        depo.getGovNumbers()[i].setReg(reg);
        depo.getGovNumbers()[i].setC(c);
        cout << "print lastname of driver of bus" << endl;
        cin.getline(c,256);
        strcpy(depo.getLastNames()[i],c);
        cout << "print number of bus" << endl;
        cin >> reg;
        depo.getNumbersOfBuses()[i] = reg;
    }
    reg = -1;

}