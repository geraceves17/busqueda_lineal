#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include<iostream>
#include<iomanip>
using namespace std;

class Computadora
{
    string alm;
    string ram;
    string sisOp;
    string nombreEqui;
public:
    Computadora();
    Computadora(const string &alm, const string &ram, const string &sisOp, const string &nombreEqui);
    

    void setAlm(const string &e);
    string getAlm();
    void setRam(const string &e);
    string getRam();
    void setSisOp(const string &e);
    string getSisOp();
    void setNombreEqui(const string &e);
    string getNombreEqui();

    friend ostream& operator<<(ostream &out, const Computadora&p)
    {
        out<<left;
        out<<setw(8)<<p.alm;
        out<<setw(6)<<p.ram;
        out<<setw(10)<<p.sisOp;
        out<<setw(10)<<p.nombreEqui;
        out<<endl;
        
        return out;
    }

    bool operator==(const Computadora& p)
    {
        return nombreEqui == p.nombreEqui;
    }
    bool operator==(const Computadora& p) const
    {
        return nombreEqui == p.nombreEqui;
    }
};


#endif // COMPUTADORA_H
