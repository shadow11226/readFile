#include "iostream"
//#include <gtest/gtest.h>
#include "CSimpleReader.hpp"

using namespace std;

int main()
{
   // usual test
   cout << NFile::getFile("main.cpp", false);

   cin.get();
   return 0;
} 