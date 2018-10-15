# Условен оператор

### The *if* statement:
Оценява булевия израз в скобите. Ако той е **true** ,се изпълнява кода в тялото на if-а. Ако е **false**, кодът в къдравите скоби се пропуска.

```c++
if(boolean_expression)
{
    // code that executes if boolean_expression is true
}

// code that executes no matter what the boolean_expression is
```

<p align="center">
  <img src ="https://cdn.programiz.com/sites/tutorial2program/files/working-if-statement-C%2B%2B.jpg" />
</p>


### The *if-else* statement:
Ако булевият израз е **true**, се изпълнява кода в тялото на if-а, а този в тялото на else-a се пропуска. Ако булевият израз е **false** кодът в тялото на if-а се пропуска, а този в тялото на else-a се изпълнява.
```c++
if(boolean_expression)
{
    // code that executes if boolean_expression is true
}
else
{
    // code that executes if boolean_expression is false
}
// code that executes no matter what the boolean_expression is
```
Или блокът след *if* или този след *else* ще се изпълни, но никога и двата.

<p align="center">
  <img src ="https://cdn.programiz.com/sites/tutorial2program/files/how-if-else-works-C%2B%2B.jpg" />
</p>

### The *if-else if-else* statement
Понякога може дасе наложи да проверяваме няколко условия. Тогава ползваме този тип statement:
```c++
if(boolean_expression1)
{
    // code that executes if boolean_expression1 is true
}
else if(boolean_expresssion2)
{
    // code that executes if boolean_expression2 is true, but boolean_expression1 is false
}
else if(boolean_expression3)
{
    // code that executes if boolean_expression3 is true, but both boolean_expression1 and boolean_expression2 are false
}
else
{
    // code that executes if all three boolean_expression1, boolean_expression2 and boolean_expression3 are false
}
```

### Вложени *if-else* statements
След като в един блок можем да пишем всякакъв код, то можем да напишем и друг условен оператор. If-else statement в тялото на друг
if-else statement се нарича **вложен**.
```c++
if (…) {
	 …
	 if (…) {
	 …
 	} 
	else …
} 
else {
	if (…) … 
	else {
		if (…) …
	 }
}
```
Възможно е да влагате if-ове и понякога е наложимо, но като цяло не се счита за добра практика да врагате повече от 3 if-а, защото доста намаляват 
четимостта и лесното следене на логиката на кода.  

Подробно обяснение за if-else statement-ите има и в ето [този](https://www.youtube.com/watch?v=jK83lln_T1k) тюториал.

### Скоби около булевия израз  
Ако тялото на if-а е един ред, то скобите могат да бъдат пропуснати.

```c++
if(boolean_expression1)
    // code that executes if boolean_expression1 is true
else 
    // code that executes if boolean_expression is false
```
Това е валиден синтаксис, горният код се компилира, но е препоръчително да се избягва, защото води до грешки. Например в горния код, ако се
добави още един statement и се забрави да се добавят и скобите, то кодът няма да работи така както се очаква. 

Друг проблем, свързан с липсата на къдрави скоби е например влагането на if-ове. Нека имаме следния код:  
```c++
if(boolean_expression1)
    if(boolean_expression2)
        ...
    else
        ...
//vs

if(boolean_expression1)
    if(boolean_expression2)
        ...
else
    ...
```
**Не можем да разчитаме на идентацията, за да влагаме if-ове**, както например е в други езици като Python. Ето в [тази](https://www.imperialviolet.org/2014/02/22/applebug.html) статия е обяснен бъг на Apple, причинен именно от липсата на къдрави скоби. Така че **maintainability-wise  винаги е по-добре да слагате скоби.** Ако изразът е достатъчно прост и може да се изпише на един ред без да се нарушава четимостта на кода просто използвайте тернарния оператор.

### Тернарен оператор *?:*
Тернарният оператор е по-кратък начин да напишем *if-else* statement.

```
  condition ? statement1 : statement2;
```

Ако **условието** е *true*, тогава ще се изпълни statement1. Ако **условието** е *false*, тогава ще се изпълни statement2.
Напълно еквивалентно е на писането на прост *if-else* statement:
```c++
if(condition)
{
    statement1
}
else
{
    statement2
}
```

Пример:
```c++
int main()
{
    	int x = 4;
    	if(x % 2 == 0){
		cout<< "x is an even number";
	}
	else{
		cout<< "x is an odd number";
	}
	
	x % 2 == 0 ? cout << "x is an even number" : cout << "x is an odd number"; // same result

    return 0;
}
```

### The *switch* statement:
If-else statement-ите са много удобни и готини, но представете си че трябва да напишете пограма, която
според възрастта на едно дете изписва в кой клас е. Това са 12 if-else блока, които не само са досадни за
писане, но и резултират в не много красив код. В тези случаи използваме **switch**.

Синтаксис на  *switch* statement:
```c++
switch(value)
{
    case value1 : statement;
                  break;
    case value2 : statement;
                  break;
    case value3 : statement;
                  break;
    .
    .
    .
    case valueN: statement;
                 break;
    default:     statement;
                 break;
}
```

В скобите се подава променлива. След това променливата се сравнява със стойността на всеки case отгоре надолу и при равенство се изпълнява кода след
този case. Стойностите в caso-вете и променливата в switch-а *трябва* да са от еднакъв тип.
## **Важно**
* След всеки statement, във всеки case трябва да пишем **break;** за да спрем след изпълнението на нашия statement. В противен случай всеки следващ 
statement до края на switch-а ще бъде изпълнен.  
* **Default** case-а се изпълнява когато никоя от стойностите в caso-вете не съвпадне със стойността на променливата в switch-а.

Повече за switch statement-а: [тук](https://www.youtube.com/watch?v=TNUCZpgPjrw)
