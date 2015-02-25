#include <boost/algorithm/string.hpp>
#include <iostream>
using namespace std;

const string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const int alphabet_length = (int) alphabet.length();

string get_keyphrase(const string& text, const string& keyword)
{
  /* Returns the Vigenere keyword of appropriate length (in all caps) for a
   * given text (either plaintext or ciphertext) and keyword.
   */
  string keyphrase = "";
  string caps_keyword = boost::algorithm::to_upper_copy<string>(keyword);

  size_t keyword_length = keyword.length();
  size_t text_length = text.length();

  for (int i = 0; i < text_length; i++)
  {
    keyphrase += caps_keyword[i % keyword_length];
  }

  return keyphrase;
}


string encrypt(const string& plaintext, const string& keyword)
{
  /* Returns the ciphertext produced by encrypting the plaintext using the
   * given keyword and the Vigenere Cipher
   * (http://en.wikipedia.org/wiki/Vigen%C3%A8re_cipher).
   */

  string ciphertext = "";
  string caps_plaintext = boost::algorithm::to_upper_copy<string>(plaintext);
  string keyphrase = get_keyphrase(plaintext, keyword);

  for (int i = 0; i < plaintext.length(); i++)
  {
    int plaintext_index = (int) alphabet.find(caps_plaintext[i]);
    int advance_by = (int) alphabet.find(keyphrase[i]);
    int ciphertext_index = (plaintext_index + advance_by) % alphabet_length;

    ciphertext += alphabet[ciphertext_index];
  }

  return ciphertext;
}

string decrypt(const string& ciphertext, const string& keyword)
{
  /* Returns the plaintext produced by decrypting the ciphertext using the
   * given keyword and the Vigenere Cipher
   * (http://en.wikipedia.org/wiki/Vigen%C3%A8re_cipher).
   */
  string plaintext = "";
  string caps_ciphertext = boost::algorithm::to_upper_copy<string>(ciphertext);
  string keyphrase = get_keyphrase(ciphertext, keyword);

  for (int i = 0; i < ciphertext.length(); i++)
  {
    int ciphertext_index = (int) alphabet.find(caps_ciphertext[i]);
    int reverse_by = (int) alphabet.find(keyphrase[i]);
    int plaintext_index = (ciphertext_index - reverse_by) % alphabet_length;

    cout << ciphertext_index << endl;
    cout << reverse_by << endl;
    cout << plaintext_index << endl;
    cout << endl;

    plaintext += alphabet[plaintext_index];
  }

  return plaintext;
}
