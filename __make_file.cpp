#include<bits/stdc++.h>
using namespace std;

string NAME_SYSTEM = "__name_system.txt"; // all name of file
string NAME, CUR_NAME, Info;

int main() {
    ifstream cnamesys(NAME_SYSTEM.c_str(), ios::in);
    cnamesys >> CUR_NAME >> Info;
    cnamesys.close();

    ifstream cinfo(Info.c_str(), ios::in);
    cinfo >> NAME; CUR_NAME = NAME + CUR_NAME;
    cinfo.close();

    ofstream Main((NAME + ".cpp").c_str(), ios::out);
    ofstream Check((CUR_NAME + ".cpp").c_str(), ios::out);

    Main.close();
    Check.close();

    return 0;
}