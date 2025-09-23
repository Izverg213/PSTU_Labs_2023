#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
void copySingleWordLines(const string& sourceFile, const string& destinationFile) {
    ifstream inFile(sourceFile);
    ofstream outFile(destinationFile);

    string line;
    while (getline(inFile, line)) {
        istringstream iss(line);
        string word;
        if (iss >> word && !(iss >> word)) {
            outFile << line << '\n';
        }
    }

    inFile.close();
    outFile.close();
}

string findLongestWord(const string& fileName) {
    ifstream inFile(fileName);
    string word, longestWord;

    while (inFile >> word) {
        if (word.size() > longestWord.size()) {
            longestWord = word;
        }
    }

    inFile.close();
    return longestWord;
}

int main() {
    setlocale(LC_ALL, "RU");

    const string sourceFile = "F1.txt";
    const string destinationFile = "F2.txt";

    copySingleWordLines(sourceFile, destinationFile);

    string longestWord = findLongestWord(destinationFile);
    cout << "Самое длинное слово в файле " << destinationFile << ": " << longestWord << std::endl;

    return 0;
}
