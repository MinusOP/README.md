%%writefile main.cpp

#include <iostream>
#include <string>

using namespace std;

struct Node {
    string text;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void addNode(string text) {
        Node* newNode = new Node;
        newNode->text = text;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void displayChoices() {
        int choiceNumber = 1;
        Node* current = head;
        while (current != nullptr) {
            cout << choiceNumber << ". " << current->text << endl;
            current = current->next;
            choiceNumber++;
        }
    }

    int getPlayerChoice() {
        int choice;
        cin >> choice;

        int choiceNumber = 1;
        Node* current = head;
        while (current != nullptr) {
            if (choice == choiceNumber) {
                return choice;
            }
            current = current->next;
            choiceNumber++;
        }

        return -1; // Invalid choice
    }

    void deleteNode(int position) {
        if (head == nullptr) {
            return;
        }

        Node* temp = head;

        if (position == 1) {
            head = head->next;
            delete temp;
            return;
        }

        Node* previous = nullptr;
        int count = 1;

        while (temp != nullptr && count < position) {
            previous = temp;
            temp = temp->next;
            count++;
        }

        if (temp == nullptr) {
            return;
        }

        previous->next = temp->next;
        delete temp;
    }
};

int main() {
	char choose;
    cout << " \n";
    cout << " \n";
    cout << " _             _   _  _  _   _           _  _  _     _  _  _      _           _   _  _  _    _  _  _    _  _  _       _         _  _  _     _  _  _  _  _  _    _  _  _  _  _ _  _ _   _  _  _   _  _  _   _  _  _    _      _   _ _  _ _   _  _  _\n";
    cout << "(_)           (_) (_)(_)(_) (_)       _ (_)(_)(_)  _(_)(_)(_)_   (_) _     _ (_) (_)(_)(_)  (_)(_)(_) _(_)(_)(_)_    (_)      _(_)(_)(_)_  (_)(_)(_)(_)(_)(_)  (_)(_)(_)(_)(_(_)(_)_) (_)(_)(_) (_)(_)(_) (_)(_)(_)  (_)    (_) (_(_)(_)_) (_)(_)(_) \n";   
    cout << "(_)     _     (_) (_) _     (_)      (_)          (_)        (_) (_) (_)_(_) (_) (_) _         (_)   (_)       (_)   (_)     (_)       (_)(_)  _  _    (_)        (_)     (_) _  _  _)(_) _     (_)   (_)(_)         (_)    (_)(_) _  _  _)(_) _    \n";
    cout << "(_)   _(_)_   (_) (_)(_)    (_)      (_)          (_)        (_) (_)   (_)   (_) (_)(_)        (_)   (_)       (_)   (_)     (_)       (_) (_)(_)(_)_  (_)        (_)     (_)(_)(_)(_)(_)(_)    (_) _ (_) (_)(_)(_)_ (_)    (_)(_)(_)(_)(_)(_)(_)       \n";  
    cout << "(_)  (_) (_)  (_) (_)       (_)      (_)          (_)        (_) (_)         (_) (_)           (_)   (_)       (_)   (_)     (_)       (_)         (_) (_)        (_)     (_)   (_) _ (_)       (_)(_)(_)         (_)(_)    (_)(_)   (_) _ (_)      \n";
    cout << "  (_)       (_)   (_)(_)(_) (_)(_)(_)  (_)(_)(_)    (_)(_)(_)    (_)         (_) (_)(_)(_)     (_)     (_)(_)(_)       (_)(_)  (_)(_)(_)  (_)(_)(_)_   (_)        (_)     (_)      (_)(_)(_)(_) (_)   (_) (_)(_)(_)_   (_)(_)  (_)      (_)(_)(_)(_)\n";
    cout << " \n";
    cout << " \n";   
    cout << "\nYou find yourself in a mysterious forest. Your goal is to reach the treasure at the heart of the forest." << endl;
    cout << "Along the way, you will encounter various challenges and make choices that will determine your fate."<<endl;
    cout << "\n";
    cout << "\n";
  	cout << "Do you want play [YES = 'Y'/'y' | NO = 'N'/'n']"<<endl;
  	cin >> choose;
  	if(choose == 'Y' || 'y' ){ 
  
  	cout << " 					" << "Let the adventure begin!" << endl;
    cout << endl;

    LinkedList choices;

    // Add choices for the first crossroads
    choices.addNode("Venture down the narrow path");
    choices.addNode("Follow the winding trail");

    cout << "You are standing at a crossroads. There are two paths ahead of you:" << endl;
    choices.displayChoices();
    cout << "Which path will you choose? (Enter the corresponding number)" << endl;

    int pathChoice = choices.getPlayerChoice();

    if (pathChoice == 1) {
    	
    	// Delete choices for venture and follow
    	choices.deleteNode(1);
    	choices.deleteNode(1);
    	
      // Add choices for fighting or running
      choices.addNode("Run away from the wild bear");
      choices.addNode("Fight the wild bear");

      cout << endl;
      cout << "You venture down the narrow path. As you walk, you hear rustling in the bushes. Suddenly, a wild bear appears!" << endl;
      cout << "\n";
            cout << "\n";
            cout << "\n";
      cout << "                               ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣤⣄⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
      cout << "                               ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⠚⠉⠀⠀⠀⠀⠉⠳⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
      cout << "                               ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⠤⠔⡲⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠢⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
      cout << "                               ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⠚⠁⠀⣠⢊⣀⡀⠀⠀⠀⢀⣀⠤⠤⠤⠤⣀⠤⠚⠉⠉⠉⢷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
      cout << "                               ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡾⠋⠀⠀⠀⠀⡟⠉⠀⠉⠙⠒⠲⠁⠀⠀⠀⠀⠀⠀⡴⠚⠉⠉⠂⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
      cout << "                               ⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⠁⠀⠀⠀⠀⡜⠀⡇⢏⠓⠦⠤⡴⠃⠀⠀⠀⡆⠀⠀⠀⠙⠲⠤⣀⠀⠘⠿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
      cout << "                               ⠀⠀⠀⠀⠀⠀⠀⢀⡞⠀⠀⡴⠀⠀⡸⠁⠀⠸⡌⠁⣠⠞⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠑⢄⠀⢻⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀\n";
      cout << "                               ⠀⠀⠀⠀⠀⠀⠀⡾⠀⠀⢰⠁⠀⠠⠇⠀⠀⠀⣧⠈⠁⠀⠀⠀⠀⠀⠀⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⡇⠱⡄⠀⠀⠀⠀⠀⠀⠀\n";
      cout << "                               ⠀⠀⠀⠀⠀⠀⢸⠃⠀⠀⡜⠀⠀⠀⠀⠀⠀⠀⢿⠀⠀⠀⠀⠀⠀⠀⠀⠿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠹⡄⠀⠀⠀⠀⠀⠀\n";
      cout << "                               ⠀⠀⠀⠀⠀⠀⡿⠀⠀⢠⡇⠀⠀⠀⠀⠀⠀⠀⠘⠤⡀⠀⠀⠀⣠⣀⠀⠀⠀⢀⣤⣤⠀⠀⠀⠀⠘⠀⡜⠁⠀⠀⢳⠀⠀⠀⠀⠀⠀\n";
      cout << "                               ⠀⠀⠀⠀⠀⢰⠇⠀⠀⠘⣇⠀⠀⢀⠀⠀⠀⠀⠀⠀⠱⡄⠀⠀⠙⠛⠁⠀⠀⠀⢩⠁⠀⠀⠀⢠⣮⠎⠀⠀⠀⠀⢸⡆⠀⠀⠀⠀⠀\n";
      cout << "                               ⠀⠀⠀⠀⠀⡾⠀⠀⠀⠀⢻⡄⠀⠸⡇⠀⠀⠀⠀⠀⠀⠹⣄⠀⠀⢿⠀⠀⠀⠀⠘⡄⠀⠀⡰⠋⠁⠀⠀⠀⠀⠀⠈⡇⠀⠀⠀⠀⠀\n";
      cout << "                               ⠀⠀⠀⠀⢠⠇⠀⠀⠀⠀⠀⢳⡀⠀⣇⠀⠀⠀⠀⠀⠀⠀⠈⠑⢾⡞⠀⣀⣄⣀⡀⢹⢃⠜⠀⠀⠀⠀⠀⠀⠀⠀⠀⣷⠀⠀⠀⠀⠀\n";
      cout << "                               ⠀⠀⠀⠀⣼⠀⠀⠀⠀⠀⠀⠀⠳⡄⢸⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣯⣠⣤⣤⢃⡾⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⡄⠀⠀⠀⠀\n";
      cout << "                               ⠀⠀⠀⢠⡇⠀⠀⠀⠀⠀⠀⠀⠀⠙⢌⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⠷⠶⠟⠋⠀⣠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⣄⠀⠀⠀\n";
      cout << "                               ⠀⠀⠀⢸⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⠤⠐⠁⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣆⠀⠀\n";
      cout << "                               ⠀⠀⠀⣼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠀⠀⠀⢠⠛⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⠀⠀\n";
      cout << "                               ⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡼⢧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠀⡎⠀⠙⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡇⠀\n";
      cout << "                               ⠀⠀⢰⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠏⠀⢸⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠀⢳⠀⠀⠈⠳⣄⡰⠀⠀⠀⠀⠀⠀⠀⢀⠇⠀\n";
      cout << "                               ⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠞⠁⠀⠀⠀⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠇⠀⠀⠈⡆⠀⠀⢠⡞⠁⠀⠀⠀⠀⠀⠀⠀⡼⠀⠀\n";
      cout << "                               ⠀⠀⣸⠀⠀⠀⠀⠀⠀⠀⠀⣠⠏⠀⠀⠀⠀⠀⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢧⠀⠀⢰⠃⠀⣤⣏⠀⠀⠀⠀⠀⠀⠀⣠⡞⠁⠀⠀\n";
      cout << "                               ⠀⠀⡿⠀⠀⠀⠀⠀⠀⢀⡴⠃⠀⠀⠀⠀⠀⠀⢸⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠃⠀⡇⠀⠀⢻⡿⣦⡀⠀⠀⠀⣠⠾⠋⠀⠀⠀⠀\n";
      cout << "                               ⠀⢰⡇⠀⠀⠀⠀⠀⠀⡜⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣧⠀⠀⠀⠀⠀⠀⠀⠀⠸⠀⢸⠁⠀⠀⠀⠉⠉⠙⠓⠚⠋⠁⠀⠀⠀⠀⠀⠀\n";
      cout << "                               ⠠⠼⠥⠤⠤⠤⠤⠤⠤⠧⠤⠤⠤⠀⠀⠀⠀⠀⠀⠀⠘⣧⠀⠀⠀⠀⠀⠀⠀⠀⣇⣸⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
      cout << "                               ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠉⠉⠉⠒⠒⠒⠒⠛⠛⠃⠀⠀⠀⠀⠀⠀⣿⠿⠸⠿⣿⣿⠇⠀⢀⠒\n" << endl;
      cout << "\n";
            cout << "\n";
            cout << "\n";

      cout << "What will you do?" << endl;
      choices.displayChoices();
      cout << "(Enter the corresponding number)" << endl;

      int actionChoice = choices.getPlayerChoice();

        if (actionChoice == 2) {
            cout << endl;
            cout << "You engage in a fierce battle with the bear. After a few intense moments, you manage to defeat it. Well done! You continue on your way." << endl;
        } else if (actionChoice == 1) {
            cout << endl;
            cout << "You try to run, but the bear catches up to you and attacks. Unfortunately, you are unable to escape. Game over!" << endl;
            cout << "\n";
            cout << "\n";
            cout << "\n";
            cout << "                                        ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                        ███▀▀▀██┼███▀▀▀███┼███▀█▄█▀███┼██▀▀▀\n";
            cout << "                                        ██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼█┼┼┼██┼██┼┼┼\n";
            cout << "                                        ██┼┼┼▄▄▄┼██▄▄▄▄▄██┼██┼┼┼▀┼┼┼██┼██▀▀▀\n";
            cout << "                                        ██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██┼┼┼\n";
            cout << "                                        ███▄▄▄██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██▄▄▄\n";
            cout << "                                        ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                        ███▀▀▀███┼▀███┼┼██▀┼██▀▀▀┼██▀▀▀▀██▄┼\n";
            cout << "                                        ██┼┼┼┼┼██┼┼┼██┼┼██┼┼██┼┼┼┼██┼┼┼┼┼██┼\n";
            cout << "                                        ██┼┼┼┼┼██┼┼┼██┼┼██┼┼██▀▀▀┼██▄▄▄▄▄▀▀┼\n";
            cout << "                                        ██┼┼┼┼┼██┼┼┼██┼┼█▀┼┼██┼┼┼┼██┼┼┼┼┼██┼\n";
            cout << "                                        ███▄▄▄███┼┼┼─▀█▀┼┼─┼██▄▄▄┼██┼┼┼┼┼██▄\n";
            cout << "                                        ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                        ┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼\n";
            cout << "                                        ┼┼┼┼┼┼████▄┼┼┼▄▄▄▄▄▄▄┼┼┼▄████┼┼┼┼┼┼┼\n";
            cout << "                                        ┼┼┼┼┼┼┼┼┼▀▀█▄█████████▄█▀▀┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                        ┼┼┼┼┼┼┼┼┼┼┼█████████████┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                        ┼┼┼┼┼┼┼┼┼┼┼██▀▀▀███▀▀▀██┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                        ┼┼┼┼┼┼┼┼┼┼┼██┼┼┼███┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                        ┼┼┼┼┼┼┼┼┼┼┼█████▀▄▀█████┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                        ┼┼┼┼┼┼┼┼┼┼┼┼███████████┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                        ┼┼┼┼┼┼┼┼▄▄▄██┼┼█▀█▀█┼┼██▄▄▄┼┼┼┼┼┼┼┼┼\n";
            cout << "                                        ┼┼┼┼┼┼┼┼▀▀██┼┼┼┼┼┼┼┼┼┼┼██▀▀┼┼┼┼┼┼┼┼┼\n";
            cout << "                                        ┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                        ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "\n";
            cout << "\n";
            cout << "\n";
            return 0;
        } else {
            cout << endl;
            cout << "Invalid choice. Game over!" << endl;
            cout << "\n";
            cout << "\n";
            cout << "\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ███▀▀▀██┼███▀▀▀███┼███▀█▄█▀███┼██▀▀▀\n";
            cout << "                                       ██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼█┼┼┼██┼██┼┼┼\n";
            cout << "                                       ██┼┼┼▄▄▄┼██▄▄▄▄▄██┼██┼┼┼▀┼┼┼██┼██▀▀▀\n";
            cout << "                                       ██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██┼┼┼\n";
            cout << "                                       ███▄▄▄██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██▄▄▄\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ███▀▀▀███┼▀███┼┼██▀┼██▀▀▀┼██▀▀▀▀██▄┼\n";
            cout << "                                       ██┼┼┼┼┼██┼┼┼██┼┼██┼┼██┼┼┼┼██┼┼┼┼┼██┼\n";
            cout << "                                       ██┼┼┼┼┼██┼┼┼██┼┼██┼┼██▀▀▀┼██▄▄▄▄▄▀▀┼\n";
            cout << "                                       ██┼┼┼┼┼██┼┼┼██┼┼█▀┼┼██┼┼┼┼██┼┼┼┼┼██┼\n";
            cout << "                                       ███▄▄▄███┼┼┼─▀█▀┼┼─┼██▄▄▄┼██┼┼┼┼┼██▄\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼████▄┼┼┼▄▄▄▄▄▄▄┼┼┼▄████┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼▀▀█▄█████████▄█▀▀┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼█████████████┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼██▀▀▀███▀▀▀██┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼██┼┼┼███┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼█████▀▄▀█████┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼███████████┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼▄▄▄██┼┼█▀█▀█┼┼██▄▄▄┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼▀▀██┼┼┼┼┼┼┼┼┼┼┼██▀▀┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "\n";
            cout << "\n";
            cout << "\n";

            return 0;
        }
		
		// Delete choices for fight and run
    	choices.deleteNode(1);
    	choices.deleteNode(1);
		
    // Add choices for crossing the bridge or turning back
    choices.addNode("Turn back");
		choices.addNode("Cross the rickety bridge");

        cout << endl;
        cout << "After some time, you come across a rickety bridge suspended over a deep ravine. The bridge looks unstable." << endl;
        cout << "What will you do?" << endl;
        choices.displayChoices();
        cout << "(Enter the corresponding number)" << endl;

        int bridgeChoice = choices.getPlayerChoice();

        if (bridgeChoice == 2) {
            cout << endl;
            cout << "You cautiously step onto the bridge. It creaks under your weight" << endl;
            cout << "Game Over..."<<endl;
            cout << "\n";
            cout << "\n";
            cout << "\n";
            cout << "                                        ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                        ███▀▀▀██┼███▀▀▀███┼███▀█▄█▀███┼██▀▀▀\n";
            cout << "                                        ██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼█┼┼┼██┼██┼┼┼\n";
            cout << "                                        ██┼┼┼▄▄▄┼██▄▄▄▄▄██┼██┼┼┼▀┼┼┼██┼██▀▀▀\n";
            cout << "                                        ██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██┼┼┼\n";
            cout << "                                        ███▄▄▄██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██▄▄▄\n";
            cout << "                                        ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                        ███▀▀▀███┼▀███┼┼██▀┼██▀▀▀┼██▀▀▀▀██▄┼\n";
            cout << "                                        ██┼┼┼┼┼██┼┼┼██┼┼██┼┼██┼┼┼┼██┼┼┼┼┼██┼\n";
            cout << "                                        ██┼┼┼┼┼██┼┼┼██┼┼██┼┼██▀▀▀┼██▄▄▄▄▄▀▀┼\n";
            cout << "                                        ██┼┼┼┼┼██┼┼┼██┼┼█▀┼┼██┼┼┼┼██┼┼┼┼┼██┼\n";
            cout << "                                        ███▄▄▄███┼┼┼─▀█▀┼┼─┼██▄▄▄┼██┼┼┼┼┼██▄\n";
            cout << "                                        ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                        ┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼\n";
            cout << "                                        ┼┼┼┼┼┼████▄┼┼┼▄▄▄▄▄▄▄┼┼┼▄████┼┼┼┼┼┼┼\n";
            cout << "                                        ┼┼┼┼┼┼┼┼┼▀▀█▄█████████▄█▀▀┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                        ┼┼┼┼┼┼┼┼┼┼┼█████████████┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                        ┼┼┼┼┼┼┼┼┼┼┼██▀▀▀███▀▀▀██┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                        ┼┼┼┼┼┼┼┼┼┼┼██┼┼┼███┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                        ┼┼┼┼┼┼┼┼┼┼┼█████▀▄▀█████┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                        ┼┼┼┼┼┼┼┼┼┼┼┼███████████┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                        ┼┼┼┼┼┼┼┼▄▄▄██┼┼█▀█▀█┼┼██▄▄▄┼┼┼┼┼┼┼┼┼\n";
            cout << "                                        ┼┼┼┼┼┼┼┼▀▀██┼┼┼┼┼┼┼┼┼┼┼██▀▀┼┼┼┼┼┼┼┼┼\n";
            cout << "                                        ┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                        ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "\n";
            cout << "\n";
            cout << "\n";
            return 0;
        } else if (bridgeChoice == 1) {
            cout << endl;
            cout << "You decide not to risk crossing the bridge and turn back. As you retrace your steps, you stumble upon a hidden cave." << endl;
            cout << "\n";
            cout << "\n";
            cout << "\n";
            cout << "                                    ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿ \n";
            cout << "                                    ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠁⠀⠀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿ \n";
            cout << "                                    ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠈⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿ \n";
            cout << "                                    ⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁⠀⠀⠀⠀⠀⠈⠻⣦⣤⣤⣀⣀⣀⣠⡾⢻⣿⣿⣿⣿⣿⣿⣿ \n";
            cout << "                                    ⣿⣿⣿⣿⣿⣿⣿⣿⡿⣧⣤⣀⡀⠀⣀⣄⠀⠀⠀⠀⠉⠉⠉⠙⠋⠀⠈⣿⣿⣿⣿⣿⣿⣿ \n";
            cout << "                                    ⣿⣿⣿⣿⣿⣿⠟⠉⠀⠀⠈⠉⠛⠛⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢿⣿⣿⣿⣿⣿⣿ \n";
            cout << "                                    ⣿⣿⣿⣿⣯⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡴⠿⣷⡀⠀⢠⡄⠀⠀⣿⣿⣿⣿⣿⣿⣿ \n";
            cout << "                                    ⣿⣿⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⠟⠛⠃⠀⠀⣿⣿⣿⣿⣿⣿⣿ \n";
            cout << "                                    ⣿⣿⣿⡿⠟⠛⣷⣀⣀⣠⡴⠟⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿ \n";
            cout << "                                    ⣿⣿⣯⠀⠀⠀⠈⠉⠛⠉⠀⠀⠀⠀⠀⠀⣠⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿ \n";
            cout << "                                    ⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣷⣦⣄⣀⣀⣀⠀⢀⠀⠀⠀⣿⣿⣿⣿⣿⣿ \n";
            cout << "                                    ⣿⣿⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⣤⣿⣿⣿⣿⣿⣿⡛⠉⠙⠿⠛⠀⠀⠀⣿⣿⣿⣿⣿⣿ \n";
            cout << "                                    ⣿⠟⠁⠀⢀⣀⣀⣀⣤⣴⣦⣴⣿⣇⣿⣿⣿⣿⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿ \n";
            cout << "                                    ⣿⠀⠀⠀⠀⠉⠉⠉⠀⠀⠈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⠀⠀⠀⡴⠞⣿⣿⣿⣿⣿⣿ \n";
            cout << "                                    ⣿⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⣤⣤⣤⣤⣤⣤⣿⣿⣿⣿⣿ \n";
            cout << "\n";
            cout << "\n";
            cout << "\n";


			// Delete choices for turn and cross
    		choices.deleteNode(1);
    		choices.deleteNode(1);

            // Add choices for exploring the cave or leaving
            choices.addNode("Explore the cave");
            choices.addNode("Leave and continue on the main path");

            cout << endl;
            cout << "The hidden cave piques your curiosity. Will you explore its depths or continue on the main path?" << endl;
            choices.displayChoices();
            cout << "(Enter the corresponding number)" << endl;

            int caveChoice = choices.getPlayerChoice();

            if (caveChoice == 1) {
                cout << endl;
                cout << "You bravely enter the dark cave. Inside, you discover ancient treasures and valuable artifacts. Your journey becomes even more rewarding!" << endl;
            } else if (caveChoice == 2) {
                cout << endl;
                cout << "You decide to leave the cave and continue on the main path. You don't finish the game..." << endl;
                cout << "Game Over...."<<endl;
                cout << "\n";
            cout << "\n";
            cout << "\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ███▀▀▀██┼███▀▀▀███┼███▀█▄█▀███┼██▀▀▀\n";
            cout << "                                       ██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼█┼┼┼██┼██┼┼┼\n";
            cout << "                                       ██┼┼┼▄▄▄┼██▄▄▄▄▄██┼██┼┼┼▀┼┼┼██┼██▀▀▀\n";
            cout << "                                       ██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██┼┼┼\n";
            cout << "                                       ███▄▄▄██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██▄▄▄\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ███▀▀▀███┼▀███┼┼██▀┼██▀▀▀┼██▀▀▀▀██▄┼\n";
            cout << "                                       ██┼┼┼┼┼██┼┼┼██┼┼██┼┼██┼┼┼┼██┼┼┼┼┼██┼\n";
            cout << "                                       ██┼┼┼┼┼██┼┼┼██┼┼██┼┼██▀▀▀┼██▄▄▄▄▄▀▀┼\n";
            cout << "                                       ██┼┼┼┼┼██┼┼┼██┼┼█▀┼┼██┼┼┼┼██┼┼┼┼┼██┼\n";
            cout << "                                       ███▄▄▄███┼┼┼─▀█▀┼┼─┼██▄▄▄┼██┼┼┼┼┼██▄\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼████▄┼┼┼▄▄▄▄▄▄▄┼┼┼▄████┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼▀▀█▄█████████▄█▀▀┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼█████████████┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼██▀▀▀███▀▀▀██┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼██┼┼┼███┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼█████▀▄▀█████┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼███████████┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼▄▄▄██┼┼█▀█▀█┼┼██▄▄▄┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼▀▀██┼┼┼┼┼┼┼┼┼┼┼██▀▀┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "\n";
            cout << "\n";
            cout << "\n";
                return 0;
            } else {
                cout << endl;
                cout << "Invalid choice. Game over!" << endl;
                cout << "\n";
            cout << "\n";
            cout << "\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ███▀▀▀██┼███▀▀▀███┼███▀█▄█▀███┼██▀▀▀\n";
            cout << "                                       ██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼█┼┼┼██┼██┼┼┼\n";
            cout << "                                       ██┼┼┼▄▄▄┼██▄▄▄▄▄██┼██┼┼┼▀┼┼┼██┼██▀▀▀\n";
            cout << "                                       ██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██┼┼┼\n";
            cout << "                                       ███▄▄▄██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██▄▄▄\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ███▀▀▀███┼▀███┼┼██▀┼██▀▀▀┼██▀▀▀▀██▄┼\n";
            cout << "                                       ██┼┼┼┼┼██┼┼┼██┼┼██┼┼██┼┼┼┼██┼┼┼┼┼██┼\n";
            cout << "                                       ██┼┼┼┼┼██┼┼┼██┼┼██┼┼██▀▀▀┼██▄▄▄▄▄▀▀┼\n";
            cout << "                                       ██┼┼┼┼┼██┼┼┼██┼┼█▀┼┼██┼┼┼┼██┼┼┼┼┼██┼\n";
            cout << "                                       ███▄▄▄███┼┼┼─▀█▀┼┼─┼██▄▄▄┼██┼┼┼┼┼██▄\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼████▄┼┼┼▄▄▄▄▄▄▄┼┼┼▄████┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼▀▀█▄█████████▄█▀▀┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼█████████████┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼██▀▀▀███▀▀▀██┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼██┼┼┼███┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼█████▀▄▀█████┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼███████████┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼▄▄▄██┼┼█▀█▀█┼┼██▄▄▄┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼▀▀██┼┼┼┼┼┼┼┼┼┼┼██▀▀┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "\n";
            cout << "\n";
            cout << "\n";
                return 0;
            }
        } else {
            cout << endl;
            cout << "Invalid choice. Game over!" << endl;
            cout << "\n";
            cout << "\n";
            cout << "\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ███▀▀▀██┼███▀▀▀███┼███▀█▄█▀███┼██▀▀▀\n";
            cout << "                                       ██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼█┼┼┼██┼██┼┼┼\n";
            cout << "                                       ██┼┼┼▄▄▄┼██▄▄▄▄▄██┼██┼┼┼▀┼┼┼██┼██▀▀▀\n";
            cout << "                                       ██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██┼┼┼\n";
            cout << "                                       ███▄▄▄██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██▄▄▄\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ███▀▀▀███┼▀███┼┼██▀┼██▀▀▀┼██▀▀▀▀██▄┼\n";
            cout << "                                       ██┼┼┼┼┼██┼┼┼██┼┼██┼┼██┼┼┼┼██┼┼┼┼┼██┼\n";
            cout << "                                       ██┼┼┼┼┼██┼┼┼██┼┼██┼┼██▀▀▀┼██▄▄▄▄▄▀▀┼\n";
            cout << "                                       ██┼┼┼┼┼██┼┼┼██┼┼█▀┼┼██┼┼┼┼██┼┼┼┼┼██┼\n";
            cout << "                                       ███▄▄▄███┼┼┼─▀█▀┼┼─┼██▄▄▄┼██┼┼┼┼┼██▄\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼████▄┼┼┼▄▄▄▄▄▄▄┼┼┼▄████┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼▀▀█▄█████████▄█▀▀┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼█████████████┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼██▀▀▀███▀▀▀██┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼██┼┼┼███┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼█████▀▄▀█████┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼███████████┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼▄▄▄██┼┼█▀█▀█┼┼██▄▄▄┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼▀▀██┼┼┼┼┼┼┼┼┼┼┼██▀▀┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "\n";
            cout << "\n";
            cout << "\n";
            return 0;
        }
    } else if (pathChoice == 2) {
    	
    	// Delete choices for venture and follow
    	choices.deleteNode(1);
    	choices.deleteNode(1);
    	
        // Add choices for fighting or surrendering
        choices.addNode("Surrender to the group of bandits");
        choices.addNode("Fight the group of bandits");

        cout << endl;
        cout << "You follow the winding trail to the right. As you walk, you encounter a group of bandits." << endl;
        cout << "\n";
        cout << "\n";
        cout << " ⠀  ⠀⠀⠀⠀  ⠀⠀⠀⠀⠀⣾⣶⣤⣀⣀⣤⣶⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   ⠀⠀⠀⠀⠀⠀      ⠀⠀⠀⠀⣾⣶⣤⣀⣀⣤⣶⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        cout << "⠀⠀  ⠀⠀⠀⠀⠀⠀⠀⠀  ⣸⣿⣿⣿⣿⣿⣿⣿⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀               ⠀⠀⠀⣸⣿⣿⣿⣿⣿⣿⣿⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        cout << "⠀⠀  ⠀⠀⠀⠀⠀   ⠀⠰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀   ⠀⠀⠀⠀⠀     ⠀⠀⠀⠀⠰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        cout << "⠀    ⣾⣷⣶⣶⣶⣦⣤⠀⢤⣤⣈⣉⠙⠛⠛⠋⣉⣁⣤⡤⠀⣤⣴⣶⣶⣶⣾⣷⠀     ⠀⣾⣷⣶⣶⣶⣦⣤⠀⢤⣤⣈⣉⠙⠛⠛⠋⣉⣁⣤⡤⠀⣤⣴⣶⣶⣶⣾⣷⠀\n";
        cout << "⠀    ⠈⠻⢿⣿⣿⣿⣿⣶⣤⣄⣉⣉⣉⣛⣛⣉⣉⣉⣠⣤⣶⣿⣿⣿⣿⡿⠟⠁⠀     ⠀⠈⠻⢿⣿⣿⣿⣿⣶⣤⣄⣉⣉⣉⣛⣛⣉⣉⣉⣠⣤⣶⣿⣿⣿⣿⡿⠟⠁⠀\n";
        cout << "⠀⠀    ⠀⠀⠀⠉⠙⠛⠛⠿⠿⠿⢿⣿⣿⣿⣿⡿⠿⠿⠿⠛⠛⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀      ⠀⠀⠉⠙⠛⠛⠿⠿⠿⢿⣿⣿⣿⣿⡿⠿⠿⠿⠛⠛⠋⠉⠀⠀⠀⠀⠀\n";
        cout << "⠀⠀⠀  ⠀⠀  ⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀          ⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        cout << "⠀⠀⠀  ⠀    ⠀⢿⣷⠦⠄⢀⣠⡀⠠⣄⡀⠠⠴⣾⡿⠀⠀⠀⠀⠀⣀⡀⠀⠀⠀⠀⠀    ⠀⠀    ⠀⠀⢿⣷⠦⠄⢀⣠⡀⠠⣄⡀⠠⠴⣾⡿⠀⠀⠀⠀⠀⣀⡀⠀\n";
        cout << "⠀⠀⠀⠀  ⠀  ⠀⠀⢤⣤⣴⣾⣿⣿⣷⣤⣙⣿⣷⣦⣤⡤⠀⠴⠶⠟⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀        ⠀⢤⣤⣴⣾⣿⣿⣷⣤⣙⣿⣷⣦⣤⡤⠀⠴⠶⠟⠛⠉⠀⠀\n";
        cout << "⠀⠀⠀  ⠀⠀ ⠀ ⠀⠀⠙⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⠀⠺⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀         ⠀⠙⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⠀⠺⣷⣄⠀⠀⠀⠀⠀\n";
        cout << "⠀⠀⠀⠀⠀  ⠀ ⠀⠀⠀ ⠀⢈⣙⣛⣻⣿⣿⣿⡿⠃⠐⠿⠿⣾⣿⣷⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀         ⠀⢈⣙⣛⣻⣿⣿⣿⡿⠃⠐⠿⠿⣾⣿⣷⡄⠀⠀⠀\n";
        cout << "⠀⠀⠀ ⠀⠀⠀  ⠀  ⠀⠀⠘⣿⣿⣿⣿⠿⠋⠀⠀⠀⠀⠀⠀⠀⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀          ⠀⠘⣿⣿⣿⣿⠿⠋⠀⠀⠀⠀⠀⠀⠀⠈⠁⠀⠀⠀\n";
        cout << "⠀⠀⠀⠀ ⠀⠀⠀⠀  ⠀⠀ ⠀⠹⣿⣿⣿⣾⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀           ⠀⠀⠀⠹⣿⣿⣿⣾⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        cout << "⠀⠀⠀⠀⠀   ⠀⠀⠀  ⠀⠀⠀⠙⠛⠛⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀            ⠀⠀⠙⠛⠛⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "What will you do?" << endl;
        choices.displayChoices();
        cout << "(Enter the corresponding number)" << endl;

        int actionChoice = choices.getPlayerChoice();

        if (actionChoice == 2) {
            cout << endl;
            cout << "You bravely stand your ground and engage in a battle with the bandits. After a fierce fight, you emerge victorious." << endl;
        } else if (actionChoice == 1) {
            cout << endl;
            cout << "You decide to surrender to the bandits. They take all your belongings and leave you stranded. Game over!" << endl;
            cout << "\n";
            cout << "\n";
            cout << "\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ███▀▀▀██┼███▀▀▀███┼███▀█▄█▀███┼██▀▀▀\n";
            cout << "                                       ██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼█┼┼┼██┼██┼┼┼\n";
            cout << "                                       ██┼┼┼▄▄▄┼██▄▄▄▄▄██┼██┼┼┼▀┼┼┼██┼██▀▀▀\n";
            cout << "                                       ██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██┼┼┼\n";
            cout << "                                       ███▄▄▄██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██▄▄▄\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ███▀▀▀███┼▀███┼┼██▀┼██▀▀▀┼██▀▀▀▀██▄┼\n";
            cout << "                                       ██┼┼┼┼┼██┼┼┼██┼┼██┼┼██┼┼┼┼██┼┼┼┼┼██┼\n";
            cout << "                                       ██┼┼┼┼┼██┼┼┼██┼┼██┼┼██▀▀▀┼██▄▄▄▄▄▀▀┼\n";
            cout << "                                       ██┼┼┼┼┼██┼┼┼██┼┼█▀┼┼██┼┼┼┼██┼┼┼┼┼██┼\n";
            cout << "                                       ███▄▄▄███┼┼┼─▀█▀┼┼─┼██▄▄▄┼██┼┼┼┼┼██▄\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼████▄┼┼┼▄▄▄▄▄▄▄┼┼┼▄████┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼▀▀█▄█████████▄█▀▀┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼█████████████┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼██▀▀▀███▀▀▀██┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼██┼┼┼███┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼█████▀▄▀█████┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼███████████┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼▄▄▄██┼┼█▀█▀█┼┼██▄▄▄┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼▀▀██┼┼┼┼┼┼┼┼┼┼┼██▀▀┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "\n";
            cout << "\n";
            cout << "\n";

            return 0;
        } else {
            cout << endl;
            cout << "Invalid choice. Game over!" << endl;
            cout << "\n";
            cout << "\n";
            cout << "\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ███▀▀▀██┼███▀▀▀███┼███▀█▄█▀███┼██▀▀▀\n";
            cout << "                                       ██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼█┼┼┼██┼██┼┼┼\n";
            cout << "                                       ██┼┼┼▄▄▄┼██▄▄▄▄▄██┼██┼┼┼▀┼┼┼██┼██▀▀▀\n";
            cout << "                                       ██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██┼┼┼\n";
            cout << "                                       ███▄▄▄██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██▄▄▄\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ███▀▀▀███┼▀███┼┼██▀┼██▀▀▀┼██▀▀▀▀██▄┼\n";
            cout << "                                       ██┼┼┼┼┼██┼┼┼██┼┼██┼┼██┼┼┼┼██┼┼┼┼┼██┼\n";
            cout << "                                       ██┼┼┼┼┼██┼┼┼██┼┼██┼┼██▀▀▀┼██▄▄▄▄▄▀▀┼\n";
            cout << "                                       ██┼┼┼┼┼██┼┼┼██┼┼█▀┼┼██┼┼┼┼██┼┼┼┼┼██┼\n";
            cout << "                                       ███▄▄▄███┼┼┼─▀█▀┼┼─┼██▄▄▄┼██┼┼┼┼┼██▄\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼████▄┼┼┼▄▄▄▄▄▄▄┼┼┼▄████┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼▀▀█▄█████████▄█▀▀┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼█████████████┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼██▀▀▀███▀▀▀██┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼██┼┼┼███┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼█████▀▄▀█████┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼███████████┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼▄▄▄██┼┼█▀█▀█┼┼██▄▄▄┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼▀▀██┼┼┼┼┼┼┼┼┼┼┼██▀▀┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "\n";
            cout << "\n";
            cout << "\n";

            return 0;
        }

        cout << endl;
        cout << "As you continue on the trail, you stumble upon a hidden cave filled with ancient artifacts." << endl;
    } else {
        cout << endl;
        cout << "Invalid choice. Game over!" << endl;
            cout << "\n";
            cout << "\n";
            cout << "\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ███▀▀▀██┼███▀▀▀███┼███▀█▄█▀███┼██▀▀▀\n";
            cout << "                                       ██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼█┼┼┼██┼██┼┼┼\n";
            cout << "                                       ██┼┼┼▄▄▄┼██▄▄▄▄▄██┼██┼┼┼▀┼┼┼██┼██▀▀▀\n";
            cout << "                                       ██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██┼┼┼\n";
            cout << "                                       ███▄▄▄██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██▄▄▄\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ███▀▀▀███┼▀███┼┼██▀┼██▀▀▀┼██▀▀▀▀██▄┼\n";
            cout << "                                       ██┼┼┼┼┼██┼┼┼██┼┼██┼┼██┼┼┼┼██┼┼┼┼┼██┼\n";
            cout << "                                       ██┼┼┼┼┼██┼┼┼██┼┼██┼┼██▀▀▀┼██▄▄▄▄▄▀▀┼\n";
            cout << "                                       ██┼┼┼┼┼██┼┼┼██┼┼█▀┼┼██┼┼┼┼██┼┼┼┼┼██┼\n";
            cout << "                                       ███▄▄▄███┼┼┼─▀█▀┼┼─┼██▄▄▄┼██┼┼┼┼┼██▄\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼████▄┼┼┼▄▄▄▄▄▄▄┼┼┼▄████┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼▀▀█▄█████████▄█▀▀┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼█████████████┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼██▀▀▀███▀▀▀██┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼██┼┼┼███┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼█████▀▄▀█████┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼███████████┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼▄▄▄██┼┼█▀█▀█┼┼██▄▄▄┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼▀▀██┼┼┼┼┼┼┼┼┼┼┼██▀▀┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";  
            cout << "\n";
            cout << "\n";
            cout << "\n";  

        return 0;
    }

	// Delete choices for fight and surrender
    choices.deleteNode(1);
    choices.deleteNode(1);

    // Add choices for opening the treasure chest or leaving
    choices.addNode("Leave the treasure untouched");
    choices.addNode("Open the treasure chest");

    cout << endl;
    cout << "You have reached the heart of the forest, where the treasure awaits. Will you open the treasure chest or leave it untouched?" << endl;
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "                                          ⠀⠀⠀⢠⡄⢠⣤⣤⠀⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⠀⣤⣤⡄⢠⡄⠀⠀⠀\n";
    cout << "                                          ⠀⠀⠀⢸⡇⢸⣿⣿⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⣿⣿⡇⢸⡇⠀⠀⠀\n";
    cout << "                                          ⠀⠀⠀⣿⡇⢸⣿⣿⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⣿⣿⡇⢸⣿⠀⠀⠀\n";
    cout << "                                          ⠀⠀⢀⣿⡇⢸⣿⣿⠀⣿⣿⣿⠟⠛⠛⠛⠛⠻⣿⣿⣿⠀⣿⣿⡇⢸⣿⡀⠀⠀\n";
    cout << "                                          ⠀⠀⢈⡉⢁⣀⣉⣉⣀⣉⣉⣉⠀⣴⠖⠲⣦⠀⣉⣉⣉⣀⣉⣉⣀⡈⢉⡁⠀⠀\n";
    cout << "                                          ⠀⠀⢸⡇⢸⣿⣿⣿⣿⣿⣿⣿⠀⣿⡄⢠⣿⠀⣿⣿⣿⣿⣿⣿⣿⡇⢸⡇⠀⠀\n";
    cout << "                                          ⠀⠀⢸⡇⢸⣿⣿⣿⣿⣿⣿⣿⠀⣿⣧⣼⣿⠀⣿⣿⣿⣿⣿⣿⣿⡇⢸⡇⠀⠀\n";
    cout << "                                          ⠀⠀⢸⡇⢸⣿⣿⣿⣿⣿⣿⣿⣀⣉⣉⣉⣉⣀⣿⣿⣿⣿⣿⣿⣿⡇⢸⡇⠀⠀\n";
    cout << "                                          ⠀⠀⠘⠇⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠸⠃⠀⠀\n";
    cout << "                                          ⠀⠀⢰⣄⠈⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠁⣠⡆⠀⠀\n";
    cout << "                                          ⠀⠀⠘⠛⠃⠈⠙⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠋⠁⠘⠛⠃⠀⠀\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    
    choices.displayChoices();
    cout << "(Enter the corresponding number)" << endl;

    int treasureChoice = choices.getPlayerChoice();

    if (treasureChoice == 2) {
        cout << endl;
        cout << "With anticipation, you open the treasure chest. It is filled with gold, jewels, and other priceless artifacts. You have succeeded in your quest!" << endl;
		cout << " 						"<< "CONGRATULATION!!!! YOU HAVE FINNISH THE GAME WITH REWARD!!!!!!! "<<endl;
    cout << "\n";
    cout << "\n";
    cout << "                                                                              _.--.                "<<endl;
    cout << "                                                                        _. -'_:-'||               "<<endl;
    cout << "                                                                     _.-'_.-::::'||               "<<endl;
    cout << "                                                                _.-:'_.-::::::'  ||               "<<endl;
    cout << "                                                              .'`-.-:::::::'     ||               "<<endl;
    cout << "                                                             /.'`;|:::::::'      ||_              "<<endl;
    cout << "                                                            ||   ||::::::'     _.;._'-._          "<<endl;
    cout << "                                                            ||   ||:::::'  _.-!oo @.!-._'-.       "<<endl;
    cout << "                                                            \'.  ||:::::.-!oooo @!@@@.-'_.|       "<<endl;
    cout << "                                                             '.'-;|:.-'.&$@.& 91$%-'o.'|.||       "<<endl;
    cout << "                                                               `>'-.!@%oo@'@_%-'_.-o _.|'||       "<<endl;
    cout << "                                                                ||-._'-.@.-'_.-' _.-o  |'||       "<<endl;
    cout << "                                                                ||=[ '-._.-|./.-'    o |'||       "<<endl;
    cout << "                                                                || '-.]=|| |'|      o  |'||       "<<endl;
    cout << "                                                                ||      || |'|        _| ';       "<<endl;
    cout << "                                                                ||      || |'|    _.-'_.-'        "<<endl;
    cout << "                                                                |'-._   || |'|_.-'_.-'            "<<endl;
    cout << "                                                                 '-._'-.|| |' `_.-'               "<<endl;
    cout << "                                                                     '-.||_/.-'                   "<<endl;
    cout << "\n";
    cout << "\n";
  
    } else if (treasureChoice == 1) {
        cout << endl;
        cout << "You decide to leave the treasure untouched, realizing that the true reward was the journey itself. You emerge as a wise and content adventurer." << endl;
		cout << endl;
		cout << " 				" << "CONGRATULATION!!!! YOU HAVE FINNISH THE GAME!!!!!!"<<endl;


    } else {
        cout << endl;
        cout << "Invalid choice. Game over!" << endl;
        cout << "\n";
        cout << "\n";
        cout << "\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ███▀▀▀██┼███▀▀▀███┼███▀█▄█▀███┼██▀▀▀\n";
            cout << "                                       ██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼█┼┼┼██┼██┼┼┼\n";
            cout << "                                       ██┼┼┼▄▄▄┼██▄▄▄▄▄██┼██┼┼┼▀┼┼┼██┼██▀▀▀\n";
            cout << "                                       ██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██┼┼┼\n";
            cout << "                                       ███▄▄▄██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██▄▄▄\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ███▀▀▀███┼▀███┼┼██▀┼██▀▀▀┼██▀▀▀▀██▄┼\n";
            cout << "                                       ██┼┼┼┼┼██┼┼┼██┼┼██┼┼██┼┼┼┼██┼┼┼┼┼██┼\n";
            cout << "                                       ██┼┼┼┼┼██┼┼┼██┼┼██┼┼██▀▀▀┼██▄▄▄▄▄▀▀┼\n";
            cout << "                                       ██┼┼┼┼┼██┼┼┼██┼┼█▀┼┼██┼┼┼┼██┼┼┼┼┼██┼\n";
            cout << "                                       ███▄▄▄███┼┼┼─▀█▀┼┼─┼██▄▄▄┼██┼┼┼┼┼██▄\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼████▄┼┼┼▄▄▄▄▄▄▄┼┼┼▄████┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼▀▀█▄█████████▄█▀▀┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼█████████████┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼██▀▀▀███▀▀▀██┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼██┼┼┼███┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼█████▀▄▀█████┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼███████████┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼▄▄▄██┼┼█▀█▀█┼┼██▄▄▄┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼▀▀██┼┼┼┼┼┼┼┼┼┼┼██▀▀┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "                                       ┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            cout << "\n";
            cout << "\n";
            cout << "\n";
        return 0;
    }
}
	else 
	cout << "Bye-Bye........"<<endl;

  return 0;
}
