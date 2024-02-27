#include<iostream>
#include<vector>

using namespace std;

int f(vector<int> a, int x) // O(n)
{
    for(int i = 0; i < a.size(); ++i)
    {
        if(a[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> test_vector = {1, 2, 3, 4, 5};
    int test_value = 3;

    int result = f(test_vector, test_value);
    cout << "The index of " << test_value << " in the vector is: " << result << endl;

    return 0;
}