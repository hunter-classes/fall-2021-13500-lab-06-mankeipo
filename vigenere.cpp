#include <iostream>
#include "vigenere.h"
using namespace std;

string encryptVigenere(string plaintext, string keyword) {
  int count = 0;
  for(int i = 0; i < plaintext.length(); i++) {
      if(isalpha(plaintext[i])) {
	if(count == keyword.length()) {
		count = 0;
	}
        int shift = keyword[count] - 97; 
	if(plaintext[i] >= 65 && plaintext[i] <= 90) { 
		if(plaintext[i] + shift > 90) {
                        plaintext[i] -= 26;
                }
                plaintext[i] += shift;
	} else if (plaintext[i] >= 97 && plaintext[i] <= 122) {
		if(plaintext[i] + shift > 122) {
			plaintext[i] -= 26;
		}
		plaintext[i] += shift;
	}
	count++;
      }
  }
  return plaintext;
}
