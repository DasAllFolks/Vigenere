#include <boost/algorithm/string.hpp>
#include <iostream>
using namespace std;


string encrypt(const string& plaintext, const string& keyword)
{
  /* Returns the plaintext encrypted using the given keyword and the Vigenere
   * Cipher (http://en.wikipedia.org/wiki/Vigen%C3%A8re_cipher).
   *
   * For now, assumes that the length of the plaintext is greater than or equal
   * to the length of the keyword.
   */

  string keyphrase = ""
  int reps = plaintext.length() / keyword.length() + 1
  for (int i = 0; i < plaintext.length() /
  {

  }

  string plaintext = boost::algorithm::to_upper_copy<string>(plaintext);

  return plaintext + " " keyword;
}
