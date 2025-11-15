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

void Array::OutputFile(string path) {
    ofstream f(path);

    if (!f.is_open()) {
        cout << "Не удалось открыть файл для записи: " << path << endl;
        return;
    }

    for (const auto& value : mas) {
        f << value << ' ';
    }

    f.close();
}

void Array::ReadFile(string path) {
    ifstream f(path);

    if (!f.is_open()) {
        cout << "Не удалось открыть файл для чтения: " << path << endl;
        return;
    }

    int v;
    while (!f.eof())
    {
        f >> v;
        cout << v << endl;
        mas.push_back(v);
    }
    
    f.close();
}

void Array::Clear() {
    mas.clear();
}