#include <QApplication>
#include <QInputDialog>
#include <QString>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QVBoxLayout>
#include <QTime>
#include <QTimeZone>
#include <QDateTime>
#include <QWidget>
#include "person.h"
#include <vector>
#include "family.h"
#include "friend.h"
#include "sorting.h"
#include "display.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    QVBoxLayout *layout = new QVBoxLayout(&window);

    QTableWidget *table = new QTableWidget(0, 4);
    QStringList headers{"Name", "Location", "Local Time", "Relation"};
    table->setHorizontalHeaderLabels(headers);
    layout->addWidget(table);

    std::vector<Person*> people;

    while (true) {
        QString name = QInputDialog::getText(&window, "Input", "Enter name:");
        if (name.isEmpty()) break;

        QString location = QInputDialog::getText(&window, "Input", "Enter timezone (NY: UTC-4, PST, CST):");
        if (location.isEmpty()) break;

        QString relation = QInputDialog::getText(&window, "Input", "Enter Family or Friend:");
        if (relation.isEmpty()) break;

        QTimeZone timeZone(location.toUtf8());
        QDateTime localTime = QDateTime::currentDateTime().toTimeZone(timeZone);

        if (relation == "Family"){
            Family* myFamily;
            myFamily = new Family(name, location, localTime.toString());
            people.push_back(myFamily);
        } else if (relation == "Friend"){
            Friend* myFriend;
            myFriend = new Friend(name, location, localTime.toString());
            people.push_back(myFriend);
        } else {
            Person* myPerson = new Person(name, location, localTime.toString(), relation);
            people.push_back(myPerson);
        }

    }

    sortPeople(people);
    display(people, table);

    window.setLayout(layout);
    window.resize(800, 500);
    window.show();

    return app.exec();
}
