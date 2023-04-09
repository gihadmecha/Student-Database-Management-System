exeFile = main
sourceFile = main.c 
exeFileRm = main.exe


all:
	gcc -o $(exeFile) string.h string.c person.h person.c student.h student.c school.h school.c conio.h conio.c $(sourceFile)
	./$(exeFile) 
	del $(exeFileRm)

# gcc -o main myBasics.c myArray.c myString.c struct.c stack.c queue.c main.c 
# ./main
# rm main

#run:
#	./$(exeFile)	

#clean:
#    rm $(exeFile)
