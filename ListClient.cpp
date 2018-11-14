#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

 //Do some stuff with L1, L2, ...
 // ...

L1.insert(1,1);
L1.insert(2,2);
L1.insert(3,3);
L1.insert(4,4);
L1.remove(1);
cout<< L1.get(3);
cout<< L1.size();
L1.clear();

L2.insert(12,1);
L2.insert(10,1);
L2.insert(500,1);
L2.insert(52,1);
L2.insert(49,1);
L2.remove(4);
cout<< L2.get(5);
cout<< L2.size();
L2.clear();


}
