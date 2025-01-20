#include <iostream>
#include <string>
using namespace std;
#include "Charac.h"
#include "Map.h"

int main() {
  cout << "start testing !" << endl;
  int id = 0;
  string filename = "data.txt";
  Charac C = Charac(id, filename);
  cout << C;
  Map M = Map("Map_1", 3, 3);
  cout << M;
  return 0;
} 