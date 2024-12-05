#include <stdio.h>
//#include <ctype.h>

int main(){
	char userInputCharacter;
	printf("Enter the character: ");
	scanf("%c", &userInputCharacter);


	// Method 1 with function:
//	char lowercaseCharacter = tolower(userInputCharacter);


	// Method 2 without function:
	/* 
		A-Z : 65 - 90
		a-z : 97 - 122
		to convert to uppercase = character - 32
		to convert to lowercase = character + 32
	*/
	char lowercaseCharacter;
	if (userInputCharacter >= 65 && userInputCharacter <= 90){
		lowercaseCharacter = userInputCharacter + 32;
	} else if (userInputCharacter >= 97 && userInputCharacter <= 122){
		lowercaseCharacter = userInputCharacter;
	} else{
		printf("Not a valid character!!!");
	}
	
	printf("The lower case of %c is %c", userInputCharacter, lowercaseCharacter);
	return 0;
	
}