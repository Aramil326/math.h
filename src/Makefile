WWW = -std=c11 -Wall -Werror -Wextra
OS := $(shell uname)

ifeq ($(OS),Linux)
	CHFLAGS = -lcheck -lm -lpthread -lrt -lsubunit
else
	CHFLAGS = -lcheck -lm -lpthread
endif

all: clean s21_math.a

s21_math.a: s21_math.o
	ar -crs s21_math.a s21_math.o

s21_math.o:
	gcc $(WWW) -c s21_math.c

test: clean s21_math.a
	gcc $(WWW) unit_test.c s21_math.a $(CHFLAGS) -o unit_test
	./unit_test
	make clean

gcov_report:
	gcc --coverage -lcheck unit_test.c s21_math.c -o ./gcov
	./gcov
	lcov -t "./gcov" -o report.info --no-external -c -d .
	genhtml -o report report.info
	open ./report/index.html
	rm -rf *.gcno *gcda *.gcov


clean:
	rm -rf *.o *.a unit_test
	rm -rf *.gcno *gcda *.gcov gcov program
	rm -rf report report.info

