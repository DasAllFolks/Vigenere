#include <boost/algorithm/string.hpp>
#include <iostream>
using namespace std;


string encrypt(const string& plaintext_input, const string& keyword_input)
{
  string keyword = boost::algorithm::to_upper_copy<string>(keyword_input);
  string plaintext = boost::algorithm::to_upper_copy<string>(plaintext_input);

  return "XXXX: Write me! Plaintext " + plaintext;
}
