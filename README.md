# Online_academic_counseling_system

Scenario for the Code
System Overview: This program is an Online Academic Counseling System designed to manage users, offer academic resources, and provide basic admin functionality. The program allows users to register, log in, view resources, and provides an admin panel for managing the system.

Scenario for the Code
System Overview: This program is an Online Academic Counseling System designed to manage users, offer academic resources, and provide basic admin functionality. The program allows users to register, log in, view resources, and provides an admin panel for managing the system.

Key Features of the Scenario
1. User Registration
New users can register by providing:
- Name
- Email
- Academic background
- Data is stored in the User structure.
- Example:
A student named Alice registers with the email alice@example.com and academic background Computer Science.


2. Login System
- Users log in using their email.
- If the email exists in the system, login is successful. Otherwise, they must retry.
- Example:
Alice logs in using her email alice@example.com. If registered, she gets access to features like viewing resources.


3. Academic Resources
- Provides pre-defined academic resources (e.g., MATH, DBS, CLOUD, MOBILE).
- Available only to logged-in users.
- Example:
After logging in, Alice views resources like "MATH" and "CLOUD."


4. Admin Panel
- Admins can log in using a hardcoded password (778899).
- Admin functionality includes:
- Database space monitoring (e.g., 4.35 GB free space).
- Non-admin users are denied access.
- Example:
Admin John logs in with the password, accesses the admin panel, and monitors the database.


5. Course Management (Planned Feature)
- Admins can add courses with:
- Course code
- Title
- Description
- Prerequisites
- Stored in the Course structure.
- This functionality is partially implemented.

---------
User Flow
- A new user opens the system:
- They see options like register, log in, or view resources.
- The user chooses to register.
- After entering details, their information is stored.
- The user logs in using their email.
- They gain access to resources.
- If the user is an admin, they can enter the admin panel using the password.
- They monitor or manage system data.

---------
Limitations
- Admin Identification:
- The system assumes all logged-in users are non-admins unless explicitly determined.
- No Persistent Storage:
- Data is stored in memory only; restarting the program loses all information.
- Limited Admin Features:
- Admin functionality is minimal, e.g., no course deletion or advanced management options.
- No User Authentication for Password:
- Anyone knowing the admin password can log in, regardless of their email.
