#ifndef FRIEND_H
#define FRIEND_H

#include "person.h"

class Friend : public Person {
public:

    Friend(const QString& name, const QString& location, const QString& time, const QString& relation);
    Friend(const QString& name, const QString& location, const QString& time);


    ~Friend(){}


};

#endif
