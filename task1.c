#include <stdio.h>

int main() {
	int a, b, c, largest;

	printf("Enter three integers: ");
	scanf("%d %d %d", &a, &b, &c);

	largest = a;
	if (b > largest)
		largest = b;
	if (c > largest)
		largest = c;
	
	if (a == largest && b == largest && c == largest)
		printf("All three numbers are equal and greatest: %d\n", largest);
	else if ((a == largest && b == largest) ||
			 (a == largest && c == largest) ||
			 (b == largest && c == largest))
		printf("Two numbers are equal and greatest: %d\n", largest);
	else
		printf("The largest number is %d\n", largest);

	return 0;
}


	return 0;
}

