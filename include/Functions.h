
#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include <string>
#include <iostream>

void strReplace(std::string& str, const std::string& oldStr, const std::string& newStr);


void FaceLandmarkDetect(std::string img);

bool Reconstruct();
void delay(int second);

#endif