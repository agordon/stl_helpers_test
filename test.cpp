#include <iostream>
#include <string>

#include "stl_helpers/src/std_basename.h"
#include "stl_helpers/src/std_sprintf.h"

using namespace std;

int main ( int argc, char* argv[] )
{
	cout << std_sprintf("Hello %s\n", "world");
	return 0;
}
