#ifndef CAR_H
#define CAR_H

#include <QString>

class Car
{
public:
    Car();
    ~Car();

    QString model;
    QString brand;
    int year;
    double trunkVolume;
    int numPassengers;
};


#endif // CAR_H
