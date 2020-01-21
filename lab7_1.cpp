#include <iostream>
using namespace std;

int main()
{
  char rank;
  cout << "Input your rank:";
  cin >> rank;
  
     if(rank=='S')goto p1;
     if(rank=='A')goto p2;
     if(rank=='B')goto p3;
     if(rank=='C')goto p4;
     if(rank=='D')goto p5;
  
     p1: cout << "You have received Super Ultra Rare Unit!!!\n";
     p2: cout << "You have received 5 gems.\n";
     p3: cout << "You have received 1 gems.\n";
     p4: cout << "You have received 2000 coins.\n";
     p5: cout << "You have received very KAK items.\n";
  return 0;
}
