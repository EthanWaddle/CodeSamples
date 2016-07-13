//make your own vector class

/*
myVector


needs to be able to handle ints, doubles, and it needs to have .at, .push, and .pop

*/ 

#include "myVector.h"
#include <iostream>
using namespace std;
int main()
{
 myVector<int> F1;
 

 F1.push(1);
 F1.push(1);
 F1.push(1);
 cout<<F1.pop();
 }
