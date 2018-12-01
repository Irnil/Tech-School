# Подключение модуля случайных чисел: import random

print("Задача программы: \nНайти количество и сумму четных чисел от 1 до 99. \n")
hold=input("Нажмите Enter для запуска вычислений и получения результата.\n")
i=1
count=0
summ=0
for i in range(99):
    if i%2==0:
        count=count+1
        summ+=i
    else: continue

print("Сумма ряда= ",summ," \nКоличество четных= ",count,'\n')    

# Функция рандома на два аргумента: print("Random=", random.randint(1,100))
hold=input("Press Enter to exit")

