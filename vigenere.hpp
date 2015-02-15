#include <boost/algorithm/string.hpp>
#include <iostream>
using namespace std;


string encrypt(const string& plaintext, const string& keyword)
{
  string keyword = boost::algorithm::to_upper_copy<string>(keyword);


  string plaintext = boost::algorithm::to_upper_copy<string>(plaintext);

  return plaintext + " " keyword;
}
