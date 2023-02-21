#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("maggio.txt");
    ofstream out("output.txt");

    string riga;
    string rigaVuota = "";
    int i = 1;

    while (getline(in, riga))
    {
        if (riga == "")
        {
            out << endl;
        }
        else if (i < 10)
        {
            out << i << "   - " << riga << endl;
            i++;
        }
        else if (i < 100)
        {
            out << i << "  - " << riga << endl;
            i++;
        }
        else
        {
            out << i << " - " << riga << endl;
            i++;
        }
        
    }

    in.close();
    out.close();
}