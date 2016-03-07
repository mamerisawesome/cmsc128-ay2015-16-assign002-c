#include <stdio.h>
#include <string.h>

int getHammingDistance (char * str1, char * str2) {
	int i = 0, inversions = 0;
	
	if (strlen(str1) != strlen(str2)) {
		return -1;
	}
	
	if (strlen(str1) == 0) {
		return 0;
	}
	
	for (; i < strlen(str1); i += 1) {
		if (str1[i] == str2[i]) {
			inversions += 1;
		}
	}
	
	return inversions;
}

int countSubstrPattern (char * strToCheck, char * pattern) {
	return 0;
}

int isValidString (char * strToCheck, char * alphabet) {
	int i = 0, j = 0, isValid = 0, isValidPerSymbol[strlen(alphabet)];
	
	if (strlen(strToCheck) < 0 || strlen(alphabet) == 0) {
		return -1;
	}
	
	if (strlen(strToCheck) == 0) {
		return 1;
	}
	
	for (; i < strlen(strToCheck); i += 1) {
		isValidPerSymbol[i] = 0;
		for (j = 0; j < strlen(alphabet); j += 1) {
			if (strToCheck[i] == alphabet[i]) {
				isValidPerSymbol[i] = 1;
			}
		}
	}
	
	for (i = 0; i < strlen(alphabet); i += 1) {
		isValid = 1;
		if (isValidPerSymbol[i] == 0) {
			isValid = 0;
			break;
		}
	}
	
	return isValid;
}

int getSkew (char * strInput, int scope) {
	return 0;
}

int getMaxSkewN (char * strInput, int scope) {
	return 0;
}

int getMinSkewN (char * strInput, int scope) {
	return 0;
}

int main () {
	return 0;
}