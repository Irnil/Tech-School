import time # for checking the worktime
import math # for square
out=open('outfile.txt','w')
out.write('It will be writing all simple numbers between 1 and 10 000\n-----\n')
start = time.time()
print ("2\n3\n5\n7\n11\n13\n17\n19\n23\n")
out.write( "2\n3\n5\n7\n11\n13\n17\n19\n23\n") ## so 2,3,7,11,13 divide by themself we should add it manually. It's Not bug, it's feature. So fast... cool! about 0.04 seconds for 10000... Optimizate again...
for i in range (17,10000,2):
	if ( 
	i%2 ==  0 or# |(                                                                     )
	i%3 ==  0 or# |(                                                                     )
	i%5 ==  0 or# |(                                                                     )
	i%7 ==  0 or# |(   we try divide num by basic simple numbers. (Is's exception list)  )
	i%11 == 0 or# |(                                                                     )
	i%13 == 0 or# |(                                                                     )
	i%17 == 0 or# |(                                                                     )
	i%19 == 0 or# |(                                                                     )
	i%23 == 0   # |(                                                                     )
	):
		continue
	# if number look as simple, we try finding them dividers. ->	
	else:
		easy=True
		for j in range (3,int(math.sqrt(i)+1),2): # step=2 because in 1,2,3,4...i every secondary number is even number but we throwed away ALL even numbers in exception list
			if i%j==0:
				easy=False
		if easy==True:
			print (i)
			out.write(str(i)+"\n")
		
finish = time.time()
print (str (finish - start))
out.write('Program work at '+str (finish - start)+' second') # we write exception time here
