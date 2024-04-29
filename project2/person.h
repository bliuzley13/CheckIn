#ifndef PERSON_H
#define PERSON_H

#include <QString>

class Person {
public:

    Person(){
        name = "Generic Name";
        location = "CA";
        time = "PST";
        relation = "Family/Friend";
    }

    Person(const QString& name, const QString& location, const QString& time, const QString& relation);
    virtual ~Person();

    QString getName() const;
    QString getLocation() const;
    QString getTime() const;
    QString getRelation() const;

    void setName(const QString& name);
    void setLocation(const QString& location);
    void setTime(const QString& time);
    void setRelation(const QString& relation);


    void response() {
        myResponse = "";
    }

private:
    QString name;
    QString location;
    QString time;
    QString relation;
    QString myResponse;
};

#endif
