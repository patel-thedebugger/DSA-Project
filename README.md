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
