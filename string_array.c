#include <stdio.h>

/*
This code illustrates the difference between the 2D character array and the array of strings
*/

int main(){

	/*
	2D array of characters
	*/

	char names1[4][10] = {
		"christina",
		"jatin",
		"abdul",
		"jack ma"
	};

	/*
	How much space is occupied by this 2D array?
	Printing the addresses might help
	*/
	printf("%p\n", &names1[0][0]);
	printf("%p\n", &names1[1][0]);
	printf("%p\n", &names1[2][0]);
	printf("%p\n", &names1[3][0]);


	/*
	Array of strings
	*/

	char *names2[] = {
		"christina",
		"jatin",
		"abdul",
		"jack ma"
	};

	/*
	How much space is occupied by the array of strings?
	Note that the pointers will require extra space (4*pointer_size) as compared to the 2D character array.
	Printing the addresses might help
	*/
	printf("%p\n", names2[0]);
	printf("%p\n", names2[1]);
	printf("%p\n", names2[2]);
	printf("%p\n", names2[3]);

	/*
	Manipulation of an array of pointers is much easier than that of a 2D array. Write a program which exchanges the names
	- christina and jatin. First switch within names1 array and then switch within names2 array. Which one
	is easier?
	Hint: One requires a loop and the other does not.
	*/

	return 0;
}
