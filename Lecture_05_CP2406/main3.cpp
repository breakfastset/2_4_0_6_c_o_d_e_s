#include <iostream>

using namespace std;

int main() {
    // create a dynamic array of scores of capacity 10
    int capacity = 3;
    int num_scores = 0;
    int * scoresArray = new int[capacity];
    int score;

    cout << "Enter score (0 to 100, -ve to exit): ";
    cin >> score;
    while (score >= 0) {
        //     if scores is full
        if (num_scores == capacity) {
            capacity = capacity * 2;
            // 1. create a new array with double the size of the old one
            int * tempArray = new int[capacity];
            // 2. copy from old to new
            for (int i = 0; i < num_scores; i++) {
                tempArray[i] = scoresArray[i];
            }
            // 3. release old memory
            delete [] scoresArray;
            // 4. point scoresArray to tempArray
            scoresArray = tempArray;
            // 5. point tempArray to null for safety
            tempArray = nullptr;
        }
        scoresArray[num_scores] = score;
        num_scores++;
        cout << "Enter score (0 to 100, -ve to exit): ";
        cin >> score;
    }

    // display the number of students
    cout << "Number of scores: " << num_scores << endl;
    cout << "Capacity of array: " << capacity << endl;
    // display every score keyed in
    for (int i =0; i < num_scores; i++) {
        cout << i << ": " << scoresArray[i] << endl;
    }


    delete [] scoresArray;   // return memory for array
    return 0;
}