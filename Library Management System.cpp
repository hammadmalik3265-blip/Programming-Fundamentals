#include <iostream>
#include <cstring> 
using namespace std;

// Constant for maximum number of books
const int MAX_BOOKS = 100;

// Structure to store book information
struct Book {
    int id;             // Book ID
    char title[50];     // Book title
    char author[50];    // Author name
    int quantity;       // Number of copies
};

// Function prototypes
void addBook(Book books[], int &count);
void displayBooks(Book books[], int count);
void searchBook(Book books[], int count);
void updateBook(Book books[], int count);
void deleteBook(Book books[], int &count);

int main() {
    Book library[MAX_BOOKS]; // Array to store books
    int bookCount = 0;       // Total number of books
    int choice;

    do {
        // Display menu
        cout << "\n=== Library Management System ===\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Update Book\n";
        cout << "5. Delete Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Ignore newline left in buffer

        // Execute choice using if-else
        if(choice == 1) {
            addBook(library, bookCount);
        }
        else if(choice == 2) {
            displayBooks(library, bookCount);
        }
        else if(choice == 3) {
            searchBook(library, bookCount);
        }
        else if(choice == 4) {
            updateBook(library, bookCount);
        }
        else if(choice == 5) {
            deleteBook(library, bookCount);
        }
        else if(choice == 6) {
            cout << "Exiting the program...\n";
        }
        else {
            cout << "Invalid choice! Please try again.\n";
        }

    } while(choice != 6); // Repeat menu until exit

    return 0; // Program ends
}

// Function to add a book
void addBook(Book books[], int &count) {
    if(count < MAX_BOOKS) {
        cout << "\nEnter Book ID: ";
        cin >> books[count].id;
        cin.ignore(); // Clear newline
        cout << "Enter Book Title: ";
        cin.getline(books[count].title, 50);
        cout << "Enter Author Name: ";
        cin.getline(books[count].author, 50);
        cout << "Enter Quantity: ";
        cin >> books[count].quantity;
        count++; // Update book count
        cout << "Book added successfully!\n";
    } else {
        cout << "Library is full! Cannot add more books.\n";
    }
}

// Function to display all books
void displayBooks(Book books[], int count) {
    if(count == 0) {
        cout << "No books available in the library.\n";
        return;
    }
    cout << "\nID\tTitle\tAuthor\tQuantity\n";
    for(int i = 0; i < count; i++) {
        cout << books[i].id << "\t" << books[i].title << "\t" 
             << books[i].author << "\t" << books[i].quantity << "\n";
    }
}

// Function to search a book by ID
void searchBook(Book books[], int count) {
    int id;
    cout << "Enter Book ID to search: ";
    cin >> id;
    int found = 0; // Flag to check if book exists

    for(int i = 0; i < count; i++) {
        if(books[i].id == id) {
            cout << "Book Found: " << books[i].title 
                 << " by " << books[i].author 
                 << ", Quantity: " << books[i].quantity << "\n";
            found = 1;
            break;
        }
    }

    if(found == 0) {
        cout << "Book not found!\n";
    }
}

// Function to update book details
void updateBook(Book books[], int count) {
    int id;
    cout << "Enter Book ID to update: ";
    cin >> id;
    cin.ignore(); // Clear newline
    int found = 0;

    for(int i = 0; i < count; i++) {
        if(books[i].id == id) {
            cout << "Enter new Title: ";
            cin.getline(books[i].title, 50);
            cout << "Enter new Author: ";
            cin.getline(books[i].author, 50);
            cout << "Enter new Quantity: ";
            cin >> books[i].quantity;
            cout << "Book updated successfully!\n";
            found = 1;
            break;
        }
    }

    if(found == 0) {
        cout << "Book not found!\n";
    }
}

// Function to delete a book
void deleteBook(Book books[], int &count) {
    int id;
    cout << "Enter Book ID to delete: ";
    cin >> id;
    int found = 0;

    for(int i = 0; i < count; i++) {
        if(books[i].id == id) {
            // Shift all books left
            for(int j = i; j < count - 1; j++) {
                books[j] = books[j + 1];
            }
            count--; // Decrease book count
            cout << "Book deleted successfully!\n";
            found = 1;
            break;
        }
    }

    if(found == 0) {
        cout << "Book not found!\n";
    }
}

