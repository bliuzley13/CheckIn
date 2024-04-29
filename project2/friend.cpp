#include "friend.h"
#include <QString>

Friend::Friend(const QString& name, const QString& location, const QString& time)
    : Person(name, location, time, "Friend") {
    setName(name);
    setLocation(location);
    setTime(time);
    setRelation("Friend");
}
