#pragma once

#include <algorithm>
#include "person.h"
#include "family.h"
#include "friend.h"

void sortPeople(std::vector<Person*>& people) {
    std::sort(people.begin(), people.end(), [](const Person* lhs, const Person* rhs) {
        const Family* lhsFamily = dynamic_cast<const Family*>(lhs);
        const Family* rhsFamily = dynamic_cast<const Family*>(rhs);
        const Friend* lhsFriend = dynamic_cast<const Friend*>(lhs);
        const Friend* rhsFriend = dynamic_cast<const Friend*>(rhs);

        if (lhsFamily && !rhsFamily) return true;
        if (!lhsFamily && rhsFamily) return false;
        if (lhsFriend && !rhsFriend) return lhsFamily == nullptr;
        if (!lhsFriend && rhsFriend) return rhsFamily != nullptr;

        return lhs->getTime() < rhs->getTime();
    });
}
