#include "family.h"
#include <QString>


Family::Family(const QString& name, const QString& location, const QString& time)
    : Person(name, location, time, "Family") {
    setName(name);
    setLocation(location);
    setTime(time);
    setRelation("Family");
}
