#include "Array.h"

Array::Array() {
	mas = NULL;
	size = 0;
}
	
Array::Array(int _size)
{
	Initialize(_size);
}

Array::~Array()
{
	delete[] mas;
	size = 0;
}

void Array::Print()
{
	for (size_t i = 0; i < size; ++i) {
		cout << mas[i] << " ";
	}
	cout << endl;
}

int Array::Sum()
{
	int sum = 0;
	for (size_t i = 0; i < size; ++i) {
		sum += mas[i];
	}
	return sum;
}

double Array::Avg()
{
	return static_cast<double>(Sum()) / size;
}

void Array::Initialize(int _size) {
	if (mas != NULL) {
		delete[] mas;
	}

	srand(time(NULL));
	mas = new int[_size];
	for (size_t i = 0; i < _size; i++) {
		mas[i] = rand() % 20;
	}
	size = _size;
}

void Array::SetRandomValues(int _size) {
	Initialize(_size);
}

void Array::PrintCounts() {
	map<int, int> counts;
	for (int i = 0; i < size; ++i) {
		counts[mas[i]]++;
	}
	for (auto pair : counts) {
		cout << "Число " << pair.first << " встречается " << pair.second << " раз\n";
	}
}

/*В класс Array нужно добавить следующие методы:
1) подсчет среднего значения
2) перегенерация содержимого массива (возможно придется вынести цикл из конструктора с параметром в отдельный метод)
3) вывод количества вхождений в массив каждого из чисел, которые в нем находятся
4) подумать над тем, не проще ли будет использовать вместо поля с массивом vector<int>*/