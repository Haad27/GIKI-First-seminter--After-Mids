#include <iostream>
#include <string>
using namespace std;

struct Restaurant {
    string name;
    int rating;
    int priceLevel;  // 1-5 ($-$$$$)
    int reviewCount;
};

const int SIZE = 6;

void bubbleSortByRating(Restaurant restaurants[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (restaurants[j].rating < restaurants[j + 1].rating) {
                // Swap restaurants[j] and restaurants[j+1]
                Restaurant temp = restaurants[j];
                restaurants[j] = restaurants[j + 1];
                restaurants[j + 1] = temp;
            }
        }
    } 
    
}

void findBestValueRestaurants(Restaurant restaurants[], int size) {
    int best = 0;
 for (int i = 0; i < size ; i++) {
        if (restaurants[i].rating > best)
        {
             best = restaurants[i].rating ;
        }
        
    } 
             cout << best;

 }

void displayStatistics(Restaurant restaurants[], int size) {
    // TODO: Show average rating, most common price level
    // Show restaurants grouped by price level
}

int main() {
    Restaurant restaurants[SIZE] = {
        {"Pizza Place", 4, 2, 150},
        {"Fancy Dining", 5, 5, 80},
        {"Burger Joint", 4, 1, 220},
        {"Sushi Bar", 3, 4, 90},
        {"Taco Shop", 4, 1, 180},
        {"Cafe Corner", 3, 2, 120}
    };

    cout << "Original Restaurant List:\n";
    for(int i = 0; i < SIZE; i++) {
        cout << restaurants[i].name << " - Rating: " << restaurants[i].rating 
             << ", Price Level: " << restaurants[i].priceLevel 
             << ", Reviews: " << restaurants[i].reviewCount << endl;
    }
    cout << endl;

findBestValueRestaurants(restaurants,SIZE);
    return 0;
}
