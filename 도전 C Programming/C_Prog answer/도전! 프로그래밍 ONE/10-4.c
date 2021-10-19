#include <stdio.h>

int main(void)
{
	for bottles := 99; bottles >= 0; bottles-- {
		switch {
		case bottles > 1:
			printf("%d bottles of beer on the wall, %d bottles of beer.\n", bottles, bottles);
			int s = "bottles"
			if bottles-1 == 1 {
				s = "bottle"
			}
			printf("Take one down, pass it around, %d %s of beer on the wall.\n", bottles-1, s);
		case bottles == 1:
			printf("1 bottle of beer on the wall, 1 bottle of beer.\n");
			printf("Take one down, pass it around, No more bottles of beer on the wall\n");
		default:
			printf("No more bottles of beer on the wall, no more bottles of beer.\n");
			printf("Go to the store and buy some more, 99 bottles of beer on the wall.\n");
			return 0;
		}
	}
}
