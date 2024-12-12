#include <iostream>
#include <iostream>
#include <string>
using namespace std;

class Jedi {
public:
    string name;
    int age;
    string lightsaberColor;

    Jedi() {
        name = "Unknown";
        age = 0;
        rank = "Brotha";
        lightsaberColor = "Blue";
        darkside = false;
    }

    Jedi(string name, int age, string lightsaberColor, bool darkside) {
        cout << "Parameterized constructor called for " << name << endl;
    }

    void set_rank(string r) {
        r = rank;
        if (rank == "Brotha" || rank == "Ace" || rank == "Master") {
            char assign1;
            cout << "Would you like to change your rank" << endl;
            cout << "Type (y) for yes, Type (n) for no" << endl;
            cin >> assign1;
            if (assign1 == 'y') {
                char assign2;
                cout << "What rank would you like to replace this one with?" << endl;
                cout << "(a) Brotha" << endl <<
                        "(b) Ace" << endl <<
                        "(c) Master" << endl;
                cin >> assign2;
                switch (assign2) {
                    case 'a':
                        r = "Brotha";
                        cout << "Your new rank is " << r << endl;
                        break;
                    case 'b':
                        r = "Ace";
                        cout << "Your new rank is " << r << endl;
                        break;
                    case 'c':
                        r = "Master";
                        cout << "Your new rank is " << r << endl;
                        break;
                }
            } else if (assign1 == 'n') {
                rank = r;
            } else {
                cout << "Invalid input" << endl;
            }
        }
        rank = r;
    }

    string get_rank() {
        return rank;
    }

    bool set_darkside(bool ds) {
        char assign3;
        cout << "Would you like to change your side" << endl;
        cout << "Type (y) for yes, Type (n) for no" << endl;
        cin >> assign3;
        if (assign3 == 'y') {
            char assign2;
            cout << "What side would you like to replace this one with?" << endl;
            cout << "(a) Dark" << endl <<
                    "(b) Light" << endl;
            cin >> assign2;
            switch (assign2) {
                case 'a':
                    darkside = true;
                    cout << "You're now in the Dark side" << endl;
                    break;
                case 'b':
                    darkside = false;
                    cout << "You're now in the Light side" << endl;
                    break;
            }
        } else {
            return darkside;
        }
    }

    bool get_darkside() {
        return darkside;
    }

    void print_info() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Rank: " << rank << endl;
        cout << "Lightsaber Color: " << lightsaberColor << endl;
        if (darkside == true) {
            cout << "Dark Side: Yes " << endl;
        } else {
            cout << "Dark Side: No " << endl;
        }
    }

private:
    string rank;
    bool darkside;
};

int main(void) {
    Jedi student1;
    student1.name = "Luke Skywalker";
    student1.age = 35;
    student1.lightsaberColor = "Green";
    student1.get_rank();
    student1.get_darkside();
    student1.print_info();
    student1.set_darkside(true);
    student1.set_rank("r");
    student1.print_info();

    Jedi student2;
    student2.name = "Anakin Skywalker";
    student2.age = 26;
    student2.lightsaberColor = "Blue";
    student2.get_darkside();
    student2.get_rank();
    student2.print_info();
    student2.set_darkside(true);
    student2.set_rank("r");
    student2.print_info();
}
