# Задачи

## Масиви

**1.** Да се напише програма, която приема цяло полижително число(размера на масив) и елементите му, а след това ги изкарва на конзолата, подредени по големина, започващи от най-малкия.            
Примерен вход и изход на програмата:  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  *6, [2, 3, 1, 0, 1, 7] -> [ 0, 1, 1, 2, 3, 7]*    
 
## Матрици
**1.** Имате двумерен масив от числа, чиито стойности са въведени предварително. Да се отпечатат сумата на елементите на масива, както и средноаритметичното на тези числа.   
*Примерен вход на програмата:* 
``` 
1  2   3  4 
7  13  0  5
11  5  15 6
10  9  4  7 
``` 
*Примерен изход на програмата:* 
``` 
Sum of matrix elements: 102
Average  of matrix elements: 6.3
``` 

**2.** Имате матрица 6х5 от естествени числа, чиито стойности са въведени предварително. Да се напише програма, чрез която се извеждат елементите от матрицата с най-малка и най-голяма стойност.   
*Примерен вход на програмата:* 
``` 
48 72 13 14 15
21 22 53 24 75
31 57 33 34 35
41 95 43 44 45
59 52 53 54 55
61 69 63 64 65
``` 
*Примерен изход на програмата:* 
``` 
min:13 max:95
``` 

**3.** Имате квадратна матрица от естествени числа, чиито стойности се въвеждат от конзолата. Да се отпечатат диагоналите на матрицата.   
*Примерен вход на програмата:* 
``` 
1 4 6 3
5 9 7 2
4 8 1 9
2 3 4 5
``` 
*Примерен изход на програмата:* 
``` 
1 9 1 5
3 7 8 2
``` 

**4.** Да се напише програма, която намира сумата на числата под и над главния диагонал в матрица.   
*Примерен вход на програмата:* 
``` 
1  2  3
5  6  7
9 10 11
``` 
*Примерен изход на програмата:* 
``` 
Sum under diagonal: 24
Sum over diagonal: 12
```

**5.** Имате предварително въведени стойности на елементи в матрица. Да се напише програма, която извежда стойностите на елементите в матрицата след обръщането й на +90 градуса.   
*Примерен вход на програмата:* 
``` 
1  2  3  4
5  6  7  8
9  10 11 12
13 14 15 16
``` 
*Примерен изход на програмата:* 
``` 
13  9 5 1
14 10 6 2
15 11 7 3
16 12 8 4
``` 
## Бонус

**1.** На стандартния вход ще получите почти попълнено судоку, което може да бъде довършено като на всеки ход се намери ред, колона или квадратче 3 на 3, в което липсва точно едно число. Судокуто е зададено като матрица от 9 на 9 цифри, всяка от които е нула, ако квадратчето е неизвестно, или от 1 до 9 ако даденото поле е известно.    
*Примерен вход и изход на програмата:*  
``` 
5 3 4 6 7 8 9 1 2    ->   5 3 4 6 7 8 9 1 2
6 0 2 0 9 5 3 4 8         6 7 2 1 9 5 3 4 8
1 9 8 3 4 2 5 6 7         1 9 8 3 4 2 5 6 7
8 5 9 7 6 1 4 2 3         8 5 9 7 6 1 4 2 3
4 2 6 8 5 3 7 9 1         4 2 6 8 5 3 7 9 1
7 1 3 9 2 4 8 5 6         7 1 3 9 2 4 8 5 6
9 6 1 5 3 7 2 8 4         9 6 1 5 3 7 2 8 4
2 0 7 0 1 9 6 3 5         2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9         3 4 5 2 8 6 1 7 9  
``` 