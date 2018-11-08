#include <iostream>
#include <stdexcept>//used to be able to "throw" exceptions
using namespace std;

#ifndef LIST_H
#define LIST_H

class List //begin List definition 
{
  private:
    class Node;//forward declaration (defined in the implementation file)
    
    Node* frontPtr = nullptr;
    int num_elements = 0;
    
  public:
     void insert(int element, int k);//insert element at location k
     void remove(int k);//remove element at location k
     int get(int k);//view element at kth position
     int size();//return the number of elements in the List
     void clear();
     
     /** MISSING OPERATIONS */
     //... fill in ....
    ~List();//destructor
};//end List definition

#endif
