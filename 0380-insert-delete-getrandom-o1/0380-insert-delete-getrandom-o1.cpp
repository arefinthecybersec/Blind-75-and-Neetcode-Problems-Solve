class RandomizedSet {
public:
    // Use an unordered_map for O(1) insert and delete
    std::unordered_map<int, int> map;  // Maps value to its index in the vector
    std::vector<int> values;           // Stores values for O(1) random access

    RandomizedSet() {}

    bool insert(int val) {
        if (map.find(val) != map.end()) {
            return false; // Value already exists
        }
        map[val] = values.size(); // Store index of val in the map
        values.push_back(val);    // Add val to the end of values vector
        return true;
    }

    bool remove(int val) {
        if (map.find(val) == map.end()) {
            return false; // Value doesn't exist
        }
        // Move the last element to the position of the element to delete
        int lastElement = values.back();
        map[lastElement] = map[val];
        values[map[val]] = lastElement;
        
        // Remove the last element
        values.pop_back();
        map.erase(val);
        return true;
    }

    int getRandom() {
        int randomIndex = rand() % values.size();
        return values[randomIndex];
    }
};



// class RandomizedSet {
// public:
//     RandomizedSet() { 
//         set<int> randomizedSet; 
//     }

//     bool insert(int val) {
//         if (randomizedSet.find(val) == randomizedSet.end()) {
//             randomizedSet.insert(val);
//             return true;
//         }
//         return false;
//     }

//     bool remove(int val) {
//         if (randomizedSet.find(val) == randomizedSet.end()) {
//             return false;
//         }
//         else {
//             randomizedSet.erase(k);
//             return true;
//         }
//     }

//     int getRandom() {
//         vector<int> vec(randomizedSet.begin(), randomizedSet.end());
//         int sz = vec.size();
//         return vec[(sz / 2)];
//     }
// };