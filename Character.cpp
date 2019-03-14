//
//  Character.cpp
//  Midterm
//
//  Created by Emmanuel Idehen on 3/7/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include "Character.h"
using namespace std;


Character::Character()
{
    word = " ";
    
}
Character::Character(std::string z)
{
    word = z;
    
}

string Character::properword(string newword)
{
    
    string newString;
    
    for(int i = 0; i < newword.length(); i++)
    {
        if((newword[i] >= 97 && newword[i] < 123) && (i == 0))
        {
            
            newword[i] = newword[i] - 32;
        }
        
        
        newString += newword[i];
    }
    
    return newString;
    
}
string Character::uppercase(string upper)
{
    
    string newString;
    
    for(int i = 0; i < upper.length(); i++)
    {
       
        if(upper[i] >= 97 && upper[i] < 123)
        {
            if (upper[i] < 97 && upper[i] > 123)
            {
                upper[i] = upper[i] - 32;
            }else
            upper[i] = upper[i] - 32;
            
        }
        //        else if ((newString[i] <= 97 && newString[i] > 123) && (i == 1))
        //        {
        //            cout<<endl;
        //
        //        }
        newString += upper[i];
    }
    
    return newString;
    
    
}
Character::~Character()
{
    
    
    
}

