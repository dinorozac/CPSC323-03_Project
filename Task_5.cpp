/*
*
*   Title: Task_5.cpp
*   Author: Dino Rozac
*   Class: CPSC 323-03
*   Date: 3/8/2024
*   Purpose: Take in a count and list of lexemes and provide an output in tabular form.
*
*/

#include <iostream>
#include <iomanip>
#include <string>

// Function Prototypes

void Table (int k, std::string k_list[], int i, std::string i_list[],
            int l, std::string l_list[], int o, std::string o_list[],
            int s, std::string s_list[]);

// Main program to call the tabular function. 

int main() {

    // Examples of lexeme info has been generated here

    int keyword_count = 3;                              
    std::string k_list [3] = {"int", "for", "cout"};
    int identifier_count = 2;
    std::string i_list [2] = {"var_1", "var_2"};    
    int literal_count = 3;
    std::string l_list [3] = {"2", "4", "6"};
    int operator_count = 3;
    std::string o_list [3] = {"+", "+", "-"};
    int separator_count = 5;
    std::string s_list [5] = {"This", "is", "a", "temporary", "test"};

    Table (keyword_count, k_list, identifier_count, i_list, literal_count, l_list, 
          operator_count, o_list, separator_count, s_list);

    return 0;

}

// Tabular function to take in input and provide formated output 

void Table (int key, std::string k_list[], int id, std::string i_list[], int lit, std::string l_list[],
            int oper, std::string o_list[], int sepa, std::string s_list[]) {

    // Array to hold titles of lexeme categories and passed values

    std::string Titles [5] = {"Keyword", "Identifier", "Literal", "Operator", "Separator"};
    int Tokens [5] = {key, id, lit, oper, sepa};
    std::string* Point [5]= {k_list, i_list, l_list, o_list, s_list};

    // Output table title and table

    std::cout << "\n----------------------------------------------------------------------" << std::endl;
    std::cout << "\n* Tokenization of Code: \n" << std::endl;

    std::cout << "\nx-----------------------------------------------------------------------------------------x"
              << "\n| Token      | Count | List                                                               |"
              << "\n|------------|----------------------------------------------------------------------------x";
    
    for (int i = 0; i <= 4; i++) {

        std::cout << std::left << "\n| " << std::setw(11) << Titles[i] << "|  " << std::setw(5) << Tokens[i] << "| "; 
        for (int k = 0; k < Tokens[i]; k++){

            std::cout << Point[i][k] << " ";

        }

    }

    std::cout << "\nx-----------------------------------------------------------------------------------------x";

}