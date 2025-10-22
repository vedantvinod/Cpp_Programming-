#include <iostream>
#include <string>

using namespace std;

class Player {
public:
    string name;

    // A shared variable that CAN be changed (like a scoreboard)
    inline static int playerCount = 0;

    // A shared variable that CANNOT be changed (like a rulebook)
    inline static const int MAX_PLAYERS = 10;

    // This is the constructor
    Player(string newName) {
        if (playerCount < MAX_PLAYERS) {
            name = newName;
            playerCount++; // Increment the shared count
        } else {
            name = "Observer";
            cout << "-> Cannot add new player. Maximum players reached." << name<<'\n';
        }
    }
};

int main() {
    cout << "--- Game Setup ---" << endl;
    cout << "Maximum players allowed: " << Player::MAX_PLAYERS << endl;
    cout << "Initial player count: " << Player::playerCount << endl << endl;

    cout << "--- Creating 11 Players ---" << endl;
    // We "call the constructor" each time we create a Player object.
    Player p1("Alice");
    Player p2("Bob");
    Player p3("Charlie");
    Player p4("David");
    Player p5("Eve");
    Player p6("Frank");
    Player p7("Grace");
    Player p8("Heidi");
    Player p9("Ivan");
    Player p10("Judy"); // The 10th player is created, playerCount is now 10.

    // This 11th call will trigger the 'else' condition in the constructor.
    Player p11("Mallory");

    cout << "\n--- Final Status ---" << endl;
    cout << "Final player count: " << Player::playerCount << endl;

    return 0;
}