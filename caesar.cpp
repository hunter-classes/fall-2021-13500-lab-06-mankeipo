#include <iostream>
#include <cctype>
using namespace std;
#include "caesar.h"

char shiftChar(char c, int rshift) {
  if(isalpha(c)){
    if(c >= 65 && c <= 90) {
	c += rshift;
	if(c > 90) {
	    c -= 26;
	}
    } else if (c >= 97 && c <= 122) {
	c += rshift;
	if(c > 122) {
	    c -= 26;
	}
    }
  }
  return c;
}

string encryptCaesar(string plaintext, int rshift) {
  for(int i = 0; i < plaintext.length(); i++) {
    plaintext[i] = shiftChar(plaintext[i], rshift);
  }
  return plaintext;
}
