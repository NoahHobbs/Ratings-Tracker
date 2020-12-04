//
//  main.cpp
//  ratingHobbs
//
//  Created by Noah Hobbs on 9/9/20.
//  Copyright © 2020 Noah Hobbs. All rights reserved.
//

#include <iostream>
#include <map>
#include <array>
using namespace std;

int main() {
    //making my map container
    map<string, int> nameAndRating;
    //declaring variables
    string playerName, findPlayer;
    int playerScore;
    //while loop that instructs user to input names and rating until they're done
    //you have to include the rating for q but it will be deleted right after
    while (playerName != "q") {
        cout << "Enter player name (q to quit)\n";
        //getting the user's key or name
        cin >> playerName;
        cout << "Enter rating\n";
        //grabbing the value or rating
        cin >> playerScore;
        //adding the name and rating to my map
        nameAndRating.insert({playerName, playerScore});
        
    }
    //erasing q from my map so it doesn't cause issues
    nameAndRating.erase("q");
    //while loop for the user to find the players he entered
    while (findPlayer != "q") {
        
        cout << "Find player: (q to quit) ";
        //grabbing the user inputted string to see what person he wants to display
        cin >> findPlayer;
        // if the key the user enters does not exist it will be found by this if...else-if...else
        if (nameAndRating.find(findPlayer) != nameAndRating.end() ) {
            int findRating = nameAndRating[findPlayer];
            //prints the key and value in a nice string if the key does exist
            cout << findPlayer << " has a rating of "  << findRating << endl;
        } else if (findPlayer == "q"){
            //this else if executes if the user enters the exit condition
            cout << "Bye!" << endl;
        } else {
            //if the player enters a value that is not known it will print this
            cout << "Unknown Player" << endl;
        }
       
    }
    return 0;
}
