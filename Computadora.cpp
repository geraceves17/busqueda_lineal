#include "Computadora.h"

Computadora::Computadora()
{

}

Computadora::Computadora(const string &alm, const string &ram, const string &sisOp, const string &nombreEqui)
{
    this->alm = alm;
    this->ram = ram;
    this->sisOp = sisOp;
    this->nombreEqui = nombreEqui;
}
void Computadora::setAlm(const string &e)
{
    alm = e;
}

string Computadora::getAlm()
{
    return alm;
}

void Computadora::setRam(const string &e)
{
    ram = e;
}

string Computadora::getRam()
{
    return ram;
}

void Computadora::setSisOp(const string &e)
{
    sisOp = e;
}

string Computadora::getSisOp()
{
    return sisOp;
}

void Computadora::setNombreEqui(const string &e)
{
    nombreEqui = e;
}

string Computadora::getNombreEqui()
{
    return nombreEqui;
}