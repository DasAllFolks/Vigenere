#include <iostream>
#include "vigenere.hpp"

using namespace std;

int main()
{
  cout << encrypt("plaintext", "key") << endl;
}
