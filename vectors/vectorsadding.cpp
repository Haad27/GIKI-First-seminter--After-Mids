#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector<int> getvectors()
{
    vector<int> vec;
    int num, value;

    cout << "ënter the numbemrs of vectors \n";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cout << "enter the value \n";
        cin >> value;
        vec.push_back(value);
    }
    return vec;
}

vector<int> getsum(vector<int> vec1, vector<int> vec2)
{
    vector<int> result;
    if (vec1.size() > vec2.size())
    {
        for (int i = 0; i < vec1.size(); i++)
        {
                int sum = 0;

            if (i < vec1.size())
                sum = sum + vec1[i];
            if (i < vec2.size())
                sum = sum + vec2[i];
            result.push_back(sum);
        }
    }
    else if (vec1.size() < vec2.size())
    {
        for (int i = 0; i < vec2.size(); i++)
        {
                int sum = 0;

            if (i < vec1.size())
                sum = sum + vec1[i];
            if (i < vec2.size())
                sum = sum + vec2[i];
            result.push_back(sum);
        }
    }

    return result;
}
void final(vector<int> result)
{
    cout << "the sum is";
    for (int x : result)
    {
        cout << x << endl;
    }
}
int main()
{
    vector<int> get, get2, result;
    cout << "enter the first vector ";
    get = getvectors();
    cout << "enter the first vector ";
    get2 = getvectors();
    cout << "the sum of both";
    result = getsum(get, get2);
    final(result);
    return 0;
}