#ifndef FAMILY_H
#define FAMILY_H

#include "person.h"

class Family : public Person {
public:

    Family(const QString& name, const QString& location, const QString& time, const QString& relation);
    Family(const QString& name, const QString& location, const QString& time);

    ~Family(){}

};

#endif
