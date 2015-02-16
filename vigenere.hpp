#include <boost/algorithm/string.hpp>
#include <iostream>
using namespace std;

const string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

string encrypt(const string& plaintext, const string& keyword)
{
  /* Returns the plaintext encrypted using the given keyword and the Vigenere
   * Cipher (http://en.wikipedia.org/wiki/Vigen%C3%A8re_cipher).
   */

  string keyphrase = "";
  for (int i = 0; i < plaintext.length() / keyword.length() + 1; i++)
  {
    keyphrase += keyword;
  }

  keyphrase.resize(plaintext.length());

  return boost::algorithm::to_upper_copy<string>(keyphrase);
}
