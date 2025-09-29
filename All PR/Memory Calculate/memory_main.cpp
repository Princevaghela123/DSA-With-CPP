#include"memory.cpp"
int main() {
    StdManager<int> manager;
    
    int choice;
    int studentID;
    char studentName[100];

    do
    {
        displayMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter Student ID: ";
            cin >> studentID;
            cout << "Enter Student Name: ";
            cin >> studentName;
            manager.addStudent(studentID, studentName);
            break;
        
        case 2:
            cout << "\nDisplaying all students..." << endl;
            manager.displayAllStudents();
            break;

        case 3:
            cout << "\nEnter Student ID to remove: ";
            cin >> studentID;
            manager.removeStudentByID(studentID);
            break;

        case 4:
            cout << "\nEnter Student ID to search: ";
            cin >> studentID;
            manager.searchStudentByID(studentID);
            break;

        case 5:
            cout << "\nTotal number of students: " << manager.getTotalStudents() << endl;
            break;

        case 6:
            cout << "\nThank you for using Student Management System!" << endl;
            cout << "Goodbye!" << endl;
        default:
            cout << "\nInvalid choice! Please enter a number between 1 and 6." << endl;
            break;
        }
        
    } while (choice != 0);
    

    return 0;
}
