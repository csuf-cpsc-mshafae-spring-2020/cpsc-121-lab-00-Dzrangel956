// David Rangel
// CPSC 121-03
// Dzrangel956@csu.fullerton.edu

#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
  if (argc<3)
  {
    cout << "Too few arguments, please enter <Word> followed by number of times to print.\n";
    return 1;
  }

  string word =argv[1];
  int num = stoi (argv[2]);
  for (int i=0; i < num; i++)
  {
  cout << "Hello "<<word << endl;
}
  return 0;
}
