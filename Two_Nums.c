#include <stdio.h>

int main() {
	float num1, num2, result;

		printf("A couple of numbers, if you please: ");
		scanf_s("%f", &num1);
		scanf_s("%f", &num2);

		result = num1 / num2;
		printf_s("Division of %.0f by %.0f: %.6f", num1, num2, result);

		printf("\n");

		if (num1 < num2)
			printf("In order: %.0f %.0f", num1, num2);
		else
			printf("In order: %.0f %.0f", num2, num1);

		printf("\n");
		
		// in C || is or, && is and
		if (num1==13 || num2 == 13)
			printf("Bad luck!");

		printf("\n");

		printf("Odd: ");
		if (static_cast<int>(num1) % 2 == 1)
			printf("%.0f", num1);
		if (static_cast<int>(num2) % 2 == 1)
			printf("%.0f", num2);

		return 0;
}
