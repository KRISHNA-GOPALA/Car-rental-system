# Car Rental System

## Overview
The Car Rental System is a C++ program that allows users to view available cars, rent them for a certain number of days, calculate rental costs, and complete or delete bookings. It is designed to help users manage car rentals efficiently.

## Features
- Display a list of available cars with details like make, model, and color.
- Rent a car for a user-defined number of days.
- Calculate the rental cost based on the daily rate.
- View rental booking details.
- Complete or delete bookings.
- Includes a feedback link for the system.

## How to Run
1. Clone this repository to your local machine.
2. Make sure you have a C++ compiler (e.g., `g++`).
3. Open a terminal/command prompt and navigate to the project directory.
4. Compile the code:
   ```bash
   g++ -o CarRentalSystem main.cpp
   ```
5. Run the compiled program:
   ```bash
   ./CarRentalSystem
   ```

## Program Flow
1. The program displays a list of available cars.
2. The user selects a car and enters the number of rental days.
3. The program calculates and displays the rental cost.
4. After renting a car, users are given an option to either complete the booking or delete it.
5. When completed, the user receives a confirmation message with a link to a feedback form.

## Classes Used
- `Car`: Represents a car with properties such as make, model, color, daily rental rate, and rental status.
  - **Methods**:
    - `getMake()`, `getModel()`, `getColor()`, `getDailyRate()`, `isRented()`, `rent()`, `returnCar()`.
- `Rental`: Represents a rental transaction with properties like rental code, the rented car, and the number of days rented.
  - **Methods**:
    - `calculateCost()`: Calculates the total rental cost.
    - `printRental()`: Prints the rental details.

## Dependencies
This program requires a C++ compiler such as GCC or Clang. There are no additional external libraries or dependencies.

## Requirements
- A C++ development environment with support for C++11 or later.
- A terminal or command prompt for running the code.

## License
This project is open-source and free to use. For any issues, feel free to contact us via the provided support contact.

---
