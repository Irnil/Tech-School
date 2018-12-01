print("Программа для сравнения целых чисел")

print("Введите количество перемнных для сравнения 2, 3 или 4:")

while 1:
    try:
        num = int(input("Количество должно быть положительным целым числом: "))
        if num<=1 | num>=5:
           num=int(input("Введите число заново:"))   

        if num>1: print("KRASAVA")
        
        else: continue   

        break
    except ValueError:
        print("Введите число заново")

#При двух переменных
if num==2:
    while 1:
        try:
            x1 = int(input("Введите первую переменную (число): "))

            break
        except ValueError:
            print("Введите число заново")
        
    while 1:
        try:
            x2 = int(input("Введите вторую переменную (число): "))

            break
        except ValueError:
            print("Введите число заново")

    if x1>x2: print("Большее число: ",x1)
    else: print("Большее число",x2)

#При трех переменных
if num==3:
    while 1:
        try:
            x1 = int(input("Введите первую переменную (число): "))

            break
        except ValueError:
            print("Введите число заново")
        
    while 1:
        try:
            x2 = int(input("Введите вторую переменную (число): "))

            break
        except ValueError:
            print("Введите число заново")

    while 1:
        try:
            x3 = int(input("Введите третью переменную (число): "))

            break
        except ValueError:
            print("Введите число заново")

    
    if x1>x2: big1=x1
    elif x2>x1: big1=x2

    if x3>big1: big1=x3

    print("Большее число= ",big1)
            
#При четырех переменных
if num==4:
    while 1:
        try:
            x1 = int(input("Введите первую переменную (число): "))

            break
        except ValueError:
            print("Введите число заново")
        
    while 1:
        try:
            x2 = int(input("Введите вторую переменную (число): "))

            break
        except ValueError:
            print("Введите число заново")

    while 1:
        try:
            x3 = int(input("Введите третью переменную (число): "))

            break
        except ValueError:
            print("Введите число заново")
            
    while 1:
        try:
            x4 = int(input("Введите третью переменную (число): "))

            break
        except ValueError:
            print("Введите число заново")
            
    if x1 > x2: big1=x1
    else: big1=x2

    if x3 > x4: big2=x3
    else: big2=x4

    if big1 > big2: print("Большее число",big1)
    else: print("Большее число",big2)

hold=input("Press Enter to exit")
