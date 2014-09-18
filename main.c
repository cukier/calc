/*
 * main.c
 *
 *
 *  Created on: 22/11/2012
 *      Author: cuki
 */
#include<stdio.h>

int main(void) {

	unsigned aux, aux1, n1, n2, op;

	printf("\n\r>");
	scanf("%u%u%u%u%u", &n1, &op, &n2, &aux, &aux1);

	if (op != ' ') {
		if (op == '+')
			printf("%d", n1 + n2);
		else if (op == '*')
			printf("%d", n1 * n2);
	} else if (op == ' ') {
		op = (char) n2;
		n2 = (int) aux1;
		if (op == '+')
			printf("%d", n1 + n2);
		else if (op == '*')
			printf("%d", n1 * n2);
	} else
		printf(") =");

	return 0;
}

