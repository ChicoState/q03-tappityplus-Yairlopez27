#include "tappity.h"
#include <iostream>
#include <algorithm>
using namespace std;

/**
 * Class for tappity
**/

//Constructor sets the reference phrase
tappity::tappity(std::string reference)
{
  this->reference = reference;
  this->input = "";
}

//Provide the input to be compared to the reference. Before this 
//function is called, the input should be considered an empty string
void tappity::entry(std::string input)
{
  this->input = input;
}

//Compares the length of the reference to that of the input and
//returns the absolute value of the difference, or 0 if they are the
//same length
int tappity::length_difference()
{
  int lenght = 0;
  if(reference.size() == input.size()){
    return lenght;
  }else{
    lenght = reference.size() - input.size();
    return lenght;
  }
  return lenght;
}

//Compares the content of the reference to that of the input and
//calculates the accuracy of matching characters. If the two strings
//are identical, accuracy should be 100. However, for each 
//corresponding character that does not match in the same location,
//the percentage of corresponding characters should be returned.
//For example, if the reference and input have 10 letters and the input
//matches 8 of the corresponding reference characters, the function 
//should return 80. When input does not have the same number of
//characters as the reference, the accuracy should represent the percent
//of matching characters between the shorter and longer strings. For
//example, if one string has 8 characters matching the corresponding
//locations in another string that has 16 characters, the accuracy is 50.
double tappity::accuracy()
{
  double acc = 0;
  int diff = length_difference();
  int count = 0;
  if(diff == 0){
    for(int i = 0; i < input.size(); i++){
      if(input[i] == reference[i]){
        count++;
      }
    }
    acc = count/(input.size());
  }else{
    int minimum = min(input.size(), reference.size());
    for(int i = 0; i < minimum; i++){
      if(input[i] == reference[i]){
        count++;
      }
    }
    acc = count/(reference.size());
  }
  return acc * 100;
}
