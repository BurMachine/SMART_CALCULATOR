APP = build/CALC.app
BACKEND_FILES = s21_smartcalc.c;
BACKEND_FILES_O = s21_smartcalc.o

CC+FLAGS = gcc -std=c11 -Wall -Wextra -Werror -std=c11
GCOVFLAGS = -L. --coverage -ls21_smartcalc
OS = $(shell uname)
ifeq ($(OS), Linux)
	CHECK_FLAGS = -lcheck -lm -pthread -lrt -lsubunit
else
	CHECK_FLAGS = -lcheck
endif

TEST_COMPILE = $(CC+FLAGS) tests.c s21_smartcalc.a $(CHECK_FLAGS) -L. -ls21_smartcalc


all: install tests clean

build:
	mkdir build
	cd ./build/ && qmake ../ && make

install: build
	@mkdir $(HOME)/Desktop/SmartCalc_GRYFFIND
	@cp -rf $(APP) $(HOME)/Desktop/SmartCalc_GRYFFIND/
	make clean

uninstall:
	@rm -rf $(HOME)/Desktop/SmartCalc_GRYFFIND*

dvi:
	open dvi.tex

dist:
	rm -rf Archive_SmartCalc_v1.0/
	mkdir Archive_SmartCalc_v1.0/
	mkdir Archive_SmartCalc_v1.0/src
	cp Makefile *.c *.h *.pro *.cpp *.ui *.user Archive_SmartCalc_v1.0/src/
	tar cvzf Archive_SmartCalc_v1.0.tgz Archive_SmartCalc_v1.0/
	mv Archive_SmartCalc_v1.0.tgz $(HOME)/Desktop/
	rm -rf Archive_SmartCalc_v1.0/

tests: s21_smartcalc.a
	$(TEST_COMPILE)
	./a.out

gcov_report: tests
	rm -f *.g*
	$(CC+FLAGS) tests.c s21_smartcalc.a $(CHECK_FLAGS) $(GCOVFLAGS)
	./a.out
	lcov -t a.out -o rep.info -c -d .
	genhtml -o report rep.info
	open ./report/index.html
	rm -rf *.gcda *.gcno *.info

s21_smartcalc.a: s21_smartcalc.o
	ar rcs libs21_smartcalc.a *.o
	rm -rf *.o
	ranlib libs21_smartcalc.a
	cp libs21_smartcalc.a s21_smartcalc.a
	cp libs21_smartcalc.a ls21_smartcalc.a

s21_smartcalc.o:
	$(CC+FLAGS) -c *.c

check:
	python3 ../materials/linters/cpplint.py --extensions=c *.c s21_smartcalc.h
	make tests
	CK_FORK=no leaks --atExit -- ./a.out
	make clean

clean:
	rm -rf *.o *.a
	rm -rf *.gcda *.gcno *.info
	rm -rf s21_test report
	rm -rf s21_calc s21_test
	rm -rf ./build*
	rm -rf a.out

rebuild: clean uninstall all

reinstall: clean uninstall install