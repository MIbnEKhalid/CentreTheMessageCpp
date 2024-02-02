#include <conio.h>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <windows.h>

using namespace std;

void CentredMessage(const string& textMessage)
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int rows;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    rows = csbi.srWindow.Right - csbi.srWindow.Left + 1;

    istringstream iss(textMessage);
    string line;

    while (getline(iss, line)) 
    {
        if (line.size() <= rows) 
        {
            int startPosition = (rows - line.size()) / 2;
            cout << setw(startPosition + line.size()) << line << endl;
        } 
          
        else 
        {
            // Split the line into two parts for better centering
            size_t middle = line.size() / 2;
            string part1 = line.substr(0, middle);
            string part2 = line.substr(middle);
            int startPositionPart1 = (rows - part1.size()) / 2;
            int startPositionPart2 = (rows - part2.size()) / 2;
            cout << setw(startPositionPart1 + part1.size()) << part1 << endl;
            cout << setw(startPositionPart2 + part2.size()) << part2 << endl;
        }
    }
}

int main()
{
    system("pause");

    CentredMessage("This is a long message that needs to be centered in the console window.\nNew line.\n");
    CentredMessage("In the vast expanse of the cosmos, stars twinkle like ancient storytellers, weaving tales of cosmic wonders and celestial dance, while galaxies silently guard the secrets of the universe in the tapestry of the cosmic fabric.");

    return 0;
}
