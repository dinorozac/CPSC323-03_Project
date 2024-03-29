/*
*
*   Title: [ADD TITLE HERE OF FILE]
*   Author: [ADD NAME OF PERSON WORKING ON CODE]
*   Collaborators: [IF NEED HELP FROM GROUP MEMBER WITH CODE, THE HELPER'S NAME GOES HERE, OTHERWISE LEAVE BLANK]
*   Class: CPSC 323-03
*   Date: [ADD DATE THAT BEGAN WORKING ON TASK]
*   Purpose: Read data from an input file  
*
*/

// Your code goes here
#include <iostream>
#include <fstream>
#include <sstream>
#include <cctype>

std::string processCode(const std::string& code) {
    std::string result;
    bool inComment = false;

    std::istringstream lineStream(code);
    std::string line;

    while (std::getline(lineStream, line, '\n')) {
        // Skip empty lines
        if (line.empty()) {
            continue;
        }
        // Skip comment lines
        if (line.find('#') != std::string::npos) {
            continue;
        }
        // Process each character in the line to remove excess spaces
        bool lastCharWasSpace = false;
        for (char c : line) {
            if (std::isspace(c)) {
                if (!lastCharWasSpace) {
                    result += ' ';  // Add a single space
                    lastCharWasSpace = true;
                }
            } else {
                result += c;
                lastCharWasSpace = false;
            }
        }
        result += '\n';
    }
    return result;
}
int main() {
    // Opens the file
    std::ifstream inputFile("file.txt");
    if (!inputFile.is_open()) {
        std::cerr << "Error opening file.txt" << std::endl;
        return 1; // Exit with an error code
    }
    // Turns file into string
    std::ostringstream contentStream;
    contentStream << inputFile.rdbuf();
    std::string fileContent = contentStream.str();

    // Close file
    inputFile.close();
    
    // Remove excess spaces, comments, and empty lines from the content
    std::string modifiedContent = processCode(fileContent);
    std::cout << modifiedContent;
    return 0; // Exit successfully
}
