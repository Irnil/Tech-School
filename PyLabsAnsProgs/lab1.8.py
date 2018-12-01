print("Программа для определения оценки студента согласно рейтингу.",'\n')
print("Правила:")
print("0-19 оценка F")
print("20-39 оценка E")
print("40-59 оценка D")
print("60-74 оценка C")
print("75-89 оценка B")
print("90-100 оценка A",'\n')


print("Введите рейтинг студента: ")

while 1:
    try:
        num = int(input("Диапазон рейтинга от 0 до 100: "))
        if num<=0 and num>=100:
           num=int(input("Введите число заново:"))   

        if num>1: print("KRASAVA")
        
        else: continue   

        break
    except ValueError:
        print("Введите число заново")

if num>=0 and num<=19: print("Рейтинг студента=",num," Оценка F.")
if num>=20 and num<=39: print("Рейтинг студента=",num," Оценка E.")
if num>=40 and num<=59: print("Рейтинг студента=",num," Оценка D.")
if num>=60 and num<=74: print("Рейтинг студента=",num," Оценка C.")
if num>=75 and num<=89: print("Рейтинг студента=",num," Оценка B.")
if num>=90 and num<=100: print("Рейтинг студента=",num," Оценка A.")                 

hold=input("Press Enter to exit")
