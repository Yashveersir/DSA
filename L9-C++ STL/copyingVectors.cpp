#include <iostream>
#include <vector>
#include <algorithm> // Required for std::copy

using namespace std;

int main() {
    vector<int> vec1 = {1, 2, 3, 4};
    
    // Method 1: Direct Assignment
    vector<int> vec2 = vec1;
    
    // Method 2: Copy Constructor
    vector<int> vec3(vec1);
    
    // Method 3: Using assign() Method
    vector<int> vec4;
    vec4.assign(vec1.begin(), vec1.end());
    
    // Method 4: Using Iterators
    vector<int> vec5(vec1.begin(), vec1.end());
    
    // Method 5: Using std::copy
    vector<int> vec6(vec1.size());
    std::copy(vec1.begin(), vec1.end(), vec6.begin());

    // Print the contents of vec6 to confirm the copy
    cout << "vec6 contains: ";
    for(int i : vec6) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
