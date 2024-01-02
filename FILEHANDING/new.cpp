#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Write to file
    string name = "mayur chavda";
    ofstream Hy("mayur.txt");

    if (!Hy.is_open()) {
        cerr << "Error opening output file." << endl;
        return 1;
    }

    Hy << name;
    Hy.close(); // Close the output file.

    // Read from file
    string HYy2;
    ifstream hy2("mayur.txt");

    getline(hy2, HYy2);
    hy2.close(); // Close the input file.

    cout << HYy2;

    return 0;
}
