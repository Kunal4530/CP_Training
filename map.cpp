#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap;

    // Insert some key-value pairs into the map
    myMap[1] = "apple";
    myMap[2] = "banana";
    myMap[3] = "orange";

    // Declare an iterator for the map
    std::map<int, std::string>::iterator it;

    // Iterate through the map
    for (it = myMap.begin(); it != myMap.end(); ++it) {
        // Access the value using the iterator
        std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    }

    return 0;
}


// #include <iostream>
// #include <map>

// int main() {
//     std::map<int, std::string> myMap;

//     // Insert some key-value pairs into the map
//     myMap[1] = "apple";
//     myMap[2] = "banana";
//     myMap[3] = "orange";

//     // Accessing values directly using keys
//     std::cout << "Value for key 1: " << myMap[1] << std::endl;
//     std::cout << "Value for key 2: " << myMap[2] << std::endl;
//     std::cout << "Value for key 3: " << myMap[3] << std::endl;

//     return 0;
// }

// #include <iostream>
// #include <map>

// int main() {
//     std::map<int, std::string> myMap;

//     // Insert some key-value pairs into the map
//     myMap[1] = "apple";
//     myMap[2] = "banana";
//     myMap[3] = "orange";

//     // Accessing values using a loop
//     for (const auto it : myMap) {
//         // pair.first is the key, pair.second is the value
//         std::cout << "Key: " << it.first << ", Value: " << it.second << std::endl;
//     }

//     return 0;
// }

