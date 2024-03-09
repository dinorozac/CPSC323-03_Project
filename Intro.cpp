/*
*
*   Title: Intro.cpp
*   Author: Dino Rozac
*   Class: CPSC 323-03
*   Date: 3/8/2024
*   Purpose: Design an intro for the project that is simple yet visually appealing.   
*
*/
#include <iostream>

int main() {

    // Prints out WELCOME sign

    std::cout << "x--------------------------------------------------------------------x" << std::endl;
    std::cout << "*\n*\n"
              << "*	__          __  _                          "
              << "\n*	\\ \\        / / | |                         "
              << "\n* 	 \\ \\  /\\  / /__| | ___ ___  _ __ ___   ___ "
              << "\n*  	  \\ \\/  \\/ / _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\ "
              << "\n*   	   \\  /\\  /  __/ | (_| (_) | | | | | |  __/"
              << "\n*    	    \\/  \\/ \\___|_|\\___\\___/|_| |_| |_|\\___|"
              << "\n*\n*\n";
    std::cout << "x--------------------------------------------------------------------x" << std::endl;

    // Prints out Summary of Program

    std::cout << "\n* Project Title: DT MINI C++ CODE TOKENIZER!"
              << "\n\n* Class: CPSC 323-03"
              << "\n\n* Date of Last Update: 3/8/2024"
              << "\n\n* Purpose: Purpose: Takes a text file containing C++ Code,"
              << "\n\t\t    eliminates whitespace/comments and" 
              << "\n\t\t    produces both cleared code and token table."
              << "\n\n* Authors: Group #11 - Thomas Lam & Dino Rozac\n" << std::endl;
    std::cout << "x--------------------------------------------------------------------x\n" << std::endl;


    return 0;

}