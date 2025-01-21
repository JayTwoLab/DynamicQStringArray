## `DynamicQStringArray` : QString 동적 2차원 배열 클래스

> [English](README.md) , [Korean](README.ko.md)

---

### 클래스 설명: `DynamicQStringArray`
이 클래스는 `QString` 타입을 요소로 하는 2차원 배열을 동적으로 관리하는 기능을 제공합니다.

#### 네임스페이스:
- **j2::TwoDimensions**: 해당 클래스가 포함된 네임스페이스로, 클래스의 범위를 지정합니다.

#### 주요 멤버:
1. **멤버 변수**
   - `QVector<QVector<QString>> array`: 2차원 배열을 저장하는 `QVector` 컨테이너.

2. **생성자 및 소멸자**
   - 별도로 정의되지 않았으나, `QVector`의 기본 동작에 따라 초기화됩니다.

3. **멤버 함수**
   - **`resize(int rows, int cols)`**  
     배열의 행(row)과 열(column)의 크기를 조정합니다.
     ```cpp
     array.resize(rows);
     for (int i = 0; i < rows; ++i) {
         array[i].resize(cols);
     }
     ```

   - **`setValue(int row, int col, const QString& value)`**  
     특정 위치에 값을 설정합니다.  
     - 유효하지 않은 인덱스에 접근하면 경고 메시지를 출력합니다.

   - **`getValue(int row, int col) const`**  
     특정 위치의 값을 반환합니다.  
     - 유효하지 않은 인덱스에 접근 시, 경고를 출력하고 빈 `QString`을 반환합니다.

   - **`printArray() const`**  
     배열의 모든 값을 출력합니다.  
     - 비어 있는 값은 공백 문자열로 표시됩니다.
     ```cpp
     qDebug() << "Value at (" << i << "," << j << "):" << (value.isEmpty() ? "" : value);
     ```

---

### 주요 특징:
- **동적 크기 조정**: `resize()` 함수로 배열의 크기를 유연하게 조정할 수 있습니다.
- **안전한 접근**: 범위를 벗어나는 접근에 대해 경고를 출력합니다.
- **디버깅 지원**: `qDebug()`를 사용해 배열의 값을 출력하여 디버깅을 도와줍니다.

### 사용 예시:
이 클래스를 사용하면 2차원 배열을 다음과 같이 관리할 수 있습니다.
```cpp
j2::TwoDimensions::DynamicQStringArray myArray;
myArray.resize(3, 3);
myArray.setValue(0, 0, "Hello");
myArray.setValue(1, 1, "World");
qDebug() << myArray.getValue(0, 0); // "Hello"
myArray.printArray();
```

### 작성자 정보:
- **작성자**: j2doll  
- **GitHub**: [j2doll](https://github.com/j2doll), [JayTwo](https://github.com/JayTwo)  
- **라이선스**: MIT License  

