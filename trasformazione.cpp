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
        if ( riga != rigaVuota)
        {
            out << i << " - " << riga << endl;
            i++;
        }
    }

    in.close();
    out.close();
}