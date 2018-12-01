print("Найти сумму только оложительных из трех чисел.")

#input 1st value
while 1:
    try:
        x1 = int(input("Введите первое число: "))

        break
     except ValueError:
        print("Введите число заново")

#input 2nd value
while 1:
    try:
        x2 = int(input("Введите первое число: "))
        break
     except ValueError:
        print("Введите число заново")

#input 3d value
while 1:
    try:
        x3 = int(input("Введите первое число: "))
        break
     except ValueError:
        print("Введите число заново")

#count func
int(total)=0
if x1>0: total=total+x1

if x2>0: total=total+x2

if x3>0: total-total+x3

print("Сумма положительных введенных чисел= ",total)

#esc from program
hold=input("Press Enter to exit")
