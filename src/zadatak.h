#ifndef ZADATAK_IS_INCLUDED
#define ZADATAK_IS_INCLUDED

#include <vector>
#include <string>
#include <stdexcept>
#include <iostream>
#include <utility>
#include <functional>
#include <iterator>
#include <algorithm>
#include <list>
#include <vector>
#include <complex>
using namespace std;

// Zadatak 1
void print_permutation(std::string str);


// Zadatak 2
template <typename InputIt1, typename InputIt2, typename OutputIt>
void zip(InputIt1 beg1, InputIt1  end1, InputIt2 beg2, InputIt2 end2, OutputIt beg3)
{
  // VAŠ KOD DOLAZI OVDJE
  do{
    *beg3=std::make_pair(*beg1, *beg2);
    beg3 = std::next(beg3);
    beg1 = std::next(beg1);
    beg2 = std::next(beg2);
  } while(beg1!=end1 && beg2!=end2);
  //throw std::runtime_error("Zadatak nije riješen.");
}

template <typename T, typename S>
std::vector<std::pair<T,S>>
zip(std::vector<T> const & vec1, std::vector<S> const & vec2)
{
  // VAŠ KOD DOLAZI OVDJE
  int d1 = std::distance(vec1.begin(), vec1.end());
  int d2 = std::distance(vec2.begin(), vec2.end());
  if(d1<d2){
    std::vector<std::pair<T,S>> v(d1);
    zip(vec1.begin(), vec1.end(), vec2.begin(), vec2.end() , v.begin());
    return v;
  }
  else{
    std::vector<std::pair<T,S>> v(d2);
    zip(vec1.begin(), vec1.end(), vec2.begin(), vec2.end() , v.begin());
    return v;
  }
  //cout << *vec2.begin() << " " << *std::next(vec2.begin()) << " " << *std::next(std::next(vec2.begin())) << endl; ->radi
  //cout << *vec2.begin() << " " << *vec2.end() << endl;// ->vec2.end() nije NULL
  //throw std::runtime_error("Zadatak nije riješen.");
}


// Zadatak 3
void normalize_phone_number(std::vector<std::string> & vec_str);

#endif
