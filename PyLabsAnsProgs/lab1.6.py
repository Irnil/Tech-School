print("Есть два конверта. В одном ху.. ээ.. кхм...")
print("Нужно указать размер обоих конвертов (длина;ширина).")
print("Программа определит можно ли вложить один коверт в другой.")

#1st letter values
print("Ввод размера первого конверта.")

print("Введите длину конверта:")
while 1:
    try:
        le1 = int(input("Длина должна быть положительным целым числом: "))
        if le1<=0:
           le1=int(input("Размер должен быть положительным. Введите заново:"))   

        if le1>0: print("KRASAVA")
        
        else: continue   

        break
    except ValueError:
        print("Введите число заново")

print("Введите ширину первого конверта:")
while 1:
    try:
        wi1 = int(input("Длина должна быть положительным целым числом: "))
        if wi1<=0:
           wi1=int(input("Размер должен быть положительным. Введите заново:"))   

        if wi1>0: print("KRASAVA")
        
        else: continue   

        break
    except ValueError:
        print("Введите число заново")

print("Ввод размеров второго конверта.")

print("Введите длину второго конверта: ")
while 1:
    try:
        le2 = int(input("Длина должна быть положительным целым числом: "))
        if le2<=0: le2=int(input("Введите число заново:"))   

        if le2>0: print("KRASAVA")
        
        else: continue   

        break
    except ValueError:
        print("Введите число заново")

print("Введите ширину второго конверта: ")
while 1:
    try:
        wi2 = int(input("Длина должна быть положительным целым числом: "))
        if wi2<=0: wi2=int(input("Введите число заново:"))   

        if wi2>0: print("KRASAVA")
        
        else: continue   

        break
    except ValueError:
        print("Введите число заново")

if le1>le2 and wi1>wi2: print("Второй конверт поместится в первом.")

if le1<le2 and wi1<wi2: print("Первый конверт поместится в первом.")

if le1==le2 or wi1==wi2: print("Конверты не подходят друг к другу.")


hold=input("Press Enter to exit")

