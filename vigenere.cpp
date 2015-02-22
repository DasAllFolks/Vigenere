#include <iostream>
#include "vigenere.hpp"

using namespace std;

int main()
{
  string plaintext = "plaintext";
  string key = "key";
  cout << plaintext << endl;

  string ciphertext = encrypt(plaintext, key);
  cout << ciphertext << endl;

  cout << decrypt(ciphertext, key) << endl;
}
