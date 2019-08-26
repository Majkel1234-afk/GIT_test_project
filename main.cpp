#include <iostream>
#include <string>

std::string readMe()
{
  return std::string{"Czesc tu brancha 'someKind..' \nRozwijamy projekt po swojemu!"};
}

using namespace std;
//'fix wrzucany na someKindOfBranch'
int main()
{
  std::cout << readMe() << std::endl;
  //..ciag dalszy prac..
  return 0;
}

