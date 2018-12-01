print("Программа определяет является ли введенное Вами число простым (если делится только на само себя и на 1).")

while 1:
    try:
        num = (input("Введите целое положительное число: "))
        if int(num)<=0:
           num=(input("Введите число заново:"))

        if int(num)>0: print("KRASAVA")
        
        else: continue   

        break
    except ValueError:
        print("Введите число заново.")
i=1
j=1
count=0
check=0
ui=int(i)
unum=int(num)


for i in num(1,unum):


print("count=",count)
if count>=1: print(num," не является простым числом.")
else: print(num," является простым числом.")

hold=input("Press Enter to exit")
