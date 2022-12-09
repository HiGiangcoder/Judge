#include <bits/stdc++.h>
#include <time.h>

using namespace std;
typedef long long ll;
typedef long double ld;

string NAME_SYSTEM = "__name_system.txt"; // all name of file
string NAME, CUR_NAME, Info, tmp_file, MAKE_TEST, MAKE_FILE, LINK;
int NTEST, TIME_LIMIT, MODE;

void read_infomation() {
    ifstream cnamesys(NAME_SYSTEM.c_str(), ios::in);
    cnamesys >> CUR_NAME >> Info >> tmp_file >> MAKE_TEST >> MAKE_FILE >> LINK;
    cnamesys.close();

    ifstream info(Info.c_str(), ios::in);
    info >> NAME;
    info >> NTEST;
    info >> TIME_LIMIT;
    info >> MODE;
    info.close();
}

int main() {
    system("color 0a");
    read_infomation(); cout << "-- Read infomation complete! --\n";
    CUR_NAME = NAME + CUR_NAME;
    
	if (system(("g++ " + MAKE_TEST + ".cpp -o " + MAKE_TEST).c_str()) != 0) {
        cout << "- Compiler file " + MAKE_TEST + " failure\n";
        return 0;
    } cout << "- Compiler file " + MAKE_TEST + " successfull!\n";
    
    if (system(("g++ " + NAME + ".cpp -o " + NAME).c_str()) != 0) {
        cout << "- Compiler file " + NAME + " failure\n";
        return 0;
    } cout << "- Compiler file " + NAME + " successfull!\n";
    
    if (system(("g++ " + CUR_NAME + ".cpp -o " + CUR_NAME).c_str()) != 0) {
        cout << "- Compiler file " + CUR_NAME + " failure\n";
        return 0;
    } cout << "- Compiler file " + CUR_NAME + " successfull!\n";    

/*  --------------------------------------------------------- */

    system(("RD /s /q " + LINK + "\\" + NAME).c_str());    
    system(("MD " + LINK + " " + NAME).c_str());

	for (int iTest = 1; iTest <= NTEST; iTest ++) {
        cout << "--------------------------------------------\n\n\n";
        ofstream idx_test(tmp_file.c_str(), ios::out);
        idx_test << iTest;
        idx_test.close();
        ll timerun;
        bool STOP = false;

    	if (system((MAKE_TEST + ".exe").c_str()) != 0) {
            cout << "Run file " + MAKE_TEST + " error\n";
            STOP = true;
        } 
        cout << "Run file " + MAKE_TEST + " successfull!\n";

        timerun = clock();
    	if (system((NAME + ".exe").c_str()) != 0) {
            cout << "Run file " + NAME + " error\n";
            STOP = true;
        }
        ld time_Main = ld(clock() - timerun) / CLOCKS_PER_SEC; 
        cout << "Run file " + NAME + " successfull, time run: " << time_Main << "s\n";

        timerun = clock();
		if (system((CUR_NAME + ".exe").c_str()) != 0) {
            cout << "Run file " + CUR_NAME + " Test error\n";
            STOP = true;
        }
        ld time_Check = ld(clock() - timerun) / CLOCKS_PER_SEC;  
        cout << "Run file " + CUR_NAME + " successfull, time run: " << time_Check << "s\n";

        if (!STOP) {
            if (system(("fc " + NAME + ".out " + NAME + ".ans").c_str()) != 0) {
                cout << "Test " << iTest << ": WRONG!\n";
                STOP = true;
            }
            else {
                cout << "Test " << iTest << ": CORRECT!\n";

                if (MODE == 1 && time_Main * 1000 > TIME_LIMIT) {
                    cout << "--- File " + NAME << " TIME LIMIT EXCEEDED! ---\n";
                    STOP = true;
                }
                else if ((time_Main - time_Check) * 1000 > TIME_LIMIT) {
                    cout << "--- File " + NAME << " TIME LIMIT EXCEEDED! ---\n";
                    STOP = true;
                }
            }
        }

        system(("Copy \"" + NAME + ".inp\" \"" + LINK + "\\" + NAME + "\" /y").c_str());
        system(("Copy \"" + NAME + ".ans\" \"" + LINK + "\\" + NAME + "\" /y").c_str());

        system(("ren \"" + LINK + "\\" + NAME + "\\" + NAME + ".inp \" \"" + to_string(iTest) + ".in\"").c_str());
        system(("ren \"" + LINK + "\\" + NAME + "\\" + NAME + ".ans \" \"" + to_string(iTest) + ".out\"").c_str());
        
        if (STOP) return 0;
    }
    return 0;
}