# Цикли

Нека предположим, че имаме задача, която приема число и принти дали всяко едно от числата 2..10 е негов делител. Със 
знанията ни до момента бихме го написали с 9 if-a.

```c++

if(number % 2 == 0)
{
    cout<< "2 is a divisor" <<endl;
}
else if(number % 3 == 0)
{
    cout<< "3 is a divisor" <<endl;
}
....
else if(number % 10 == 0)
{
    cout<< "10 is a divisor" <<endl;
}
```

Както се забелязва, логиката, която се изпълнява е една и съща. Единственото, което се сменя са числата от 2 до 10. В случаи когато искаме да се 
**изпълнява еднаква логика** ползваме **цикли**.  
Цикъл представлява *поредица от инструкции, които се повтарят докато определено условие е изпълнено*. Всеки цикъл се състои от 3 основни стъпки: 
1. **Инициализиране на променлива**, чрез която ще следим стойността на нашето условие (*Например брой пъти, които искаме едно действие да се изпълни*).
2. **Проверка на условието** преди всяко влизането в тялото на цикъла (*Дали остават още пъти*). Ако условието е **true**, се изпълнява кода в тялото, а ако е **false** цикълът приключва и програмата продължава с изпълнение на кода след него. 
3. **Промяна на променливата**, с която следим условието в тялото на цикъла(* Например увеличаме броя изпълнени пъти с 1*). Променяме променливата, за да може следващата итерация да се изпълни различно. Ако не променяме променливата цикълът никога няма да приключи, защото условието най-вероятно никога няма да стане false. (*Никога броят изпълнени пъти няма да се промени.*)  
Съществуват 3 вида цикли:

### While loops
Синтаксисът на прост *while* цикъл е следния:

```c++
initialization_expression;
while(boolean_expression)
{
    // code that executes while boolean_expression is true
    update_expression;
}
// code that executes after boolean_expression is evaluated to false
```
Кодът в тялото на while-a се изпълнява отново и отново докато булевият израз в скобите не стане равен на false.

<p align="center">
  <img src ="https://cdn.journaldev.com/wp-content/uploads/2017/10/while-loop-java.png" width=400/>
</p>

Нашата задача например би изглеждала по следния начин:

```c++
int divisor = 2;     //initialization_expression;
while(divisor <= 10) //boolean_expression
{
	if(number % divisor == 0){
		 cout << divisor << " is a divisor"<<endl;
	}
  	divisor++; // update_expression, we increment divisor in every iteration
}
```
Първо инициализираме числото, за което искаме да проверим дали е делител. В началото това е 2. След това проверяваме дали то е по-малко или равно на 10.
Това е true => влизаме в тялото на цикъла. Изпълнява се логиката ни с if-a и увелчаваме divisor. За следващата итерация той вече ще е равен на 3. След това се връщаме на условието на цикъла и го проверяваме отново, н ос променена променлива. То пак ще true (3<=10) и тялото на цикъла пак ще се изпълни. Това ще продължи докато divisor не стане равен на 11. Тогава вече условието ще е false и цикълът ще приключи.  
По-подробно обяснение на while циклите в ето [този](https://www.youtube.com/watch?v=KLKhsaOPnLk) тюториал.

### Do-while loops
Синтаксисът на прост *do-while* цикъл е следния:

```c++
initialization_expression;
do{
    // code that executes while boolean_expression is true
    update_expression;
}while(boolean_expression);
// code that executes after boolean_expression is evaluated to false
```
Логиката е еднаква с тази на while цикъла, като разликата е че кодът в тялото на do-while-a ще се изпълни поне веднъж, условието чак тогава ще се провери и евентуално кодът в тялото ще продължи да се изпълнява отново и отново докато булевият израз в скобите не стане равен на false.

<p align="center">
  <img src ="https://cdn.journaldev.com/wp-content/uploads/2017/10/java-do-while-loop.png" width=400/>
</p>

Нашата задача например би изглеждала по следния начин:

```c++
int divisor = 2;     //initialization_expression;
do{
	if(number % divisor == 0){
		 cout << divisor << " is a divisor"<<endl;
	}
  	divisor++; 	// update_expression, we increment divisor in every iteration
}while(divisor <= 10); //boolean_expression
```

### For loops
Синтаксисът на прост *for* цикъл е следния:

```c++

for(initialization_expression; boolean_expression; update_expression)
{
     // code that executes while boolean_expression is true
}

// code that executes after boolean_expression is evaluated to false
```
Логиката е еднаква с тази на останалите 2 цикъла, като разликата е че инициализирането, проверката на условието и промяната на променливата се пишат едно до друго в скобите. Но това не означава, че се изпълняват при всяка итерация. **Инициализацията се изпънява само при първата итерация. Условието се проверява. Ако е true кодът в тялото на for-a ще се изпълни и чак тогава стойността на променливата ще се промени,** условието ще се провери пак и евентуално кодът в тялото ще продължи да се изпълнява отново и отново докато булевият израз не стане равен на false.

<p align="center">
  <img src ="https://cdn.journaldev.com/wp-content/uploads/2017/10/java-for-loop-768x906.png" width=400/>
</p>

Нашата задача например би изглеждала по следния начин:

```c++
for(int divisor = 2; divisor <= 10; divisor ++){ //initialization_expression, boolean_expression, update_expression
	if(number % divisor == 0){
		 cout << divisor << " is a divisor"<<endl;
	}
}
```
По-подробно обяснение на for циклите в ето [този](https://www.youtube.com/watch?v=sBO8yvyyBI0) тюториал.  
Както се видя от задачата еднакви неща могат да се напишат и с 3те вида цикли, но в някои случаи едните са по-подходящи от другите.

### *Сontinue* and *break* statements

Това са ключови думи, които могат да се използват в тялото на всички цикли.
* continue - спира изпълнението на текущата итерация и продължава със следващата
* break - приключва изпълнението на цикъла

Например ако в нашата задача искаме да изпринтим първия нечетен делител на число: 
```c++
for(int divisor = 2; divisor <= 10; divisor ++){
	if(divisor % 2 == 0){ 
		 continue;  // all even divisors are skipped and are not checked
	}

	if(number % divisor == 0){
		 cout << divisor << " is a divisor"<<endl;
	}
}
```

Например ако в нашата задача искаме да изпринтим първия делител на число и да приключим: 
```c++
for(int divisor = 2; divisor <= 10; divisor ++){
	if(number % divisor == 0){
		 cout << divisor << " is a divisor"<<endl;
		 break;
	}
}
//code after end of loop/break statement
```
