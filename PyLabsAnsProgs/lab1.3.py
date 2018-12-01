print("Программа для определения принадлежности точки к одной из четвертей графика:")
print("    |    ")
print(" 2  |  1 ")
print("----+----")
print(" 3  |  4 ")
print("    |    ")
print("")
print("Ввод Х и Y:")

#input X
while 1:
    try:
        x = int(input("Введите Х= "))

        break
    except ValueError:
        print("Вы ввели символ. Введите число: ")

#input Y
while 1:
    try:
        y = int(input("Введите Y= "))

        break
    except ValueError:
        print("Вы ввели символ. Введите число: ")        


#count func
if x>0 and y>0: print("Точка принадлежит 1 четверти гафика. (X;Y)=", x,y)
if x>0 and y<0: print("Точка принадлежит 4 четверти графика.(X;Y)=", x,y)
if x<0 and y>0: print("Точка принадлежит 2 четверти графика.(X;Y)=", x,y)
if x<0 and y<0: print("Точка принадлежит 3 четверти графика.(X;Y)=", x,y)

if x==0 and y>0: print("Точка лежит на оси Y между 1 и 2 четвертями графика (X;Y)=",x,y)
if x==0 and y<0: print("Точка лежит на оси Y между 3 и 4 четвертями графика (X;Y)=",x,y)
if x>0 and y==0: print("Точка лежит на оси Х между 1 и 4 четверятми графика (X;Y)=",x,y)
if x<0 and y==0: print("Точка лежит на оси Х между 2 и 3 четвертями графика (X;Y)=",x,y)
if x==0 and y==0: print("Точка лежит в начале координат (0;0)")

#exit
hold=input("Press Enter to exit")
