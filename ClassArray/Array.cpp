#include "Array.h"

Array::Array() {
    srand(static_cast<unsigned int>(time(NULL)));
}

Array::Array(int _size) {
    srand(static_cast<unsigned int>(time(NULL)));
    Initialize(_size);
}

Array::~Array() {}

void Array::Print() {
    for (size_t i = 0; i < mas.size(); ++i) {
        cout << mas[i] << "\t";
    }
    cout << endl;
}

int Array::Sum() {
    int sum = 0;
    for (size_t i = 0; i < mas.size(); ++i) {
        sum += mas[i];
    }
    return sum;
}

double Array::Avg() {
    if (mas.empty()) return 0;
    return static_cast<double>(Sum()) / mas.size();
}

void Array::Initialize(int _size) {
    mas.resize(_size);
    for (size_t i = 0; i < mas.size(); i++) {
        mas[i] = rand() % 20;
    }
}

void Array::SetRandomValues(int _size) {
    Initialize(_size);
}

void Array::PrintCounts() {
    map<int, int> counts;
    for (int num : mas) {
        counts[num]++;
    }
    for (const auto& pair : counts) {
        cout << "Число " << pair.first << " встречается " << pair.second << " раз\n";
    }
}

/*В класс Array нужно добавить следующие методы:
1) подсчет среднего значения
2) перегенерация содержимого массива (возможно придется вынести цикл из конструктора с параметром в отдельный метод)
3) вывод количества вхождений в массив каждого из чисел, которые в нем находятся
4) подумать над тем, не проще ли будет использовать вместо поля с массивом vector<int>*/