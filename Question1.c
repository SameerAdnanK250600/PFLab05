#include <stdio.h>

int main() {
	int vowels = 0;
	int consonants = 0;
	
	char letter1;
	char letter2;
	char letter3;
	
	printf("Enter Character 1: ");
	letter1 = getchar();
	
	getchar();
	
	printf("Enter Character 2: ");
	letter2 = getchar();
	
	getchar();
	
	printf("Enter Character 3: ");
	letter3 = getchar();
	
	getchar();
	
	switch(letter1){
		case 'a' : vowels++; break;
		case 'e' : vowels++; break;
		case 'i' : vowels++; break;
		case 'o' : vowels++; break;
		case 'u' : vowels++; break;
		default: consonants++; break;
	}
	
	switch(letter2){
		case 'a' : vowels++; break;
		case 'e' : vowels++; break;
		case 'i' : vowels++; break;
		case 'o' : vowels++; break;
		case 'u' : vowels++; break;
		default: consonants++; break;
	}
	
	switch(letter3){
		case 'a' : vowels++; break;
		case 'e' : vowels++; break;
		case 'i' : vowels++; break;
		case 'o' : vowels++; break;
		case 'u' : vowels++; break;
		default: consonants++; break;
	}
	
	printf("Vowels: %d, Consonants: %d", vowels, consonants);
	
	return 0;
}
