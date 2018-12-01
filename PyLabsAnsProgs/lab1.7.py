print("Программа для сравнения целых чисел")

print("Введите количество перемнных для сравнения 2, 3 или 4:")

while 1:
    try:
        num = int(input("Количество должно быть положительным целым числом: "))
        if num<=1 and num>=5:
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

    if x1>x2:
        print("Ряд по возрастанию: ",x2,x1)
    else: print("Ряд по возрастанию: ",x1,x2)

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

    
    if x1>x2:
        big1=x1
        lit1=x2
    elif x2>x1:
        big1=x2
        lit1=x1

    if x3>big1 and x3>lit1:
        print("Ряд по возрастанию: ",lit1,big1,x3)
    elif x3<big1 and x3>lit1:
        print("Ряд по возрастанию: ",lit1,x3,big1)
    elif x3<big1 and x3<lit1:
        print("Ряд по возрастанию: ",x3,lit1,big1)
            
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
            
    if x1 > x2:
        big1=x1
        lit1=x2
    else:
        big1=x2
        lit1=x1

    if x3 > x4:
        big2=x3
        lit2=x4
    else:
        big2=x4
        lit2=x3

    if lit1>lit2:
        suplit=lit2
        tolit=lit1
    else:
        suplit=lit1
        tolit=lit2

    if big1>big2:
        supbig=big1
        tobig=big2
    else:
        supbig=big2
        tobig=big1

    print("Ряд по возрастанию: ",suplit,tobig,tolit,supbig)

hold=input("Press Enter to exit")
