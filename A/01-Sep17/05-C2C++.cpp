#include <iostream>
using namespace std;
int main() {
   char name[128];
   cout << "What is your name? ";
   // cin >> name;
   // cin.getline(name,127, ',');
   cin.getline(name, 127);
   cout << "Hello " << name << " , welcome to oop" << 244 << " class!" << endl;
   return 0;
}
