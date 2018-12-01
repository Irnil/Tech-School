print("Нужно ввести два число А и В.")
print("Если А - четное, то будет выведен результат А*В=")
print("Если А - нечетное, то будет выведен результат А+В=")

#Ввод А
while 1:
    try:
        a = int(input("Введите A= "))

        break
    except ValueError:
            print("Введите число, а не букву: ")
#Ввод В
while 1:
    try:
        b = int(input("Введите B= "))

        break
    except ValueError:
            print("Введите число, а не букву: ")            

#Блок вычисления
if a%2==0:
    result=a*b
    print("А - четное число. Результат А*В= ",result)
else:
    result=a+b
    print("А - нечетное число. Результат А+В= ",result)

#Выход из программы
hold=input("Press Enter to exit")   
