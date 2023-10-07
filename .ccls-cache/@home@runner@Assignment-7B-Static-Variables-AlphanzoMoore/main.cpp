//Alphanzo Moore
//CIS-5 Online
//October 7, 2023
//Assignment 7B: Static Variables

// Reference Parameters
// And a review of void functions, value returning functions
// and value parameters
// Static Variable Demo
// lifetime and scope
// Lifetime = how long the variable is 'active' in memory
// Scope = where the variable can be 'seen' or

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void enemyHealth(int damage);

int main() 
{
  int min = 1, max = 20, num;
  int seed = time(0);
  //srand(seed);

  enemyHealth(5);
  enemyHealth(10);

  num = min + rand() % max; // get random number
  cout << "num = " << num << endl;
  enemyHealth(num);

  system("pause");
  return 0;
}

void enemyHealth(int dmg)
{
  static int eHealth = 100; // local variable, scope
  // lifetime of a variable

  eHealth = eHealth - dmg;

  cout << eHealth << endl;
}