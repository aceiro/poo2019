#include <iostream>
#include <vector>
using namespace std;
 
int main() {

   // create a vector to store int
   vector<int> vec; 
   int i;

   // display the original size of vec
   cout << "vector size = " << vec.size() << endl;

   // push 5 values into the vector
   for(i = 0; i < 5; i++) {
      vec.push_back(i);
   }

   // display extended size of vec
   cout << "extended vector size = " << vec.size() << endl;

   // access 5 values from the vector
   for(i = 0; i < 5; i++) {
      cout << "value of vec [" << i << "] = " << vec[i] << endl;
   }

   // use iterator to access the values
   vector<int>::iterator v = vec.begin();
   while( v != vec.end()) {
      cout << "value of v = " << *v << endl;
      v++;
   }

   return 0;
}

// Fonte do codigo: https://www.tutorialspoint.com/cplusplus/cpp_stl_tutorial.htm
// STL faz o uso de modelos para atingir seus resultados. Ao fazer isso obtem-se polimorfismo no tempo de compilação, o que é frequentemente mais eficiente que o polimorfismo tradicional. Os compiladores de C++ modernos são ajustados para minimizar o impacto das penalidades decorrentes do grande uso do STL.