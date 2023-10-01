#include <iostream>
#include <string>

//#define debug

class Binary
{
private:
    //Число в десятичной системе
    int tenNumber;

    //Число в двоичной системе
    int twoCode;

    //Перевод десятичного числа в двоичное
    void Bin(int number)
    {
        std::string binCode;

        while (number != 0)
        {
            binCode = std::to_string(number % 2) + binCode;
            number /= 2;
        }
        this->twoCode = std::stoi(binCode);
    }

public:
    //Конструктор по умолчанию
    Binary()
    {
        this->tenNumber = 0;
        this->twoCode = 0;
    }

    //Присваивание значения int
    Binary& operator = (int number)
    {
        this->tenNumber = number;
        Bin(number);
        return *this;
    }

    //Присваивания значения Binary
    Binary& operator = (const Binary& other)
    {
        this->tenNumber = other.tenNumber;
        this->twoCode = other.twoCode;
        return *this;
    }

    //Сложение бинарных чисел
    Binary& operator + (const Binary& other)
    {
        Binary temp;
        temp.tenNumber = this->tenNumber + other.tenNumber;
        temp.Bin(temp.tenNumber);
        return temp;
    }

    //Сложение и присваивание бинарных чисел
    Binary& operator += (const Binary& other)
    {
        int sum = this->tenNumber + other.tenNumber;
        this->tenNumber = sum;
        this->Bin(sum);
        return *this;
    }

    //Разность бинарных числел
    Binary& operator - (const Binary& other)
    {
        Binary temp;
        temp.tenNumber = this->tenNumber - other.tenNumber;
        temp.Bin(temp.tenNumber);
        return temp;
    }

    //Разность и присваивание бинарных чисел
    Binary& operator -= (const Binary& other)
    {
        int sum = this->tenNumber - other.tenNumber;
        this->tenNumber = sum;
        this->Bin(sum);
        return *this;
    }

    //Умножение бинарных чисел
    Binary& operator * (const Binary& other)
    {
        Binary temp;
        temp.tenNumber = this->tenNumber * other.tenNumber;
        temp.Bin(temp.tenNumber);
        return temp;
    }

    //Умножение и присваивание бинарных чисел
    Binary& operator *= (const Binary& other)
    {
        int sum = this->tenNumber * other.tenNumber;
        this->tenNumber = sum;
        this->Bin(sum);
        return *this;
    }

    //Деление бинарных чисел
    Binary& operator / (const Binary& other)
    {
        Binary temp;
        temp.tenNumber = this->tenNumber / other.tenNumber;
        temp.Bin(temp.tenNumber);
        return temp;
    }

    //Деление и присваивание бинарных чисел
    Binary& operator /= (const Binary& other)
    {
        int sum = this->tenNumber / other.tenNumber;
        this->tenNumber = sum;
        this->Bin(sum);
        return *this;
    }

    //Вывод на экран бинарных чисел
    void Show()
    {
#ifdef debug
        std::cout << tenNumber << std::endl;
#endif;
        std::cout << twoCode << std::endl;
    }



};

int main()
{
    

    return 0;
}