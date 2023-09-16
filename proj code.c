
// Online Academic counselling system
//*******************

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store user details
typedef struct {
    char name[50];
    char email[50];
    char academicBackground[100];
} User;

// Structure to store course details
typedef struct {
    char courseCode[10];
    char title[50];
    char description[100];
    char prerequisites[100];
} Course;

// Function to register a new user
void registerUser(User* users, int* numUsers) {
    printf("Enter your name: ");
    fgets(users[*numUsers].name, sizeof(users[*numUsers].name), stdin);
    users[*numUsers].name[strcspn(users[*numUsers].name, "\n")] = '\0';

    printf("Enter your email: ");
    fgets(users[*numUsers].email, sizeof(users[*numUsers].email), stdin);
    users[*numUsers].email[strcspn(users[*numUsers].email, "\n")] = '\0';

    printf("Enter your academic background: ");
    fgets(users[*numUsers].academicBackground, sizeof(users[*numUsers].academicBackground), stdin);
    users[*numUsers].academicBackground[strcspn(users[*numUsers].academicBackground, "\n")] = '\0';

    (*numUsers)++;
    printf("Registration successful!\n");
}

// Function to add a new course to the catalog
void addCourse(Course* courses, int* numCourses) {
    printf("Enter the course code: ");
    fgets(courses[*numCourses].courseCode, sizeof(courses[*numCourses].courseCode), stdin);
    courses[*numCourses].courseCode[strcspn(courses[*numCourses].courseCode, "\n")] = '\0';

    printf("Enter the title of the course: ");
    fgets(courses[*numCourses].title, sizeof(courses[*numCourses].title), stdin);
    courses[*numCourses].title[strcspn(courses[*numCourses].title, "\n")] = '\0';

    printf("Enter the description of the course: ");
    fgets(courses[*numCourses].description, sizeof(courses[*numCourses].description), stdin);
    courses[*numCourses].description[strcspn(courses[*numCourses].description, "\n")] = '\0';

    printf("Enter the prerequisites for the course: ");
    fgets(courses[*numCourses].prerequisites, sizeof(courses[*numCourses].prerequisites), stdin);
    courses[*numCourses].prerequisites[strcspn(courses[*numCourses].prerequisites, "\n")] = '\0';

    (*numCourses)++;
    printf("Course added to the catalog!\n");
}

// Function to handle user login
int login(User* users, int numUsers) {
    char email[50];
    printf("Enter your email: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';

    for (int i = 0; i < numUsers; i++) {
        if (strcmp(users[i].email, email) == 0) {
            printf("Login successful!\n");
            return 1;
        }
    }

    printf("Invalid email. Please try again.\n");
    return 0;
}

// Function to display academic resources
void displayResources() {
    printf("Academic resources:\n");
    // Code to display academic resources
    printf("MATH\n");
    printf("DBS\n");
    printf("CLOUD\n");
    printf("MOBILE\n");
}

// Function to handle admin functionality
void adminFunctionality(User* users, int numUsers, Course* courses, int numCourses) {
    // Code to handle admin functionality
    printf("enter pass = ");
    int pass=778899, check;                      // admin pass 778899
    scanf("%d", &check);
    if(check==pass)
    {
        printf("U HAVE LOGGED IN TO ADMIN PALNEL\n");
        printf("********\n");
        printf("4.35 gb free space available in database now\n");
    }
    else
    {
        printf("pass incorrect\n");
    }
}

int main() {
    User users[100];        // Array to store user details
    Course courses[100];    // Array to store course catalog
    int numUsers = 0;       // Variable to keep track of the number of registered users
    int numCourses = 0;     // Variable to keep track of the number of courses

    int loggedIn = 0;      // Variable to keep track of login status
    int isAdmin = 0;       // Variable to determine if the logged-in user is an admin

    int choice;

    do {
        printf("Welcome to the Online Academic Counseling System\n");
        printf("1. Register\n");
        printf("2. Login\n");
        printf("3. Academic Resources\n");
        printf("4. Admin Functionality\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Clear the newline character from the input buffer

        switch (choice) {
            case 1:
                registerUser(users, &numUsers);
                break;
            case 2:
                loggedIn = login(users, numUsers);
                if (loggedIn) {
                    printf("Login successful!\n");
                    isAdmin = 1; // Assuming the logged-in user is not an admin by default
                    // Check if the user is an admin
                    // Set isAdmin to 1 if the user is an admin
                    
                } else {
                    printf("Invalid email. Please try again.\n");
                }
                break;
            case 3:
                if (loggedIn) {
                    displayResources();
                } else {
                    printf("Please log in to access the academic resources.\n");
                }
                break;
            case 4:
                if (loggedIn && isAdmin) {
                    adminFunctionality(users, numUsers, courses, numCourses);
                } else {
                    printf("You do not have admin privileges.\n");
                }
                break;
            case 5:
                printf("Thank you for using the Online Academic Counseling System. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

        printf("\n");
    } while (choice != 5);

    return 0;
}








