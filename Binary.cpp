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
    Binary& operator + (const Binary& other)
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
    Binary& operator - (const Binary& other)
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
    Binary& operator * (const Binary& other)
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
    Binary& operator / (const Binary& other)
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

    //Вывод на экран бинарных чисел
    void Show()
    {
#ifdef debug
        std::cout << decimalSystem << std::endl;
#endif;
        std::cout << binarySystem << std::endl;
    }



};

int main()
{
    

    return 0;
}