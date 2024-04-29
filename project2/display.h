#pragma once

#include <vector>
#include <QTableWidget>
#include <QTableWidgetItem>
#include "person.h"
#include "family.h"
#include "friend.h"


void display(const std::vector<Person*>& list, QTableWidget* table) {
    for (size_t i = 0; i < list.size(); ++i) {
        int row = table->rowCount();
        table->insertRow(row);
        table->setItem(row, 0, new QTableWidgetItem(list[i]->getName()));
        table->setItem(row, 1, new QTableWidgetItem(list[i]->getLocation()));
        table->setItem(row, 2, new QTableWidgetItem(list[i]->getTime()));
        table->setItem(row, 3, new QTableWidgetItem(list[i]->getRelation()));
    }
}

