#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int ROWS = 10; // Number of rows in the theater
const int COLUMNS = 15; // Number of columns in the theater
const double TICKET_PRICE = 10.00; // Price per ticket

struct Movie {
  string title;
  string showtime;
};

vector<Movie> movies; // List of available movies
vector<vector<bool>> seats(ROWS, vector<bool>(COLUMNS, false)); // Seat availability (false = available, true = booked)

void displayMovies() {
  if (movies.empty()) {
    cout << "No movies available." << endl;
    return;
  }
  cout << "Available Movies:" << endl;
  for (int i = 0; i < movies.size(); i++) {
    cout << i + 1 << ". " << movies[i].title << " (" << movies[i].showtime << ")" << endl;
  }
}

bool selectSeat(int row, int col) {
  if (row < 1 || row > ROWS || col < 1 || col > COLUMNS) {
    cout << "Invalid seat selection. Please try again." << endl;
    return false;
  }
  if (seats[row - 1][col - 1]) {
    cout << "Seat is already booked. Please select another seat." << endl;
    return false;
  }
  seats[row - 1][col - 1] = true;
  return true;
}

void bookTicket(int movieIndex) {
  if (movieIndex < 0 || movieIndex >= movies.size()) {
    cout << "Invalid movie selection." << endl;
    return;
  }
  cout << "You selected: " << movies[movieIndex].title << " (" << movies[movieIndex].showtime << ")" << endl;

  int numTickets;
  cout << "Enter the number of tickets (maximum " << ROWS * COLUMNS << "): ";
  cin >> numTickets;

  if (numTickets <= 0) {
    cout << "Invalid number of tickets. Please enter a positive number." << endl;
    return;
  }

  int bookedCount = 0;
  for (int i = 0; i < numTickets; i++) {
    int row, col;
    cout << "Enter seat row (1-" << ROWS << ") for ticket " << (i + 1) << ": ";
    cin >> row;
    cout << "Enter seat column (1-" << COLUMNS << ") for ticket " << (i + 1) << ": ";
    cin >> col;

    if (selectSeat(row, col)) {
      bookedCount++;
    }
  }

  if (bookedCount > 0) {
    cout << bookedCount << " seat(s) booked successfully!" << endl;
    double totalCost = bookedCount * TICKET_PRICE;
    cout << "Ticket price: Rs " << totalCost << endl;
  } else {
    cout << "No seats were booked." << endl;
  }
}

int main()
{
  // Add some sample movies (modify as needed)
  movies.push_back({"RRR", "8:00 PM"});
  movies.push_back({"jAWAAN", "2:00 PM"});
  movies.push_back({"PATHAAN", "9:00 AM"});
  movies.push_back({"DUNKI", "5:00"});

  int choice;
  do {
    cout << "\nMovie Ticket Booking System" << endl;
    cout << "1. View Movies" << endl;
    cout << "2. Book Ticket" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        displayMovies();
        break;
      case 2:
        displayMovies();
        if (!movies.empty()) {
          int movieIndex;
          cout << "Enter the movie number to book (or 0 to cancel): ";
          cin >> movieIndex;
          bookTicket(movieIndex - 1);
        }
        break;
      case 3:
        cout << "Exiting..." << endl;
        break;
      default:
        cout << "Invalid choice." << endl;
    }
  } while (choice != 3);

  return 0;
}
