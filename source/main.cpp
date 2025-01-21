#include <QCoreApplication>

#include "DynamicQStringArray.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Creating a 2D Dynamic String Array
    j2::TwoDimensions::DynamicQStringArray myArray;

    // Set the array's size
    myArray.resize(3, 3);

    // Set the value of (0, 1)
    myArray.setValue(0, 1, "World");

    // Get the value of (1,1)
    qDebug() << " (1,1) : " << myArray.getValue(1, 1);

    // Print all values of the array
    myArray.printArray();

    return 0;
}
