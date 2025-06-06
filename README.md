# DSA-Project
## 🧠 N-Queens Problem Using Stack & Backtracking in C

This project implements a solution to the classic **N-Queens problem** using **backtracking** and a custom **2D stack-based approach** in the C programming language.

### 🚀 About the Project

The N-Queens problem involves placing `N` queens on an `N x N` chessboard such that no two queens attack each other — meaning no two queens can share the same row, column, or diagonal.

This implementation avoids recursion and simulates the backtracking process using stack operations.

### 🔧 Key Features

- ✅ Manual stack-based implementation (no recursion)
- ✅ Dynamic 2D array allocation for the chessboard
- ✅ Safe queen placement checks (row, column, diagonals)
- ✅ Step-by-step placement visualized using `usleep()`
- ✅ Displays a valid board configuration when successful

## 🧱 Code Structure

- **`push()` / `pop()`**: Stack operations to simulate queen placement and backtracking  
- **`check()`**: Checks for conflicts before placing a queen  
- **`display()`**: Prints the current board state visually  
- **`main()`**: Controls the flow and solves the problem using iterative backtracking  

## 🖥️ How to Use

1. **Clone the Repository** (if using GitHub):
   ```bash
   git clone https://github.com/your-username/nqueen-project.git
   cd nqueen-project
   ```
## 📺 Example

      Enter the size : 4
      
      The current location is -1-1
      
      
                      Q  *  .  .
                      .  .  .  .
                      .  .  .  .
                      .  .  .  .
      
      The current location is 01
      <
      
      
                      Q  .  .  .
                      .  *  .  .
                      .  .  .  .
                      .  .  .  .
      
      The current location is 11
      </
      
      
                      Q  .  .  .
                      .  .  .  .
                      .  *  .  .
                      .  .  .  .
      
      The current location is 21
      
      
                      Q  .  .  .
                      .  .  .  .
                      .  Q  .  .
                      .  *  .  .
      
      The current location is 31
      
      
                      Q  .  *  .
                      .  .  .  .
                      .  Q  .  .
                      .  .  .  .
      
      The current location is 02
      <
      
      
                      Q  .  .  .
                      .  .  *  .
                      .  Q  .  .
                      .  .  .  .
      
      The current location is 12
      diagonally left side
      
      
                      Q  .  .  .
                      .  .  .  .
                      .  Q  *  .
                      .  .  .  .
      
      The current location is 22
      <
      
      
                      Q  .  .  .
                      .  .  .  .
                      .  Q  .  .
                      .  .  *  .
      
      The current location is 32
      </
      1 -> 32
      2 -> 22
      3 -> 12
      4 -> 02
      5 -> 31
      6 -> 21
      
      
                      Q  .  .  .
                      .  .  .  .
                      .  .  .  .
                      .  *  .  .
      
      The current location is 31
      
      
                      Q  .  *  .
                      .  .  .  .
                      .  .  .  .
                      .  Q  .  .
      
      The current location is 02
      <
      
      
                      Q  .  .  .
                      .  .  *  .
                      .  .  .  .
                      .  Q  .  .
      
      The current location is 12
      
      
                      Q  .  .  .
                      .  .  Q  .
                      .  .  *  .
                      .  Q  .  .
      
      The current location is 22
      
      
                      Q  .  .  *
                      .  .  Q  .
                      .  .  .  .
                      .  Q  .  .
      
      The current location is 03
      <
      
      
                      Q  .  .  .
                      .  .  Q  *
                      .  .  .  .
                      .  Q  .  .
      
      The current location is 13
      <
      
      
                      Q  .  .  .
                      .  .  Q  .
                      .  .  .  *
                      .  Q  .  .
      
      The current location is 23
      </
      
      
                      Q  .  .  .
                      .  .  Q  .
                      .  .  .  .
                      .  Q  .  *
      
      The current location is 33
      <
      1 -> 33
      2 -> 23
      3 -> 13
      4 -> 03
      5 -> 32
      6 -> 22
      7 -> 12
      
      
                      Q  .  .  .
                      .  .  .  .
                      .  .  *  .
                      .  Q  .  .
      
      The current location is 22
      </
      
      
                      Q  .  .  .
                      .  .  .  .
                      .  .  .  .
                      .  Q  *  .
      
      The current location is 32
      <
      1 -> 32
      2 -> 22
      3 -> 12
      4 -> 02
      5 -> 31
      1 -> 31
      2 -> 21
      3 -> 11
      4 -> 01
      5 -> 30
      6 -> 20
      7 -> 10
      8 -> 00
      
      
                      .  .  .  .
                      *  .  .  .
                      .  .  .  .
                      .  .  .  .
      
      The current location is 10
      
      
                      .  .  .  .
                      Q  .  .  .
                      *  .  .  .
                      .  .  .  .
      
      The current location is 20
      
      
                      .  *  .  .
                      Q  .  .  .
                      .  .  .  .
                      .  .  .  .
      
      The current location is 01
      diagonally left side
      
      
                      .  .  .  .
                      Q  *  .  .
                      .  .  .  .
                      .  .  .  .
      
      The current location is 11
      <
      
      
                      .  .  .  .
                      Q  .  .  .
                      .  *  .  .
                      .  .  .  .
      
      The current location is 21
      </
      
      
                      .  .  .  .
                      Q  .  .  .
                      .  .  .  .
                      .  *  .  .
      
      The current location is 31
      
      
                      .  .  *  .
                      Q  .  .  .
                      .  .  .  .
                      .  Q  .  .
      
      The current location is 02
      
      
                      .  .  Q  .
                      Q  .  *  .
                      .  .  .  .
                      .  Q  .  .
      
      The current location is 12
      
      
                      .  .  Q  *
                      Q  .  .  .
                      .  .  .  .
                      .  Q  .  .
      
      The current location is 03
      <
      
      
                      .  .  Q  .
                      Q  .  .  *
                      .  .  .  .
                      .  Q  .  .
      
      The current location is 13
      <
      
      
                      .  .  Q  .
                      Q  .  .  .
                      .  .  .  *
                      .  Q  .  .
      
      The current location is 23
      
      
                      .  .  Q  .
                      Q  .  .  .
                      .  .  .  Q
                      .  Q  .  *
      
      
      The required matrix is :
      
                      .  .  Q  .
                      Q  .  .  .
                      .  .  .  Q
                      .  Q  .  *
      
      Data structure : 202040301
      MINI PROJECT
      Title : N Queen Problem using Backtracking Algorithm and Stack
      Developed By :
               Garv Patel (12302130501014)
      
      ===Code Execution Successfully===
