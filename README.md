# Phone Book Application - C++ CRUD Implementation

![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white) ![Console](https://img.shields.io/badge/console-black.svg?style=for-the-badge&logo=windows-terminal&logoColor=white)


This is a simple **C++ console-based CRUD application** that simulates a basic **phone book** using the Standard Template Library (`vector`). It allows users to manage contact information by adding, viewing, updating, deleting, and searching for contacts.

---

## 🔧 Features

- **Create Contact** – Add a new contact with name and phone number  
- **Read Contacts** – Display all saved contacts  
- **Update Contact** – Modify an existing contact by name  
- **Delete Contact** – Remove a contact by phone number  
- **Search Contact** – Find contacts by name or phone number  
- **Input Validation** – Prevents invalid menu choices and handles whitespace in names

---

## 📂 Data Structure Used

- `vector<Person>` – Stores a list of `Person` objects in memory  
- The `Person` struct holds:
  - `name` (string)
  - `phoneNum` (int)

---

## 🧪 How It Works

1. The program runs an infinite loop with a user-friendly menu
2. Each choice triggers a function (`createContact`, `readContacts`, etc.)
3. `getline()` is used to properly handle names with spaces
4. Proper input validation ensures smooth user experience

---

## ✅ Sample Menu

```
Phone Book - CRUD Menu
1. Create (Add Contact)
2. Read (View Contacts)
3. Update (Edit Contact)
4. Delete (Remove Contact)
5. Search Contact
0. Exit
```

---

## 📌 How to Run

1. Compile the program using any C++ compiler (e.g., g++)
   ```bash
   g++ -o phonebook phonebook.cpp
   ```
2. Run the executable
   ```bash
   ./phonebook
   ```

---

## How to Use

1. **Clone the repository**:
   ```bash
   git clone https://github.com/albrud/Telephone-book-using-STL-CPP.git
   cd Telephone-book-using-STL-CPP
   ```


## 📚 Learning Objectives

This project demonstrates:
- Practical use of **structs** and **vectors**
- Implementing **CRUD operations**
- Handling **user input** properly
- Applying basic **error handling and validation**

---

## 🚀 Future Improvements

- Switch to `unordered_map` for faster search/update/delete
- Save/load contacts from a file
- Case-insensitive search support





   
