// http://www.cplusplus.com/reference/cctype/

#include <iostream>
#include <ctype.h>
#include <string>
using namespace std;
int main()
{
    
    char Text[] = "The Test names";
    int i=0;
    while (Text[i])
    {
        Text[i] = toupper(Text[i]);
        cout << Text[i];
        i++;
    }
    
    cout << "\n";
    string sName = "Prenom du String";
    for (int x = 0; x < sName.size(); x++)
    {
        sName[x] = tolower(sName[x]);
        cout //<< "("<<x<<")"
            << sName[x];
    }
    return 0;
}