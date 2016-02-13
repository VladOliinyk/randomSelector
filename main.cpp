#include <iostream>
#include <vector>
#include <cstring>
#include <cstdlib>

using namespace std;
vector<string> dataBase;

void filling();
void printVectorContent();
int getSelectionKey();
string getOneElementRandomly();

int main()
{
    cout << " Hi!" << endl;
    while (true) {
        cout << " Please enter some data into dataBase (by one word in string)." << endl;
        cout << " Write \".\" to finish entering." << endl << endl;

        filling();
        printVectorContent();

        string myElement = getOneElementRandomly();
        cout << endl << " Your element is: ";
        cout << myElement << endl;
        cout << endl << " Would you like to continue? (y/n)" << endl;

        char a = '0';
        cout << "> ";
        cin >> a;
        while (( a != 'n' ) && (a != 'y')) {
            cout << " Please use '";
            cout << "y";
            cout << "' or '";
            cout << "n";
            cout << "' to select the action." << endl;
            cout << "> ";
            cin >> a;
        }
        if ( (a == 'N') || (a == 'n') ) {
            cout << " Okay! Nice to meet you." << endl;
            break;
        } else {
            system("cls");
            dataBase.clear();
        }
    }
    system("pause");
    return 0;
}

void filling() {
    {
        string myStr;
        cout << "> ";
        cin >> myStr;
        while (true) {
            dataBase.insert(dataBase.end(), myStr);
            cout << "> ";
            cin >> myStr;
            if (myStr[0] == '.') {
                break;
            }
        }
    }
}

void printVectorContent() {
    cout << endl << " Data base content:" << endl;
    for (int i = 0; i < (int) dataBase.size(); i++) {

        cout << " Element " << i << ": ";
        cout << dataBase.at(i) << endl;
    }
}

string getOneElementRandomly() {
    int k = rand() % dataBase.size() + 0;
    return dataBase.at(k);
}
