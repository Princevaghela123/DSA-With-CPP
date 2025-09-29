#include <iostream>
#include <vector>
using namespace std;
template <typename T>
class StdManager {
private:
    vector<T> studentIDs;     
    vector<const char*> studentNames;

public:

    // Method to add a student using push_back()
    void addStudent(const T& id, const char* name) {
        studentIDs.push_back(id);
        studentNames.push_back(name);
        cout << "Student added successfully" << endl;
    }

    // Method to display all students
    void displayAllStudents() const {
        if (studentIDs.size() == 0) {
            cout << "No students found in the system." << endl;
        }
        else{
            for (int i = 0; i < studentIDs.size(); i++) {
                cout << studentIDs[i] << "               " << studentNames[i] << endl;
            }
        }
        
    }

    // Method to remove a student by ID
    void removeStudentByID(const T& id) {
        for (int i = 0; i < studentIDs.size(); i++) {
            if (studentIDs[i] == id) {
                cout << "Removing student: ID=" << studentIDs[i] << ", Name=" << studentNames[i] << endl;
                
                // Remove from both vectors by shifting elements
                for (int j = i; j < studentIDs.size() - 1; j++) {
                    studentIDs[j] = studentIDs[j + 1];
                    studentNames[j] = studentNames[j + 1];
                }
                studentIDs.pop_back();
                studentNames.pop_back();
                
                cout << "Student removed successfully!" << endl;
                
            }
        }
    }

    // Method to search for a student by ID and display details
    void searchStudentByID(const T& id) const {
        for (int i = 0; i < studentIDs.size(); i++) {
            if (studentIDs[i] == id) {
                cout << "Student ID: " << studentIDs[i] << endl;
                cout << "Student Name: " << studentNames[i] << endl;
            }
            else{
                cout << "Student with ID " << id << " not found!" << endl;
            }
        }
        
    }

    // Method to get total number of students
    int getTotalStudents() const {
        return studentIDs.size();
    }

    // Method to check if system is empty
    bool isEmpty() const {
        return studentIDs.size() == 0;
    }
};

// Function to display menu
void displayMenu() {
    cout << endl << endl << endl;
    cout << "press 1 to Add students to list" << endl;
    cout << "press 2 to Display the list of students" << endl;
    cout << "press 3 to Remove a student from the list by ID" << endl;
    cout << "press 4 to Search for a student by ID" << endl;
    cout << "press 5 to Display total number of students" << endl;
    cout << "press 0 to Exit" << endl;
}