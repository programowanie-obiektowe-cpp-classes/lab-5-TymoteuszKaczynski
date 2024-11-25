#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    // Twoja implementacja tutaj
    std::vector<char> result;
      for (auto& human : people) {
              human.birthday();     
        if (human.isMonster()) {
            result.push_back('n');
        } else {
            result.push_back('y');
        }
    }
     std::reverse(result.begin(), result.end());
    return result;
}
  

   
  


   

    