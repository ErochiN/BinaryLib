#include <iostream>
#include <string>

//#define debug

class Binary
{
private:
	//Число в десятичной системе
	int decimalSystem;

	//Число в двоичной системе
	int binarySystem;

	//Перевод десятичного числа в двоичное
	void Bin(int number)
	{
		std::string binCode;

		while (number != 0)
		{
			binCode = std::to_string(number % 2) + binCode;
			number /= 2;
		}
		this->binarySystem = std::stoi(binCode);
	}

public:
	//Конструктор по умолчанию
	Binary()
	{
		this->decimalSystem = 0;
		this->binarySystem = 0;
	}

	//Конструктор иницилизации
	Binary(int number)
	{
		this->decimalSystem = number;
		this->Bin(this->decimalSystem);
	}

	//Присваивание значения int
	Binary& operator = (int number)
	{
		this->decimalSystem = number;
		Bin(number);
		return *this;
	}

	//Присваивания значения Binary
	Binary& operator = (const Binary& other)
	{
		this->decimalSystem = other.decimalSystem;
		this->binarySystem = other.binarySystem;
		return *this;
	}

	//Сложение бинарных чисел
	Binary operator + (const Binary& other)
	{
		Binary temp;
		temp.decimalSystem = this->decimalSystem + other.decimalSystem;
		temp.Bin(temp.decimalSystem);
		return temp;
	}

	//Сложение и присваивание бинарных чисел
	Binary& operator += (const Binary& other)
	{
		int sum = this->decimalSystem + other.decimalSystem;
		this->decimalSystem = sum;
		this->Bin(sum);
		return *this;
	}

	//Разность бинарных числел
	Binary operator - (const Binary& other)
	{
		Binary temp;
		temp.decimalSystem = this->decimalSystem - other.decimalSystem;
		temp.Bin(temp.decimalSystem);
		return temp;
	}

	//Разность и присваивание бинарных чисел
	Binary& operator -= (const Binary& other)
	{
		int sum = this->decimalSystem - other.decimalSystem;
		this->decimalSystem = sum;
		this->Bin(sum);
		return *this;
	}

	//Умножение бинарных чисел
	Binary operator * (const Binary& other)
	{
		Binary temp;
		temp.decimalSystem = this->decimalSystem * other.decimalSystem;
		temp.Bin(temp.decimalSystem);
		return temp;
	}

	//Умножение и присваивание бинарных чисел
	Binary& operator *= (const Binary& other)
	{
		int sum = this->decimalSystem * other.decimalSystem;
		this->decimalSystem = sum;
		this->Bin(sum);
		return *this;
	}

	//Деление бинарных чисел
	Binary operator / (const Binary& other)
	{
		Binary temp;
		temp.decimalSystem = this->decimalSystem / other.decimalSystem;
		temp.Bin(temp.decimalSystem);
		return temp;
	}

	//Деление и присваивание бинарных чисел
	Binary& operator /= (const Binary& other)
	{
		int sum = this->decimalSystem / other.decimalSystem;
		this->decimalSystem = sum;
		this->Bin(sum);
		return *this;
	}

	//Сложение Бинарного числа с переменной
	template <typename T>
	Binary operator + (T number)
	{
		Binary temp;
		temp.decimalSystem = this->decimalSystem + number;
		temp.Bin(temp.decimalSystem);
		return temp;
	}

	//Разность Бинарного числа с переменной
	template <typename T>
	Binary operator - (T number)
	{
		Binary temp;
		temp.decimalSystem = this->decimalSystem - number;
		temp.Bin(temp.decimalSystem);
		return temp;
	}

	//Умножение Бинарного числа с переменной
	template <typename T>
	Binary operator * (T number)
	{
		Binary temp;
		temp.decimalSystem = this->decimalSystem * number;
		temp.Bin(temp.decimalSystem);
		return temp;
	}

	//Диление Бинарного числа с переменной
	template <typename T>
	Binary operator / (T number)
	{
		Binary temp;
		temp.decimalSystem = this->decimalSystem / number;
		temp.Bin(temp.decimalSystem);
		return temp;
	}

	//Сложение и пресваивание переиенной
	template <typename T>
	Binary& operator += (T number)
	{
		int sum = this->decimalSystem + number;
		this->decimalSystem = sum;
		this->Bin(sum);
		return *this;
	}

	//Разность и пресваивание переиенной
	template <typename T>
	Binary& operator -= (T number)
	{
		int sum = this->decimalSystem - number;
		this->decimalSystem = sum;
		this->Bin(sum);
		return *this;
	}

	//Сложение и пресваивание переиенной
	template <typename T>
	Binary& operator *= (T number)
	{
		int sum = this->decimalSystem * number;
		this->decimalSystem = sum;
		this->Bin(sum);
		return *this;
	}

	//Диление и пресваивание переиенной
	template <typename T>
	Binary& operator /= (T number)
	{
		int sum = this->decimalSystem / number;
		this->decimalSystem = sum;
		this->Bin(sum);
		return *this;
	}

	//Проверка равенства
	bool operator == (const Binary& other)
	{
		return this->decimalSystem == other.decimalSystem && this->binarySystem == other.binarySystem;
	}

	//Проверка неравенства
	bool operator != (const Binary& other)
	{
		return !(this->decimalSystem == other.decimalSystem && this->binarySystem == other.binarySystem);
	}

	//Проверка на меньше-равно
	bool operator <= (const Binary& other)
	{
		return this->decimalSystem <= other.decimalSystem;
	}

	//Проверка на больше-равно
	bool operator >= (const Binary& other)
	{
		return this->decimalSystem >= other.decimalSystem;
	}

	//Проверка на меньше
	bool operator < (const Binary& other)
	{
		return this->decimalSystem < other.decimalSystem;
	}

	//Проверка на больше
	bool operator > (const Binary& other)
	{
		return this->decimalSystem > other.decimalSystem;
	}

	//Вывод на экран бинарных чисел
	void Show()
	{
#ifdef debug
		std::cout << decimalSystem << " " << this << std::endl;
#endif;
		std::cout << binarySystem << std::endl;
	}



};

int main()
{
	Binary a = 20;
	Binary b = 20;

	bool i = a >= b;

	std::cout << i;

	return 0;
}