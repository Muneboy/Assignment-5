#include <iostream>
#include <vector>

using namespace std;

int main() {
    int PLAYER_COUNT = 5;
    vector<int> jerseyNum(PLAYER_COUNT);
    vector<int> playerRate(PLAYER_COUNT);
    char userInput;
    unsigned int i;
    int playerJersey;
    int newPlayerRate;
    int rateValue;
    
    // initial 5 player input loop
    for (i = 0; i < jerseyNum.size(); ++i) {
        cout << "Enter player " << i + 1 << "'s jersey number:" << endl;
        cin >> jerseyNum.at(i);
        
        cout << "Enter player " << i + 1 << "'s rating:" << endl;
        cin >> playerRate.at(i);
        
        cout << endl;
        
    }
    
    // roster output
    cout << "ROSTER" << endl;
    
    for (i = 0; i < jerseyNum.size(); ++i) {
        cout << "Player " << i + 1 << " -- Jersey number: " << jerseyNum.at(i);
        cout << ", Rating: " << playerRate.at(i) << endl;
    }
    
    cout << endl;
    
    //menu switch system
    cout << "MENU" << endl;
    cout << "a - Add player" << endl;
    cout << "d - Remove player" << endl;
    cout << "u - Update player rating" << endl;
    cout << "r - Output players above a rating" << endl;
    cout << "o - Output roster" << endl;
    cout << "q - Quit" << endl;
    cout << endl;
    cout << "Choose an option:" << endl;
    
    cin >> userInput;
    
    while (userInput != 'q') {
        switch (userInput) {
            case 'a':
                // add player
                jerseyNum.resize(PLAYER_COUNT + 1);
                playerRate.resize(PLAYER_COUNT + 1);
                
                cout << "Enter new player's jersey number:" << endl;
                cin >> jerseyNum.at(PLAYER_COUNT);
                
                cout << "Enter new player's rating:" << endl;
                cin >> playerRate.at(PLAYER_COUNT);
                
                cin >> userInput;
                break;
            
            case 'd':
                // delete player
                cout << "Enter a jersey number:" << endl;
                cin >> playerJersey;
                
                for(i = 0; i < jerseyNum.size(); ++i) {
                    if(jerseyNum.at(i) == playerJersey) {
                        jerseyNum.erase(jerseyNum.begin() + i);
                        playerRate.erase(playerRate.begin() + i);
                    }
                }
                
                cin >> userInput;
                break;
                
            case 'u':
                // update player rating
                cout << "Enter a jersey number: " << endl;
                cin >> playerJersey;
                
                cout << "Enter a new rating for player: " << endl;
                cin >> newPlayerRate;
                
                for (i = 0; i < jerseyNum.size(); ++i) {
                    if (jerseyNum.at(i) == playerJersey) {
                        playerRate.at(i) = newPlayerRate;
                    }
                }
                
                cin >> userInput;
                break;
                
            case 'r':
                // output players above a rating
                cout << "Enter a rating" << endl;
                cin >> rateValue;
                
                cout << endl;
                cout << "ABOVE " << rateValue << endl;
                
                for (i = 0; i < jerseyNum.size(); ++i) {
                    if (playerRate.at(i) > rateValue) {
                        cout << "Player 1 -- Jersey number: " << jerseyNum.at(i);
                        cout << ", Rating: " << playerRate.at(i) << endl;
                    }
                }
                
                cin >> userInput;
                break;
                
            case 'o':
                // roster output
                cout << "ROSTER" << endl;
               for (i = 0; i < jerseyNum.size(); ++i) {
                    cout << "Player " << i + 1 << " -- Jersey number: " << jerseyNum.at(i);
                    cout << ", Rating: " << playerRate.at(i) << endl;
                   
                }
                
                cin >> userInput;
                break;
                
            default:
                cout << endl;
                cout << "Choose an option:" << endl;
                
                cin >> userInput;
                break;
        }
        
    }
    
    return 0;
}
