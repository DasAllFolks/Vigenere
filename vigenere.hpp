#include <boost/algorithm/string.hpp>
#include <iostream>
using namespace std;


string encrypt(const string& plaintext, const string& keyword)
{
  string capitalized = boost::algorithm::to_upper_copy<string>(plaintext);
  return "XXXX: Write me! Plaintext " + capitalized;
}
