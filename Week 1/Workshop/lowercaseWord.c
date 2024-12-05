#include <stdio.h>
#include <conio.h>

int main() {
	char userInput;

	// Method 1: Taking word and convert it into the lowercase character each.
	printf("Enter the Word you want to convert: ");
	while(1) {

		scanf("%c", &userInput);

		if (userInput != 10) {
			char lowercaseCharacter;
			if (userInput >= 65 && userInput <= 90) {
				lowercaseCharacter = userInput + 32;
				printf("The lower case of %c is %c \n", userInput, lowercaseCharacter);
			} else if (userInput >= 97 && userInput <= 122) {
				lowercaseCharacter = userInput;
				printf("The lower case of %c is %c \n", userInput, lowercaseCharacter);
			}
		} else {
			break;
		}
	}
	return 0;

}
