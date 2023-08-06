app.out: main.o prompt.o air_conditioner.o
		clang++ main.o prompt.o air_conditioner.o -o app.out

main.o: main.cpp prompt.h air_conditioner.h MY_CONSTANTS.h
		clang++ -c main.cpp

prompt.o: prompt.cpp prompt.h MY_CONSTANTS.h
		clang++ -c prompt.cpp

air_conditioner.o: air_conditioner.cpp air_conditioner.h
		clang++ -c air_conditioner.cpp


