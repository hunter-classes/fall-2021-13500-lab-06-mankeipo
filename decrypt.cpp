#include <iostream>
using namespace std;
#include "decrypt.h"

string decryptCaesar(string ciphertext, int rshift) {
  for(int i = 0; i < ciphertext.length(); i++){
      if(isalpha(ciphertext[i])) {
          if(ciphertext[i] >= 65 && ciphertext[i] <= 90) {
	      ciphertext[i] -= rshift;
	      if(ciphertext[i] < 65) {
		  ciphertext[i] += 26;
	      }
	  } else if (ciphertext[i] >= 97 && ciphertext[i] <= 122) {
	      ciphertext[i] -= rshift;
	      if(ciphertext[i] < 97) {
	          ciphertext[i] += 26;
	      }
	  }
       }
  }
  return ciphertext;
}

string decryptVigenere(string ciphertext, string keyword) {
  int count = 0;
  for(int i = 0; i < ciphertext.length(); i++) {
      if(isalpha(ciphertext[i])) {
          if(count == keyword.length()) {
	      count = 0;
	  }
	  int shift = keyword[count] - 97;
	  if(ciphertext[i] >= 65 && ciphertext[i] <= 90) {
	  	if(ciphertext[i] - shift < 65) {
			ciphertext[i] += 26;
		}
	  	ciphertext[i] -= shift;
	  } else if (ciphertext[i] >= 97 && ciphertext[i] <= 122) {
		if(ciphertext[i] - shift < 97) {
			ciphertext[i] += 26;
	  	}
		ciphertext[i] -= shift;
	  }
	  count++;
      }
  }
  return ciphertext;  
}
