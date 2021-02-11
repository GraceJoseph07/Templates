#Target_Name : Dependencies
#<TAB>Command
PROJECT_NAME = Test
SRC = complextest.cpp

LIB = -lgtest -lgtest_main -lpthread

$(PROJECT_NAME) : $(SRC)
	g++ $^ -o $@.out $(LIB)

run:$(PROJECT_NAME)
	./$^.out

clean:
	rm *.o*