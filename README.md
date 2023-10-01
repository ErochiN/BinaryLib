# Binary (RU)
## Описание:
Класс Binary представляет собой инструмент для работы с двоичными числами. Он содержит различные операторы, которые позволяют выполнять операции сложения, вычитания, умножения и деления с двоичными числами.

### _Члены класса_:  

### 1. Приватные переменные:
    - decimalSystem - хранит числа в десятичной системе;
    - binarySystem - хранит числа в двоичной системе.

### 2. Приватная функция:
    - Bin(int number) - внутренний метод для перевода числа из десятичной системы в двоичную и сохранения результата в переменной binarySystem.

### 3. Публичные методы и операторы:
    - Binary() - конструктор по умолчанию, инициализирует значения decimalSystem и binarySystem нулем;
    
    - operator=(int number) - оператор присваивания значения типа int к Binary, устанавливает decimalSystem в значение числа и вызывает метод Bin() для обновления binarySystem;
    
    - operator=(const Binary& other) - оператор присваивания значения типа Binary к Binary, устанавливает decimalSystem и binarySystem в значения другого объекта Binary;
    
    - operator+(const Binary& other) - оператор сложения двух чисел типа Binary, создает временный объект temp и вычисляет значение суммы decimalSystem, затем вызывает метод Bin() для обновления binarySystem и возвращает временный объект temp;
    
    - operator+=(const Binary& other) - оператор сложения и присваивания двух чисел типа Binary, вычисляет сумму decimalSystem, обновляет binarySystem и возвращает ссылку на текущий объект *this;
    
    - operator-(const Binary& other) - оператор вычитания двух чисел типа Binary, создает временный объект temp и вычисляет значение разности decimalSystem, затем вызывает метод Bin() для обновления binarySystem и возвращает временный объект temp;
   
    - operator-=(const Binary& other) - оператор вычитания и присваивания двух чисел типа Binary, вычисляет разность decimalSystem, обновляет binarySystem и возвращает ссылку на текущий объект *this;
    
    - operator*(const Binary& other) - оператор умножения двух чисел типа Binary, создает временный объект temp и вычисляет значение произведения decimalSystem, затем вызывает метод Bin() для обновления binarySystem и возвращает временный объект temp;
    
    
    - operator*=(const Binary& other) - оператор умножения и присваивания двух чисел типа Binary, вычисляет произведение decimalSystem, обновляет binarySystem и возвращает ссылку на текущий объект *this;
    - operator/(const Binary& other) - оператор деления двух чисел типа Binary, создает временный объект temp и вычисляет значение частного decimalSystem, затем вызывает метод Bin() для обновления binarySystem и возвращает временный объект temp;
    
    - operator/=(const Binary& other) - оператор деления и присваивания двух чисел типа Binary, вычисляет частное decimalSystem, обновляет binarySystem и возвращает ссылку на текущий объект *this;
    
    - Show() - метод для вывода двоичного числа на экран. Если определен макрос debug, оператор выводит исходное число decimalSystem, затем выводит binarySystem.

## Использование:
### Чтобы использовать данный код, вам нужно следовать нескольким шагам:

#### 1. Создайте экземпляр класса Binary, например:
```
Binary number1;
Binary number2;
```

#### 2. Присвойте значения двоичным числам, используя оператор присваивания для типа int:
```
number1 = 10;  // Присвоить двоичному числу number1 значение 10
number2 = 5;   // Присвоить двоичному числу number2 значение 5
```

#### 3. Выполняйте операции с двоичными числами, используя перегруженные операторы:
```
Binary sum = number1 + number2;  // Сложить два числа и сохранить сумму в переменную sum
Binary difference = number1 - number2;  // Вычесть одно число из другого и сохранить разность в переменной difference
Binary product = number1 * number2;  // Умножить два числа и сохранить произведение в переменной product
Binary quotient = number1 / number2;  // Разделить одно число на другое и сохранить частное в переменной quotient
```

#### 4. Выводите результаты на экран, используя метод Show():
```
sum.Show();  // Вывести сумму на экран
difference.Show();  // Вывести разность на экран
product.Show();  // Вывести произведение на экран
quotient.Show();  // Вывести частное на экран
```

#### Вы также можете использовать операторы сложения, вычитания, умножения и деления с присваиванием для изменения значения двоичного числа в текущем объекте. Например:
```
number1 += number2;  // Сложить number2 с number1 и сохранить сумму в number1
number1 -= number2;  // Вычесть number2 из number1 и сохранить разность в number1
number1 *= number2;  // Умножить number1 на number2 и сохранить произведение в number1
number1 /= number2;  // Разделить number1 на number2 и сохранить частное в number1
```

**Обратите внимание, что код содержит макрос debug, который позволяет выводить исходное число decimalSystem (если определен) перед выводом двоичного числа binarySystem. Если вы хотите видеть это дополнительное значение, раскомментируйте строку**
```
//#define debug.
```

Чтобы использовать код, вставьте свой собственный код в функции main(), где необходимо создать экземпляры класса, присвоить им значения и выполнять операции с ними.


# Binary (EN)
## Description:
The Binary class is a tool for working with binary numbers. It contains various operators that allow you to perform addition, subtraction, multiplication and division operations on binary numbers.

### _Class Members_:

### 1. Private variables:
     - decimalSystem - stores numbers in the decimal system;
     - binarySystem - stores numbers in the binary system.

### 2. Private function:
     - Bin(int number) - internal method for converting a number from the decimal system to binary and storing the result in the binarySystem variable.

### 3. Public methods and operators:
     - Binary() - default constructor, initializes decimalSystem and binarySystem values to zero;
    
     - operator=(int number) - operator assigning a value of type int to Binary, sets decimalSystem to the value of a number and calls the Bin() method to update binarySystem;
    
     - operator=(const Binary& other) - operator assigning a value of type Binary to Binary, sets decimalSystem and binarySystem to the values of another Binary object;
    
     - operator+(const Binary& other) - operator for adding two numbers of type Binary, creates a temporary object temp and calculates the value of the sum decimalSystem, then calls the Bin() method to update binarySystem and returns a temporary object temp;
    
     - operator+=(const Binary& other) - operator of addition and assignment of two numbers of type Binary, calculates the sum of decimalSystem, updates binarySystem and returns a reference to the current *this object;
    
     - operator-(const Binary& other) - operator for subtracting two numbers of type Binary, creates a temporary temp object and calculates the value of the difference decimalSystem, then calls the Bin() method to update the binarySystem and returns a temporary temp object;
   
     - operator-=(const Binary& other) - operator of subtraction and assignment of two numbers of type Binary, calculates the difference decimalSystem, updates binarySystem and returns a reference to the current *this object;
    
     - operator*(const Binary& other) - operator for multiplying two numbers of type Binary, creates a temporary temp object and calculates the value of the product decimalSystem, then calls the Bin() method to update the binarySystem and returns a temporary temp object;
    
    
     - operator*=(const Binary& other) - operator of multiplication and assignment of two numbers of type Binary, calculates the product decimalSystem, updates binarySystem and returns a reference to the current *this object;
     - operator/(const Binary& other) - operator for dividing two numbers of type Binary, creates a temporary temp object and calculates the value of the private decimalSystem, then calls the Bin() method to update the binarySystem and returns a temporary temp object;
    
     - operator/=(const Binary& other) - operator of division and assignment of two numbers of type Binary, calculates the quotient of decimalSystem, updates binarySystem and returns a reference to the current *this object;
    
     - Show() - method for displaying a binary number on the screen. If the debug macro is defined, the statement outputs the initial number decimalSystem, then outputs binarySystem.

## Usage:
### To use this code, you need to follow a few steps:

#### 1. Create an instance of the Binary class, for example:
```
Binary number1;
Binary number2;
```

#### 2. Assign values to binary numbers using the int assignment operator:
```
number1 = 10; // Set the binary number number1 to 10
number2 = 5; // Set binary number number2 to 5
```

#### 3. Perform operations on binary numbers using overloaded operators:
```
Binary sum = number1 + number2; // Add two numbers and store the sum in the sum variable
Binary difference = number1 - number2; // Subtract one number from another and store the difference in the difference variable
Binary product = number1 * number2; // Multiply two numbers and store the product in the product variable
Binary quote = number1 / number2; // Divide one number by another and store the quotient in the quotient variable
```

#### 4. Display the results using the Show() method:
```
sum.Show(); // Display the amount on the screen
difference.Show(); // Print the difference on screen
product.Show(); // Display the work on screen
quotation.Show(); // Display the quotient on screen
```

#### You can also use the addition, subtraction, multiplication, and division operators with assignment to change the value of a binary number in the current object. For example:
```
number1 += number2; //Add number2 with number1 and store the sum in number1
number1 -= number2; // Subtract number2 from number1 and store the difference in number1
number1 *= number2; // Multiply number1 by number2 and store the product in number1
number1 /= number2; // Divide number1 by number2 and store the quotient in number1
```

**Note that the code contains a debug macro that allows you to print the original decimalSystem number (if defined) before printing the binarySystem number. If you want to see this additional value, uncomment the line**
```
//#define debug.
```
