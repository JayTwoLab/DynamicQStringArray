## `DynamicQStringArray`: Dynamic 2D Array Class for QString

---

### Class Description: `DynamicQStringArray`
This class provides functionality for dynamically managing a 2D array with `QString` elements.

#### Namespace:
- **j2::TwoDimensions**: The namespace containing this class, defining its scope.

#### Key Members:
1. **Member Variables**
   - `QVector<QVector<QString>> array`: A `QVector` container storing the 2D array.

2. **Constructors and Destructors**
   - Not explicitly defined, relying on `QVector`'s default behavior for initialization.

3. **Member Functions**
   - **`resize(int rows, int cols)`**  
     Adjusts the size of the array's rows and columns.
     ```cpp
     array.resize(rows);
     for (int i = 0; i < rows; ++i) {
         array[i].resize(cols);
     }
     ```

   - **`setValue(int row, int col, const QString& value)`**  
     Sets a value at a specific position.  
     - Prints a warning message when accessing invalid indices.

   - **`getValue(int row, int col) const`**  
     Returns the value at a specific position.  
     - Prints a warning and returns an empty `QString` for invalid indices.

   - **`printArray() const`**  
     Outputs all values in the array.  
     - Empty values are displayed as blank strings.
     ```cpp
     qDebug() << "Value at (" << i << "," << j << "):" << (value.isEmpty() ? "" : value);
     ```

---

### Key Features:
- **Dynamic Resizing**: Allows flexible resizing of the array using the `resize()` function.
- **Safe Access**: Prints warnings for out-of-bound accesses.
- **Debugging Support**: Uses `qDebug()` to output array values, assisting in debugging.

### Example Usage:
This class allows managing a 2D array as follows:
```cpp
j2::TwoDimensions::DynamicQStringArray myArray;
myArray.resize(3, 3);
myArray.setValue(0, 0, "Hello");
myArray.setValue(1, 1, "World");
qDebug() << myArray.getValue(0, 0); // "Hello"
myArray.printArray();
```

### Author Information:
- **Author**: j2doll  
- **GitHub**: [j2doll](https://github.com/j2doll), [JayTwo](https://github.com/JayTwo)  
- **License**: MIT License  

