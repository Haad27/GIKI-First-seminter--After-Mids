#include <iostream>
#include <vector>

using namespace std;

vector<int> getVectors()
{
    int sum, value;
    vector<int> result;
    cout << "Enter the number of elements: ";
    cin >> sum;
    cout << "Enter " << sum << " integers:" << endl;
    for (int i = 0; i < sum; i++)
    {
        cin >> value;
        result.push_back(value);
    }
    return result;
}

void manipulation(vector<int> &x)
{
    int k;
    vector<int> y;

    cout << "Enter the value of k which you want to manipulate: ";
    cin >> k;
    
    // Ensure k is not larger than the vector size
    k = min(k, static_cast<int>(x.size()));

    for (int i = x.size(); i > 0 ; i--)
    {
        if (!x.empty())
        {
            y.push_back(x.back());
            x.pop_back();
        }
    }
    
    for (int elem : y)
    {
        cout << elem << " ";
    }
    cout << endl;
}

void printFinal(const vector<int>& result)
{
    cout << "The remaining elements in x are: ";
    for (int x : result)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> x = getVectors();
            manipulation(x);

        printFinal(x);


    return 0;
}
