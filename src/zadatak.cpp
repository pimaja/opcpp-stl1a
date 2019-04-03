#include "zadatak.h"

// Ubaciti potrebne include datoteke
#include <string>
#include <iostream>
using namespace std;

void print_permutation(std::string str){
    // VAŠ KOD DOLAZI OVDJE
    // Function to print permutations of string str
    // using next_permute()
      // Sort the string in lexicographically
      // ascennding order
      sort(str.begin(), str.end());

      // Keep printing next permutation while there
      // is next permutation
      do {
        cout << str << endl;
      } while (next_permutation(str.begin(), str.end()));
  //throw std::runtime_error("Zadatak nije riješen.");
}

// Ovdje dolazi vaš kod za Zadatak 1 i Zadatak 3.
void normalize_phone_number(std::vector<std::string> & vec_str){
    // VAŠ KOD DOLAZI OVDJE
    std::vector<std::string>::iterator it;
    for(it=vec_str.begin(); it!=vec_str.end(); ++it){
      if(it->size()==7) it->insert(0,1,'1');
      if(it->front()=='0') it->erase(0,1);
      if(it->front()!='+') it->insert(0,1,'+');
      std::string::iterator sit = std::remove(it->begin(), it->end(), ' ');
      it->erase(sit, it->end());
      sit=it->begin(); ++sit;
      if(*sit!='3')
        it->insert(1,"385");

      cout << *it << endl;
    }
  //throw std::runtime_error("Zadatak nije riješen.");
}
