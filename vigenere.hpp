#include <boost/algorithm/string.hpp>
#include <iostream>
using namespace std;

const string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

string encrypt(const string& plaintext, const string& keyword)
{
  /* Returns the plaintext encrypted using the given keyword and the Vigenere
   * Cipher (http://en.wikipedia.org/wiki/Vigen%C3%A8re_cipher).
   */

  string ciphertext = "";

  string caps_keyword = boost::algorithm::to_upper_copy<string>(keyword);
  string caps_plaintext = boost::algorithm::to_upper_copy<string>(plaintext);

  string keyphrase = "";
  for (int i = 0; i < plaintext.length() / keyword.length() + 1; i++)
  {
    keyphrase += caps_keyword;
  }
  keyphrase.resize(plaintext.length());

  for (int i = 0; i < plaintext.length(); i++)
  {
    int start_index = alphabet.find(caps_plaintext[i]);
    int advance_by = alphabet.find(keyphrase[i]);
    int new_index = (start_index + advance_by) % alphabet.length();

    ciphertext += alphabet[new_index];
  }

  return ciphertext;
}

string decrypt(const string& plaintext, const string& keyword)
{
  return "XXXX: Write me!";
}
