#include<bits/stdc++.h>
using namespace std;

string NAME_SYSTEM = "__name_system.txt"; // all name of file
string NAME, CUR_NAME, Info, LINK, noname;

int main() {
    ifstream cnamesys(NAME_SYSTEM.c_str(), ios::in);
    cnamesys >> CUR_NAME >> Info >> noname >> noname >> noname >> LINK;
    cnamesys.close();

    string endfile[] = {".cpp", (CUR_NAME + ".cpp").c_str(), 
                        ".exe", (CUR_NAME + ".exe").c_str(), 
                        ".inp", ".out", ".ans"};

    ifstream cinfo(Info.c_str(), ios::in);
    cinfo >> NAME; CUR_NAME = NAME + CUR_NAME;
    cinfo.close();

    for (string s : endfile) {
        system(("DEL " + NAME + s).c_str());
    }
    system(("RD /s /q " + LINK + "\\" + NAME).c_str());

    return 0;
}