#include <boost/algorithm/string.hpp>
#include <iostream>
using namespace std;

const string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

string encrypt(const string& plaintext, const string& keyword)
{
  /* Returns the plaintext encrypted using the given keyword and the Vigenere
   * Cipher (http://en.wikipedia.org/wiki/Vigen%C3%A8re_cipher).
   */

  string cap_keyword = to_upper(keyword);
  string keyphrase = "";

  for (int i = 0; i < plaintext.length() / keyword.length() + 1; i++)
  {
    keyphrase += cap_keyword;
  }

  keyphrase.resize(plaintext.length());

  string ciphertext = "";
  for (int i = 0; i < plaintext.length(); i++)
  {
    start_index = alphabet.find(to_upper(plaintext[i]));
    advance_by = alphabet.find(keyphrase[i]);
    ciphertext += alphabet[(start_index + advance_by) % alphabet.length()];
  }

  return ciphertext;
}

string decrypt(const string& plaintext, const string& keyword)
{
  return "XXXX: Write me!";
}
