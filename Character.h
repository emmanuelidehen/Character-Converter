//
//  Character.h
//  Midterm
//
//  Created by Emmanuel Idehen on 3/7/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//
#include <string>
#ifndef Character_h
#define Character_h

class Character{
private:
    std:: string  word;
    
public:
    Character();
    std::string uppercase(std::string x);
    std::string properword(std::string y);
    Character(std::string z);
    ~Character();
};



#endif /* Character_h */
