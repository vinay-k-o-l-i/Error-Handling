# Error-Handling
#  Exception Handling in C++
#  Aim
To study and implement exception handling in C++, using try, catch, and throw to manage runtime errors gracefully.

#  Theory
Exception: An unexpected event or error that occurs during program execution (e.g., division by zero, invalid input, file not found).

Exception Handling: A mechanism in C++ to detect and manage runtime errors without abruptly terminating the program.

#  Key Concepts

try block → Contains code that may throw an exception.

throw statement → Used to signal (raise) an exception.

catch block → Handles the exception thrown by throw.

#  Flow of Exception Handling

Code inside the try block is executed.

If an error occurs, the throw statement raises an exception.

The program looks for a matching catch block.

If found, the exception is handled; otherwise, the program terminates.

#  Algorithms
#  Division by Zero
    Start
    Input two numbers: numerator and denominator.
    Place the division operation inside a try block.
    If denominator = 0 → throw an exception.
    If denominator ≠ 0 → perform division and display result.
    In the catch block:
    Display error message “Division by zero not allowed.”
    End

#  Age Validation
    Start
    Input age from the user.
    Place validation inside a try block.
    If age < 0 → throw age.
    Else if age < 18 → throw age.
    Else → display “Accepted”.
    In the catch block:
    If age < 0 → display “Invalid age”.
    Else → display “You are below 18”.
    End

#  ATM Transaction System
    Start
    Initialize ATM with a default balance.
    Display menu:
    Check Balance
    Deposit Money
    Withdraw Money
    Exit
    Input user choice.
    Place operations inside a try block:
    Case 1: Display balance.
    Case 2: Input deposit amount.
    If amount ≤ 0 → throw exception.
    Else add to balance.
    Case 3: Input withdrawal amount.
    If amount ≤ 0 → throw exception.
    If amount > balance → throw exception.
    Else deduct from balance.
    Case 4: Exit program.
    Default: Display “Invalid choice”.
    In the catch block:
    Display the error message received.
    Repeat until user chooses Exit.
    End

#  Applications of Exception Handling
    Prevents abrupt program termination.
    Separates error‑handling logic from normal code.
    Improves program reliability and robustness.
    Used in:
    File I/O operations.
    Database connections.
    Network programming.
    Input validation.
    Banking/ATM systems.

#  Conclusion
    Exception handling in C++ provides a structured way to manage runtime errors.
    The keywords try, throw, and catch are used to detect and handle exceptions.
    It ensures that programs can continue execution gracefully even when unexpected errors occur.
    Exception handling is essential for building robust, user‑friendly applications.
