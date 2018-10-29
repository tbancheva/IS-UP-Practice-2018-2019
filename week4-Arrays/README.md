# Масиви

### Какво са масиви?

Масив в програмирането представлява **свързана последователност от елементи от един и същи тип**(int, char, double, etc). Полезни са когато искаме да запазим няколко елемента от един и същи тип, без да се налага да декларираме и инициализираме променлива за всеки един от тях.  
Под последователност се има предвид, че елементите са разположени един до друг в паметта. Можем визуално да представим един масив като контейнер, в който всеки елемент е отделна кутийка. Това е масив с име arr, съдържащ 6 елемента.  

<p align="center">
  <img src ="https://github.com/NickyMateev/IS-Introduction-to-Programming/raw/master/Week07/images/arrayRep.jpeg" width=400/>
</p>

Всеки елемент има специфичен *индекс*, отговарящ на мястото му в масива. Важно е да се запомни, че номерата на елементите **започват от 0** и продължават до n - 1, където n е броят на елементите в масива и **0 е индексът на първия елемент, 1 е индексът на втория и т.н., а n - 1 е индексът на последния елемент**.  

### Декларация и инициализация на масив

Масив се декларира по следния начин: 

```
type name[number_of_elements];
```

Където:

* type - типа на елементите в масива, може да е int, double, char, etc...
* name - името на променливата за масива
* number_of_elements - число >= 1, размера на масива, задължително трябва да е **конкретна стойност на число**, а не име на променлива, чиято стойност е незвестна! Компилаторът предварително трябва да знае колко памет да задели за масива.

Ето как бихме създали масив от цели числа с 6 елемента:
```c++
int arr[6]; // declarartion only
int arr[6] = {12 , 45 , 1, -4, 5, 9}; // declaration and initialization at the same time
```
<p align="center">
  <img src ="https://github.com/NickyMateev/IS-Introduction-to-Programming/raw/master/Week07/images/arrayRepInit.jpeg" width=400/>
</p>

Когато директо инициализираме масив със стойностите на елементите му, както на втория ред по-горе, не е необходимо изрично да определяме размера в квадратните скоби, защото броят на елементите е ясен. Тоест това също е валиден синтаксис: 
```c++
int arr[] = {12 , 45 , 1, -4, 5, 9}; // an array will be created(and initialized) with space for 6 elements
```
Ако обаче дадем стойности само на част от елементите:
```c++
int arr[6] = {12 , 45 , 1, -4};
```
Останалите ще бъдат автоматично приравнени на стойността по подразбиране за типа данни, в случая - 0.

<p align="center">
  <img src ="https://github.com/NickyMateev/IS-Introduction-to-Programming/raw/master/Week07/images/arrayRepPartlyInit.jpeg" width=400/>
</p>

Масив обаче не може да бъде инициализиран с повече елементи, отколкото е деклариран да държи. Например: 
```c++
int arr[6] = {12 , 45 , 1, -4, 5, 9, 123};
```
Това не е валидно, защото от една страна сме декларирали, че масивът може да съдържа само 6 елемента, а от друга се опитваме да сложим в него 7.

### Достъпване на елемент от масив
За да достъпим елемент от масив трябва да извикаме името на масива и в квадратните скоби да окажем индекса на елемента, който ни трябва.

<p align="center">
  <img src ="https://github.com/NickyMateev/IS-Introduction-to-Programming/raw/master/Week07/images/arrayRepIndex.jpeg" width=400/>
</p>

```c++
int arr[6] = {12 , 45 , 1, -4, 5, 9}; // creating & initializing the array
cout << arr[1] << endl; // accessing and printing the second element
```
Забележете, че достъпваме втория елемент с индекс 1, защото както споменахме по-горе **индексацията на елементите започва от 0.**  

Всеки елемент в масив е обикновена променлива, която просто достъпваме чрез индекса й в масива. Тоест можем да правим всичко каквото досега сме правили с нормални променливи.
```c++
arr[3] = 123; // setting the value of the 4th element to 123
int x = arr[3]; // setting the value of x to 123(because that's the value of the 4th element in the array)
arr[4] = 2 * x; // setting the value of the 5th element to 246

int y = 1;
cout << arr[4 + y] << endl; // accessing the 6th element and printing it
```
Инициализирането може да стане и по този начин: 
```c++
int arr[6];
arr[0] = 12;
arr[1] = 45;
arr[2] = 1;
arr[3] = -4;
arr[4] = 5;
arr[5] = 9;
```
Той най-често се използва когато не знаем конкретните стойности на елементите или не ги научаваме наведнъж.

### Пример:
Програмата по-долу показва как да съзададем масив с константен размер и да го напълним с елементи, а след това да ги принтираме удвоени. 
```c++
#include <iostream>
using namespace std;

const int SIZE = 100;

int main()
{
    int arr[SIZE];
    int numOfElements;
    cout << "How many elements do you want to enter: ";
    cin >> numOfElements;

    // loop which sets the initial values for the array:
    for(int i = 0; i < numOfElements; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    // loop which prints the doubled values of the elements in the array:
    for(int i = 0; i < numOfElements; i++)
    {
        int doubledElem = arr[i] * 2;
        cout << "Element #" << i << ": " << doubledElem << endl;
    }

    return 0;
}
```
Ето примерен вход и изход на програмата: 

```
How many elements do you want to enter: 
3
arr[0] = 1
arr[1] = 2
arr[2] = 3	

Element #0: 2
Element #1: 4
Element #2: 6
```

За по-подробно обяснение на масив както винаги -> [тюториал](https://www.youtube.com/watch?v=ZLk7qV9wEDw)