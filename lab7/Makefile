main: application.c check.c crime.c criminal.c list.c main.c menu.c organization.c
	gcc -o main application.c check.c crime.c criminal.c list.c main.c menu.c organization.c

test: application.c check.c crime.c criminal.c list.c main.c menu.c organization.c test.c
	gcc -o test test.c application.c check.c crime.c criminal.c list.c main.c menu.c organization.c -Dmain=codsfksofdsko -fprofile-arcs -ftest-coverage -lgcov -g
