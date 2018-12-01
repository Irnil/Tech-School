print("Программа для поиска большего числа.")
print("Введите количество перемнных для сравнения:")
 
while 1:
    try:
        num = int(input("Количество должно быть положительным целым числом: "))
        if num<=0:
           num=int(input("Введите число заново:"))

        if num>0: print("KRASAVA")
        
        else: continue   

        break
    except ValueError:
        print("Введите число заново")

