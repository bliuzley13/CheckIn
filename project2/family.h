#ifndef FAMILY_H
#define FAMILY_H

#include "person.h"

class Family : public Person {
public:

    QString myResponse;

    Family(const QString& name, const QString& location, const QString& time);

    ~Family(){}

    void response() {
        myResponse = "Don't forget to call!";
    }

};

#endif
