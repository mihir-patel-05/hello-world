#include <iostream>

using namespace std;

int main() {
    int num;
    
    // this while loop will keep running until we the user stops entering in a number 
    while (cin >> num) { 
        if (num < 0) break;  //if the number is negetive then stop 
        
        int persistence = 0; //This variable will keep track of the persistence
        int root = num; //This variable will keep track of the root
        
        while (root >= 10) { //This while loop will run until the root is less than 10
            int sum = 0; //This variable will keep track of the sum
            while (root > 0) { //This while loop will run until the root is 0
                sum += root % 10; //This will add the last digits to the sum 
                root /= 10; //get rid of the last digits
            }
            root = sum; //set the root to the sum
            persistence++; //increment the persistence
        }
        
        cout << persistence << " " << root << endl; //print the persistence and the root
    }
    
    return 0;
}
