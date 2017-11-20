#include "Sygnal.hpp"
#include <iostream>
#include <string>

Sygnal::Sygnal()
{

}
void Sygnal::dodajProbke(const Probka& p)
{
    probki.push_back(p);

}
int Sygnal::iloscProbek() const
{
    return probki.size();

}
Probka& Sygnal::operator[](int i)
{
    return probki[i];
}
const Probka& Sygnal::operator[](int i) const
{
    return probki[i];
}
double Sygnal::x(double t)
{
    int pi=0;
    for (int i=0;i<probki.size();i++){
        if(operator[i].t<t){
            else{
                cout<<
            }
        }
    }
}
