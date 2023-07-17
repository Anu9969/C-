// #include <iostream>
// #include <vector>
// #include <cmath>
// #include <algorithm>

// using namespace std;

// class Set {
// private:
//     vector<int> elements;

// public:
//     void addElement(int element) {
//         elements.push_back(element);
//     }

//     void removeElement(int element) {
//         elements.erase(remove(elements.begin(), elements.end(), element), elements.end());
//     }

//     bool isMember(int element) {
//         return find(elements.begin(), elements.end(), element) != elements.end();
//     }

//     vector<vector<int>> powerSet() {
//         int setSize = elements.size();
//         int powerSetSize = pow(2, setSize);

//         vector<vector<int>> result;
//         for (int i = 0; i < powerSetSize; i++) {
//             vector<int> subset;
//             for (int j = 0; j < setSize; j++) {
//                 if (i & (1 << j))
//                     subset.push_back(elements[j]);
//             }
//             result.push_back(subset);
//         }

//         return result;
//     }

//     bool isSubset(const Set& otherSet) {
//         for (const int& element : otherSet.elements) {
//             if (!isMember(element))
//                 return false;
//         }
//         return true;
//     }

//     Set unionSet(const Set& otherSet) {
//         Set resultSet = *this;
//         for (const int& element : otherSet.elements) {
//             if (!resultSet.isMember(element))
//                 resultSet.addElement(element);
//         }
//         return resultSet;
//     }

//     Set intersection(const Set& otherSet) {
//         Set resultSet;
//         for (const int& element : elements) {
//             if (otherSet.isMember(element))
//                 resultSet.addElement(element);
//         }
//         return resultSet;
//     }

//     Set complement(const Set& universalSet) {
//         Set resultSet = universalSet;
//         for (const int& element : elements) {
//             resultSet.removeElement(element);
//         }
//         return resultSet;
//     }

//     Set setDifference(const Set& otherSet) {
//         Set resultSet = *this;
//         for (const int& element : otherSet.elements) {
//             resultSet.removeElement(element);
//         }
//         return resultSet;
//     }

//     Set symmetricDifference(const Set& otherSet) {
//         Set resultSet = unionSet(otherSet);
//         Set intersectionSet = intersection(otherSet);
//         resultSet = resultSet.setDifference(intersectionSet);
//         return resultSet;
//     }

//     vector<pair<int, int>> cartesianProduct(const Set& otherSet) {
//         vector<pair<int, int>> result;
//         for (const int& element1 : elements) {
//             for (const int& element2 : otherSet.elements) {
//                 result.push_back(make_pair(element1, element2));
//             }
//         }
//         return result;
//     }

//     void display() {
//         cout << "{ ";
//         for (const int& element : elements) {
//             cout << element << " ";
//         }
//         cout << "}" << endl;
//     }
// };

// int main() {
//     Set set;
//     Set universalSet;

//     int choice;
//     do {
//         cout << "\n---- Set Operations Menu ----" << endl;
//         cout << "1. Add Element\n"
//             << "2. Remove Element\n"
//             << "3. Check if Element is Member\n"
//             << "4. Power Set\n"
//             << "5. Check if Subset\n"
//             << "6. Union\n"
//             << "7. Intersection\n"
//             << "8. Complement\n"
//             << "9. Set Difference\n"
//             << "10. Symmetric Difference\n"
//             << "11. Cartesian Product\n"
//             << "12. Display Set\n"
//             << "0. Exit\n"
//             << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//         case 0:
//             cout << "Exiting..." << endl;
//             break;
//         case 1: {
//             int element;
//             cout << "Enter the element to add: ";
//             cin >> element;
//             set.addElement(element);
//             cout << "Element added successfully." << endl;
//             break;
//         }
//         case 2: {
//             int element;
//             cout << "Enter the element to remove: ";
//             cin >> element;
//             set.removeElement(element);
//             cout << "Element removed successfully." << endl;
//             break;
//         }
//         case 3: {
//             int element;
//             cout << "Enter the element to check: ";
//             cin >> element;
//             bool isMember = set.isMember(element);
//             if (isMember)
//                 cout << "The element is a member of the set." << endl;
//             else
//                 cout << "The element is not a member of the set." << endl;
//             break;
//         }
//         case 4: {
//             vector<vector<int>> powerSet = set.powerSet();
//             cout << "Power Set: " << endl;
//             for (const vector<int>& subset : powerSet) {
//                 cout << "{ ";
//                 for (const int& element : subset) {
//                     cout << element << " ";
//                 }
//                 cout << "}" << endl;
//             }
//             break;
//         }
//         case 5: {
//             Set otherSet;
//             int element;
//             cout << "Enter the elements of the other set (-1 to stop):\n";
//             while (cin >> element && element != -1) {
//                 otherSet.addElement(element);
//             }
//             bool isSubset = set.isSubset(otherSet);
//             if (isSubset)
//                 cout << "The set is a subset of the other set." << endl;
//             else
//                 cout << "The set is not a subset of the other set." << endl;
//             break;
//         }
//         case 6: {
//             Set otherSet;
//             int element;
//             cout << "Enter the elements of the other set (-1 to stop):\n";
//             while (cin >> element && element != -1) {
//                 otherSet.addElement(element);
//             }
//             Set unionSet = set.unionSet(otherSet);
//             cout << "Union Set: ";
//             unionSet.display();
//             break;
//         }
//         case 7: {
//             Set otherSet;
//             int element;
//             cout << "Enter the elements of the other set (-1 to stop):\n";
//             while (cin >> element && element != -1) {
//                 otherSet.addElement(element);
//             }
//             Set intersectionSet = set.intersection(otherSet);
//             cout << "Intersection Set: ";
//             intersectionSet.display();
//             break;
//         }
//         case 8: {
//             Set universalSet;
//             int element;
//             cout << "Enter the elements of the universal set (-1 to stop):\n";
//             while (cin >> element && element != -1) {
//                 universalSet.addElement(element);
//             }
//             Set complementSet = set.complement(universalSet);
//             cout << "Complement Set: ";
//             complementSet.display();
//             break;
//         }
//         case 9: {
//             Set otherSet;
//             int element;
//             cout << "Enter the elements of the other set (-1 to stop):\n";
//             while (cin >> element && element != -1) {
//                 otherSet.addElement(element);
//             }
//             Set differenceSet = set.setDifference(otherSet);
//             cout << "Set Difference: ";
//             differenceSet.display();
//             break;
//         }
//         case 10: {
//             Set otherSet;
//             int element;
//             cout << "Enter the elements of the other set (-1 to stop):\n";
//             while (cin >> element && element != -1) {
//                 otherSet.addElement(element);
//             }
//             Set symmetricDifferenceSet = set.symmetricDifference(otherSet);
//             cout << "Symmetric Difference Set: ";
//             symmetricDifferenceSet.display();
//             break;
//         }
//         case 11: {
//             Set otherSet;
//             int element;
//             cout << "Enter the elements of the other set (-1 to stop):\n";
//             while (cin >> element && element != -1) {
//                 otherSet.addElement(element);
//             }
//             vector<pair<int, int>> cartesianProduct = set.cartesianProduct(otherSet);
//             cout << "Cartesian Product: ";
//             for (const auto& pair : cartesianProduct) {
//                 cout << "(" << pair.first << ", " << pair.second << ") ";
//             }
//             cout << endl;
//             break;
//         }
//         case 12: {
//             cout << "Set: ";
//             set.display();
//             break;
//         }
//         default:
//             cout << "Invalid choice. Please try again." << endl;
//         }
//     } while (choice != 0);

//     return 0;
// }


#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class Set {
private:
    vector<int> elements;

public:
    void addElement(int element) {
        elements.push_back(element);
    }

    void removeElement(int element) {
        elements.erase(remove(elements.begin(), elements.end(), element), elements.end());
    }

    bool isMember(int element) const {
        return find(elements.begin(), elements.end(), element) != elements.end();
    }

    vector<vector<int>> powerSet() const {
        int setSize = elements.size();
        int powerSetSize = pow(2, setSize);

        vector<vector<int>> result;
        for (int i = 0; i < powerSetSize; i++) {
            vector<int> subset;
            for (int j = 0; j < setSize; j++) {
                if (i & (1 << j))
                    subset.push_back(elements[j]);
            }
            result.push_back(subset);
        }

        return result;
    }

    bool isSubset(const Set& otherSet) const {
        for (const int& element : otherSet.elements) {
            if (!isMember(element))
                return false;
        }
        return true;
    }

    Set unionSet(const Set& otherSet) const {
        Set resultSet = *this;
        for (const int& element : otherSet.elements) {
            if (!resultSet.isMember(element))
                resultSet.addElement(element);
        }
        return resultSet;
    }

    Set intersection(const Set& otherSet) const {
        Set resultSet;
        for (const int& element : elements) {
            if (otherSet.isMember(element))
                resultSet.addElement(element);
        }
        return resultSet;
    }

    Set complement(const Set& universalSet) const {
        Set resultSet = universalSet;
        for (const int& element : elements) {
            resultSet.removeElement(element);
        }
        return resultSet;
    }

    Set setDifference(const Set& otherSet) const {
        Set resultSet = *this;
        for (const int& element : otherSet.elements) {
            resultSet.removeElement(element);
        }
        return resultSet;
    }

    Set symmetricDifference(const Set& otherSet) const {
        Set resultSet = unionSet(otherSet);
        Set intersectionSet = intersection(otherSet);
        resultSet = resultSet.setDifference(intersectionSet);
        return resultSet;
    }

    vector<pair<int, int>> cartesianProduct(const Set& otherSet) const {
        vector<pair<int, int>> result;
        for (const int& element1 : elements) {
            for (const int& element2 : otherSet.elements) {
                result.push_back(make_pair(element1, element2));
            }
        }
        return result;
    }

    void display() const {
        cout << "{ ";
        for (const int& element : elements) {
            cout << element << " ";
        }
        cout << "}" << endl;
    }
};

int main() {
    Set set;
    Set universalSet;

    int choice;
    do {
        cout << "\n---- Set Operations Menu ----" << endl;
        cout << "1. Add Element\n"
            << "2. Remove Element\n"
            << "3. Check if Element is Member\n"
            << "4. Power Set\n"
            << "5. Check if Subset\n"
            << "6. Union\n"
            << "7. Intersection\n"
            << "8. Complement\n"
            << "9. Set Difference\n"
            << "10. Symmetric Difference\n"
            << "11. Cartesian Product\n"
            << "12. Display Set\n"
            << "0. Exit\n"
            << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 0:
            cout << "Exiting..." << endl;
            break;
        case 1: {
            int element;
            cout << "Enter the element to add: ";
            cin >> element;
            set.addElement(element);
            cout << "Element added successfully." << endl;
            break;
        }
        case 2: {
            int element;
            cout << "Enter the element to remove: ";
            cin >> element;
            set.removeElement(element);
            cout << "Element removed successfully." << endl;
            break;
        }
        case 3: {
            int element;
            cout << "Enter the element to check: ";
            cin >> element;
            bool isMember = set.isMember(element);
            if (isMember)
                cout << "The element is a member of the set." << endl;
            else
                cout << "The element is not a member of the set." << endl;
            break;
        }
        case 4: {
            vector<vector<int>> powerSet = set.powerSet();
            cout << "Power Set: " << endl;
            for (const vector<int>& subset : powerSet) {
                cout << "{ ";
                for (const int& element : subset) {
                    cout << element << " ";
                }
                cout << "}" << endl;
            }
            break;
        }
        case 5: {
            Set otherSet;
            int element;
            cout << "Enter the elements of the other set (-1 to stop):\n";
            while (cin >> element && element != -1) {
                otherSet.addElement(element);
            }
            bool isSubset = set.isSubset(otherSet);
            if (isSubset)
                cout << "The set is a subset of the other set." << endl;
            else
                cout << "The set is not a subset of the other set." << endl;
            break;
        }
        case 6: {
            Set otherSet;
            int element;
            cout << "Enter the elements of the other set (-1 to stop):\n";
            while (cin >> element && element != -1) {
                otherSet.addElement(element);
            }
            Set unionSet = set.unionSet(otherSet);
            cout << "Union Set: ";
            unionSet.display();
            break;
        }
        case 7: {
            Set otherSet;
            int element;
            cout << "Enter the elements of the other set (-1 to stop):\n";
            while (cin >> element && element != -1) {
                otherSet.addElement(element);
            }
            Set intersectionSet = set.intersection(otherSet);
            cout << "Intersection Set: ";
            intersectionSet.display();
            break;
        }
        case 8: {
            Set universalSet;
            int element;
            cout << "Enter the elements of the universal set (-1 to stop):\n";
            while (cin >> element && element != -1) {
                universalSet.addElement(element);
            }
            Set complementSet = set.complement(universalSet);
            cout << "Complement Set: ";
            complementSet.display();
            break;
        }
        case 9: {
            Set otherSet;
            int element;
            cout << "Enter the elements of the other set (-1 to stop):\n";
            while (cin >> element && element != -1) {
                otherSet.addElement(element);
            }
            Set differenceSet = set.setDifference(otherSet);
            cout << "Set Difference: ";
            differenceSet.display();
            break;
        }
        case 10: {
            Set otherSet;
            int element;
            cout << "Enter the elements of the other set (-1 to stop):\n";
            while (cin >> element && element != -1) {
                otherSet.addElement(element);
            }
            Set symmetricDifferenceSet = set.symmetricDifference(otherSet);
            cout << "Symmetric Difference Set: ";
            symmetricDifferenceSet.display();
            break;
        }
        case 11: {
            Set otherSet;
            int element;
            cout << "Enter the elements of the other set (-1 to stop):\n";
            while (cin >> element && element != -1) {
                otherSet.addElement(element);
            }
            vector<pair<int, int>> product = set.cartesianProduct(otherSet);
            cout << "Cartesian Product: ";
            for (const auto& pair : product) {
                cout << "(" << pair.first << ", " << pair.second << ") ";
            }
            cout << endl;
            break;
        }
        case 12: {
            cout << "Set: ";
            set.display();
            break;
        }
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}
