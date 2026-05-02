#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {

    ifstream file("article.txt");

    if (!file) {
        cout << "File not found!" << endl;
        return 1;
    }

    ofstream report("report.txt");

    string line, word;

    int charCount = 0;
    int wordCount = 0;
    int lineCount = 0;
    int punctuationCount = 0;

    while (getline(file, line)) {

        lineCount++;

        // character count (including spaces)
        charCount += line.length();

        // punctuation count
        for (char ch : line) {
            if ((ch >= '!' && ch <= '/') ||
                (ch >= ':' && ch <= '@') ||
                (ch >= '[' && ch <= '\'') ||
                (ch >= '{' && ch <= '~')) {
                punctuationCount++;
            }
        }

        // word count using istringstream
        istringstream ss(line);
        while (ss >> word) {
            wordCount++;
        }
    }

    file.close();

    report << "ARTICLE ANALYSIS REPORT\n";
    report << "------------------------\n";
    report << "Total Characters: " << charCount << endl;
    report << "Total Words: " << wordCount << endl;
    report << "Total Lines: " << lineCount << endl;
    report << "Punctuation Marks: " << punctuationCount << endl;

    report.close();

    cout << "Report generated successfully!" << endl;

    return 0;
}
