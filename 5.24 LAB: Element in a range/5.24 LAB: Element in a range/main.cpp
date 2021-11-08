#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> userInput;
    int vectorMax;
    int lowerBound;
    int upperBound;
    unsigned int i;
    
    // inputting vector size and bounds
    cin >> vectorMax;
    
    userInput.resize(vectorMax); // allocate numVals to be vector size
    
    // loop the vector
    for (i = 0; i < userInput.size(); ++i) {
        cin >> userInput.at(i);
    }
    
    cin >> lowerBound;
    cin >> upperBound;
    
    // scan for elements in bounds and printing value
    for (i = 0; i < userInput.size(); ++i) {
        if (userInput.at(i) >= lowerBound && userInput.at(i) <= upperBound) {
            cout << userInput.at(i) << ",";
        }
        
    }
    
    cout << endl;
    
    return 0;
}
