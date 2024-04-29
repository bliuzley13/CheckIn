#ifndef FRIEND_H
#define FRIEND_H

#include "person.h"

class Friend : public Person {
public:
    QString myResponse;

    Friend(const QString& name, const QString& location, const QString& time, const QString& relation);
    Friend(const QString& name, const QString& location, const QString& time);


    ~Friend(){}

    void response() {
        myResponse = "Don't forget to text!";
    }

};

#endif
