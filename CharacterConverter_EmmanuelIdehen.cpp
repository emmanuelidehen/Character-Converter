//
//  main.cpp
//  Midterm
//
//  Created by Emmanuel Idehen on 3/7/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//
/*
 Create a Charconverter class that performs various operations on strings. It should have
 the following two public member functions to start with. Your instructor may ask you to
 add additional functions to the class.
 • The uppercase member function accepts a string and returns a copy of it with all
 lowercase letters converted to uppercase. If a character is already uppercase, or is not
 a letter, it should be left alone.
 • The properwords member function accepts a string of words separated by spaces
 and returns a copy of it with the first letter of each word converted to uppercase.
 Write a simple program that uses the class. It should prompt the user to input a string.
 Then it should call the properWor ds function and display the resulting string. Finally, it
 should call the uppercase function and display this resulting string. The program
 should loop to allow additional strings to be converted and displayed until the user
 chooses to quit.
 
 
 
 psuedo code
 
 ask user for string of letters
 using the ASCII code for the alphabelt
 compute matching letters and output !
 
 
 */
#include <iostream>
#include <string>
#include "Character.h"
using namespace std;
int main()
{
    Character x(" ");
    string word(" "),
    propper(" "),
    cased(" ");
    char y = 'y';
    
    //comeback:
    
    cout << "\nEnter a word and I will convert it to uppper case and the right format  "<<endl;
    cin >> word;
    
    propper = x.properword(word);
    cased = x.uppercase(word);
    
    cout <<"\nThe proper format for "<<word << " is "<< propper;
    cout <<"\nThe upper case of "<<word << " is "<< cased<<"\n"<<endl;
    cout<<"\nif you wish to continue press y "<<endl;
    cin >> y;
    //} goto comeback;
    if(y == 'y')
    {
        main();
    }else
    {
        
        return 0;
    }
    
    
    
    
    return 0;
}

/*
 test case :
 
 
 
 
 Enter a word and I will convert it to uppper case and the right format
 emm
 
 The proper format for emm is Emm
 The upper case of emm is EMM
 
 
 if you wish to continue press y
 y
 
 Enter a word and I will convert it to uppper case and the right format
 john
 
 The proper format for john is John
 The upper case of john is JOHN
 
 
 if you wish to continue press y
 y
 
 Enter a word and I will convert it to uppper case and the right format
 mat
 
 The proper format for mat is Mat
 The upper case of mat is MAT
 
 
 if you wish to continue press y
 o
 Program ended with exit code: 0
 
 
 
 
 
 */
















