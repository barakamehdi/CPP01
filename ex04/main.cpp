#include <iostream>
#include <fstream>
#include <string>

void replaceInLine(std::string &line, const std::string &search, const std::string &replace) {
    if (search.empty())
        return;
        
    size_t position = 0;

    while ((position = line.find(search, position)) != std::string::npos) {

        line.erase(position, search.length());
        line.insert(position, replace);
        position += replace.length();
    }
}

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <search_string> <replace_string>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string searchStr = argv[2];
    std::string replaceStr = argv[3];

    if (filename.empty() || searchStr.empty()) {
        std::cerr << "Error: Filename and search string cannot be empty" << std::endl;
        return 1;
    }

    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open()) {
        std::cerr << "Error: Cannot open file '" << filename << "'" << std::endl;
        return 1;
    }

    std::string outputFilename = filename + ".replace";
    std::ofstream outputFile(outputFilename.c_str());
    if (!outputFile.is_open()) {
        std::cerr << "Error: Cannot create output file '" << outputFilename << "'" << std::endl;
        inputFile.close();
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        replaceInLine(line, searchStr, replaceStr);
        outputFile << line;

        if (!inputFile.eof()) {
            outputFile << std::endl;
        }
    }
    
    inputFile.close();
    outputFile.close();
    
    std::cout << "Replacement completed. Output saved to '" << outputFilename << "'" << std::endl;
    return 0;
}