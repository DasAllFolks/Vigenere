#include <boost/algorithm/string.hpp>
#include <iostream>
using namespace std;


string encrypt(const string& plaintext, const string& keyword)
{
  return "XXXX: Write me! Plaintext " +
    boost::to_upper(plaintext) +
    " Keyword " +
    boost::to_upper(keyword);
}
