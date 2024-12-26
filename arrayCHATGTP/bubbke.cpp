#include <iostream>
using namespace std;

const int SIZE = 10;
int commonrating = 0;
int maxCount = 0;  // Added to track most frequent rating
int sum = 0;
int average;

void bubbleSort(int ratings[], int size)
{
    // Calculate sum first
    sum = 0;  // Reset sum
    for (int i = 0; i < size; i++)
    {
        sum += ratings[i];
    }

    // Bubble sort in descending order
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (ratings[j] < ratings[j + 1])  // Changed to < for descending order
            {
                int temp = ratings[j];
                ratings[j] = ratings[j + 1];
                ratings[j + 1] = temp;
            }
        }
    }

    // Find most common rating
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (ratings[i] == ratings[j])
            {
                count++;
                if (count > maxCount)
                {
                    maxCount = count;
                    commonrating = ratings[i];
                }
            }
        }
       
    }

    average = sum / size;
}

void displaymovie(int ratings[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (i < 5)
        {
            cout << "Movie (rating is high)" << i + 1 << ": " << ratings[i] << endl;  // Changed to "high" since sorted in descending
        }
        if (i >= 5)
        {
            cout << "Movie (rating is low)" << i + 1 << ": " << ratings[i] << endl;
        }
    }
    cout << "Most common rating: " << commonrating << " (appears " << maxCount << " times)" << endl;
    cout << "Average rating: " << average << endl;
}

int main()
{
    int movieRatings[SIZE] = {4, 2, 5, 3, 5, 4, 3, 5, 2, 4};

    cout << "Original ratings: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << movieRatings[i] << " ";
    }
    cout << endl;

    bubbleSort(movieRatings, SIZE);
    displaymovie(movieRatings, SIZE);

    return 0;
}
