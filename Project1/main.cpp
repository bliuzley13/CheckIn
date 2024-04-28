// #include <QApplication>
// #include <QPushButton>
// #include "person.h"

// int main(int argc, char **argv)
// {

//     // Person myPerson("Ethan Hom", 20, "San Francisco", 'M', "Me");
//     PERSON myPerson;

//     myPerson.setName("Ethan Hom");
//     myPerson.setLocation("San Francisco");
//     myPerson.setRelated("Me");


//     QApplication app (argc, argv);

//     QPushButton button (myPerson.getName());
//     button.show();


//     return app.exec();

// }




// #include <QApplication>
// #include <QPushButton>
// #include "person.h"

// int main(int argc, char **argv)
// {
//     PERSON myPerson;

//     myPerson.setName("Ethan Hom");
//     myPerson.setLocation("San Francisco");
//     myPerson.setRelated("Me");

//     QApplication app (argc, argv);

//     QPushButton button1 (myPerson.getName());
//     QPushButton button2 (myPerson.getLocation(), &button1);
//     QPushButton button3 (myPerson.getRelated(), &button2);

//     button1.show();

//     return app.exec();
// }



// #include <QApplication>
// #include <QPushButton>
// #include "person.h"

// int main(int argc, char **argv)
// {
//     QApplication app (argc, argv);

//     PERSON myPerson;

//     myPerson.setName("Ethan Hom");
//     myPerson.setLocation("San Francisco");
//     myPerson.setRelated("Me");

//     QWidget window;
//     window.setFixedSize(1280, 720);

//     QPushButton *button1 = new QPushButton(myPerson.getName(), &window);
//     button1->setGeometry(0, 260, 200, 100);

//     QPushButton *button2 = new QPushButton(myPerson.getLocation(), &window);
//     button2->setGeometry(210, 260, 200, 100);

//     QPushButton *button3 = new QPushButton(myPerson.getRelated(), &window);
//     button3->setGeometry(420, 260, 200, 100);

//     window.show();
//     return app.exec();
// }


#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QInputDialog>
#include "person.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    PERSON myPerson;

    // Use QInputDialog to get user input
    bool ok;
    QString name = QInputDialog::getText(nullptr, "Input", "Enter your name:", QLineEdit::Normal, "", &ok);
    if (ok && !name.isEmpty()) {
        myPerson.setName(name);
    }

    QString location = QInputDialog::getText(nullptr, "Input", "Enter your location:", QLineEdit::Normal, "", &ok);
    if (ok && !location.isEmpty()) {
        myPerson.setLocation(location);
    }

    QString related = QInputDialog::getText(nullptr, "Input", "Enter your relationship:", QLineEdit::Normal, "", &ok);
    if (ok && !related.isEmpty()) {
        myPerson.setRelated(related);
    }

    QWidget window;
    window.setFixedSize(1280, 720);

    QPushButton *button1 = new QPushButton(myPerson.getName(), &window);
    button1->setGeometry(0, 260, 200, 100);

    QPushButton *button2 = new QPushButton(myPerson.getLocation(), &window);
    button2->setGeometry(210, 260, 200, 100);

    QPushButton *button3 = new QPushButton(myPerson.getRelated(), &window);
    button3->setGeometry(420, 260, 200, 100);

    window.show();
    return app.exec();
}
