#ifndef PERSON_H
#define PERSON_H

#include <QString>

class PERSON {
private:
    QString name;
    QString location;
    QString related;

public:
    void setName(const QString& name);
    void setLocation(const QString& location);
    void setRelated(const QString& related);

    QString getName() const;
    QString getLocation() const;
    QString getRelated() const;

    // void print() const;
};

#endif
