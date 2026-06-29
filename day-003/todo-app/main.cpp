#include <iostream>

using namespace std;

int ShowMenu();

int main(){
    ShowMenu();
    return 0;
}


/// Methods
int ShowMenu(){
    cout << "1. Add a todo"                 << endl;
    cout << "2. Show all todos"             << endl;
    cout << "3. Mark a todo as done"        << endl;
    cout << "4. Delete a todo"              << endl;
    cout << "5. Save todos to a file"       << endl;
    cout << "6. Load todos from a file"     << endl;
    cout << "7. Exit"                       << endl << endl;

    int option = 0;

    cout << "Enter an option: ";
    cin >> option;

    return option;
}