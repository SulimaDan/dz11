//#include <iostream>
//using namespace std;
//
//bool isInArray(int* array, int size, int element) {
//    for (int i = 0; i < size; i++) {
//        if (array[i] == element) {
//            return true;
//        }
//    }
//    return false;
//}
//
//int main() {
//    int M, N;
//    cout << "Введіть розмір масиву A (M): ";
//    cin >> M;
//    cout << "Введіть розмір масиву B (N): ";
//    cin >> N;
//
//
//    int* A = new int[M];
//    int* B = new int[N];
//
//
//    cout << "Введіть елементи масиву A:\n";
//    for (int i = 0; i < M; i++) {
//        cin >> A[i];
//    }
//
//    cout << "Введіть елементи масиву B:\n";
//    for (int i = 0; i < N; i++) {
//        cin >> B[i];
//    }
//
// 
//    int* C = new int[M]; 
//    int sizeC = 0;
//
//
//    for (int i = 0; i < M; i++) {
//        if (!isInArray(B, N, A[i]) && !isInArray(C, sizeC, A[i])) {
//            C[sizeC++] = A[i];
//        }
//    }
//
//    cout << "Масив C (елементи A, яких немає в B):\n";
//    for (int i = 0; i < sizeC; i++) {
//        cout << C[i] << " ";
//    }
//
//
//    delete[] A;
//    delete[] B;
//    delete[] C;
//
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//bool isInArray(int* array, int size, int element) {
//    for (int i = 0; i < size; i++) {
//        if (array[i] == element) {
//            return true;
//        }
//    }
//    return false;
//}
//
//int main() {
//    int M, N;
//    cout << "Введіть розмір масиву A (M): ";
//    cin >> M;
//    cout << "Введіть розмір масиву B (N): ";
//    cin >> N;
//
//    int* A = new int[M];
//    int* B = new int[N];
//
//    cout << "Введіть елементи масиву A:\n";
//    for (int i = 0; i < M; i++) {
//        cin >> A[i];
//    }
//
//    cout << "Введіть елементи масиву B:\n";
//    for (int i = 0; i < N; i++) {
//        cin >> B[i];
//    }
//
//    int* C = new int[M + N];
//    int sizeC = 0;
//
//
//    for (int i = 0; i < M; i++) {
//        if (!isInArray(B, N, A[i]) && !isInArray(C, sizeC, A[i])) {
//            C[sizeC++] = A[i];
//        }
//    }
//
//
//    for (int i = 0; i < N; i++) {
//        if (!isInArray(A, M, B[i]) && !isInArray(C, sizeC, B[i])) {
//            C[sizeC++] = B[i];
//        }
//    }
//
//    cout << "Масив C (елементи, що не є спільними для A і B):\n";
//    for (int i = 0; i < sizeC; i++) {
//        cout << C[i] << " ";
//    }
//
//    delete[] A;
//    delete[] B;
//    delete[] C;
//
//    return 0;
//}
















//int* allocateArray(int size) {
//    return new int[size];
//}
//
//
//void initializeArray(int* array, int size) {
//    for (int i = 0; i < size; i++) {
//        cout << "Введіть елемент [" << i << "]: ";
//        cin >> array[i];
//    }
//}
//
//
//void printArray(int* array, int size) {
//    for (int i = 0; i < size; i++) {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//}
//
//
//void deleteArray(int* array) {
//    delete[] array;
//}
//
//
//int* addElement(int* array, int& size, int element) {
//    int* newArray = new int[size + 1];
//    for (int i = 0; i < size; i++) {
//        newArray[i] = array[i];
//    }
//    newArray[size] = element;
//    size++;
//    delete[] array;
//    return newArray;
//}
//
//
//int* insertElement(int* array, int& size, int element, int index) {
//    if (index < 0 || index > size) {
//        cout << "Невірний індекс!" << endl;
//        return array;
//    }
//
//    int* newArray = new int[size + 1];
//    for (int i = 0; i < index; i++) {
//        newArray[i] = array[i];
//    }
//    newArray[index] = element;
//    for (int i = index; i < size; i++) {
//        newArray[i + 1] = array[i];
//    }
//    size++;
//    delete[] array;
//    return newArray;
//}
//
//
//int* deleteElement(int* array, int& size, int index) {
//    if (index < 0 || index >= size) {
//        cout << "Невірний індекс!" << endl;
//        return array;
//    }
//
//    int* newArray = new int[size - 1];
//    for (int i = 0; i < index; i++) {
//        newArray[i] = array[i];
//    }
//    for (int i = index + 1; i < size; i++) {
//        newArray[i - 1] = array[i];
//    }
//    size--;
//    delete[] array;
//    return newArray;
//}






//#include <cmath>
//
//
//bool isPrime(int number) {
//    if (number < 2) return false;
//    for (int i = 2; i <= sqrt(number); i++) {
//        if (number % i == 0) return false;
//    }
//    return true;
//}
//
//int* removePrimes(int* array, int& size) {
//    int newSize = 0;
//    for (int i = 0; i < size; i++) {
//        if (!isPrime(array[i])) {
//            array[newSize++] = array[i];
//        }
//    }
//    int* newArray = new int[newSize];
//    for (int i = 0; i < newSize; i++) {
//        newArray[i] = array[i];
//    }
//    size = newSize;
//    delete[] array;
//    return newArray;
//}





//#include <iostream>
//using namespace std;
//
//void distributeElements(int* array, int size, int*& positives, int& posSize, int*& negatives, int& negSize, int*& zeros, int& zeroSize) {
//    posSize = negSize = zeroSize = 0;
//
//    for (int i = 0; i < size; i++) {
//        if (array[i] > 0) posSize++;
//        else if (array[i] < 0) negSize++;
//        else zeroSize++;
//    }
//
//    positives = new