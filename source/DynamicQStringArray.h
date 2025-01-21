#ifndef DYNAMICQSTRINGARRAY_H
#define DYNAMICQSTRINGARRAY_H

#include <QtGlobal>
#include <QVector>
#include <QString>
#include <QDebug>

//
// Two-dimensional array class of QString
//
// made by j2doll (github)
//   https://github.com/j2doll
//   https://github.com/JayTwo
//
// MIT License.
//

namespace j2 {
namespace TwoDimensions {

// Two-dimensional array class
class DynamicQStringArray {
private:
    QVector<QVector<QString>> array;

public:
    // Resizing an dynamic array
    void resize(int rows, int cols) {
        array.resize(rows);
        for (int i = 0; i < rows; ++i) {
            array[i].resize(cols);
        }
    }

    // Set value for (row, color).
    void setValue(int row, int col, const QString& value) {
        if (row >= 0 && row < array.size() && col >= 0 && col < array[row].size()) {
            array[row][col] = value;
        } else {
            qWarning() << "Index out of bounds";
        }
    }

    // Get values of (row, col).
    QString getValue(int row, int col) const {
        if (row >= 0 && row < array.size() && col >= 0 && col < array[row].size()) {
            return array[row][col];
        } else {
            qWarning() << "Index out of bounds";
            return QString();
        }
    }

    // Print all values of the array
    void printArray() const {
        for (int i = 0; i < array.size(); ++i) {
            for (int j = 0; j < array[i].size(); ++j) {
                QString value = array[i][j];
                qDebug() << "Value at (" << i << "," << j << "):"
                         << (value.isEmpty() ? "" : value);
            }
        }
    }
};

} // End of namespace TwoDimensions
} // End of namespace j2

#endif // DYNAMICQSTRINGARRAY_H
