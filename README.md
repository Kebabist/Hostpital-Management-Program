# Hospital Management Program

A **handcrafted, console-based Hospital Management System** that enables streamlined management of doctors, patients, schedules, and administrative functions. Built in C/C++ with a visually enhanced, menu-driven interface, this program is designed for both functionality and presentation.

---

## Features

### 🏥 User Management
- **Doctor Records:** Add new doctors with NIC and email; maintains linked lists for efficient management.
- **Patient Records:** (Planned/partial) Architecture for storing patient information, including visit history and wallet balance.

### 🔒 Authentication & Security
- **Admin Login:** Secure sign-in with dedicated admin credentials.
- **Password Recovery:** User-friendly “Forgot Password” flow (partially implemented).

### 🖥️ Console UI & Visuals
- **Fullscreen Console UI:** Optimized for exclusive fullscreen; makes use of cursor movement and color macros for rich, clear display.
- **Colorized Menus:** Extensive use of macros for colors and Unicode symbols for a modern look.
- **Animated Welcome:** Custom animated welcome screen using Unicode hospital icons and color sequences.

### 📋 Menu-Driven Navigation
- **Main Menu:** Sign in, recover password, or exit.
- **Admin Menu:** Add doctors/patients, access schedules, or exit.
- **Input Validation:** Prompts and validates user input, ensuring data integrity in usernames/passwords.

### ⚙️ Technical Highlights
- **Platform Specific:** Uses Windows APIs for console control (e.g., `windows.h`, `conio.h`, cursor functions).
- **Modular Code:** Split into logical headers (Macros, Printing, Logic, Functions) for maintainability and clarity.
- **Expandable:** Designed to add features like schedules, more user types, and file-based record persistence.

---

## File Structure

- `Hostpital Management Program/Source.cpp` — Main entry point, menu launch
- `Hostpital Management Program/Logic.h` — Core logic: user management, admin functions
- `Hostpital Management Program/Functions_inc.h` — Function prototypes and menu logic
- `Hostpital Management Program/Macros.h` — Color, symbol, and display macros
- `Hostpital Management Program/MyPrint.h` — Printing utilities, animated welcome, and UI helpers

---

## How to Build & Run

### Requirements
- **Windows OS** (uses Windows-specific headers and functions)
- **C/C++ Compiler** (Visual Studio recommended, or MinGW)

### Steps

1. **Clone the Repository**
   ```bash
   git clone https://github.com/Kebabist/Hostpital-Management-Program.git
   ```
2. **Open in Visual Studio**
   - Double-click `Hostpital Management Program.sln` to open the solution.
   - Build the project using the default settings.

   **OR**

   **Build with Command Line**
   ```bash
   cd "Hostpital Management Program"
   gcc Source.cpp -o HospitalManagement.exe -luser32 -lkernel32
   ```

3. **Run the Program**
   - Ensure your console is in **Exclusive Fullscreen Mode** (for best experience).
   - Run the executable:
     ```
     ./HospitalManagement.exe
     ```

---

## Usage

- **Main Menu:** 
  - `1` - Sign in (Admin: username `Admin`, password `Admin`)
  - `2` - Forgot Password
  - `3` - Exit

- **Admin Menu:** 
  - Add new doctors/patients
  - Access or modify schedules (feature slots present)
  - Return to main menu or exit

---

## Why Choose This Program?

- **Visually engaging, not just functional:** Leverages color and Unicode for a modern look in the terminal.
- **Easy to extend:** Clean code separation makes it easy for contributors to add more features.
- **Focus on usability:** Input validation, clear prompts, and feedback for all actions.
- **Learning-friendly:** Great as a C/C++ console app example for beginners interested in real-world projects.

---

## Contributing

Contributions are welcome! Fork the repository and open a pull request with your improvements or new features.

---

## License

This project is licensed under the terms of the license found in `LICENSE.txt`.

---

**Handmade with care by Kebabist (Winter 2023).**
