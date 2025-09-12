# C++ SoftUni Solutions

This repository contains my solutions to programming exercises from the C++ courses at SoftUni (Software University). The repository is organized by course modules and individual exercises, showcasing my learning journey in C++ programming.

## 📚 Course Structure

### 01 - First Steps in Coding
This module covers the fundamental concepts of programming with C++, including basic syntax, data types, input/output operations, and simple calculations.

#### Exercises Completed:

1. **01-HelloSoftUni** - First C++ program that prints "Hello SoftUni"
2. **02-NumbersOneToTen** - Prints numbers from 1 to 10 using cout
3. **03-RectangleArea** - Calculates and displays the area of a rectangle
4. **04-ConvertInchesToCM** - Converts inches to centimeters using a conversion factor
5. **05-GreetByName** - Takes user input for a name and greets them
6. **06-CombineTextAndNumbers** - Combines text and numerical data to create a personal introduction
7. **07-ProjectCreation** - Calculates total hours needed for project completion
8. **08-ZooShop** - Calculates total cost for dog and cat food purchases
9. **09-YardGreening** - Calculates final price with discount for yard greening services

### 02 - First Steps in Coding (Additional Practice)
This module contains additional practice exercises to reinforce the concepts learned in the first module.

#### Additional Practice Exercises:

1. **booksToRead** - Calculates daily reading hours needed to finish a book within a given timeframe
2. **consoleConverterUSDBGN** - Currency converter from USD to BGN with fixed decimal precision
3. **depositCalculator** - Calculates final deposit amount with monthly interest over a specified term
4. **radiansToDegreesConvert** - Converts radians to degrees using mathematical constants
5. **05suppliesForSchool** - Calculates total cost for school supplies (pens, markers, solution) with discount
6. **06repainting** - Calculates total cost for house repainting including materials and labor
7. **07foodDelivery** - Calculates total food delivery order cost including menu items, dessert, and delivery fee
8. **08basketballEquipment** - Calculates total cost for basketball equipment based on annual training cost
9. **09fishTank** - Calculates water volume needed for a fish tank accounting for decorations and space

### 03 - Conditional Statements Lab
This module introduces conditional statements and logical operations in C++, covering if-else statements, comparison operators, and decision-making logic.

#### Exercises Completed:

1. **01excellentResult** - Checks if a grade is excellent (5.50 or higher)
2. **02greaterNumber** - Finds and displays the greater of two numbers
3. **03evenOrOdd** - Determines if a number is even or odd
4. **04passwordGuess** - Validates a password guess against a predefined password
5. **05numberFrom100To200** - Checks if a number is between 100 and 200
6. **06speedInfo** - Provides speed information based on input speed value
7. **07areaOfFigures** - Calculates area of different geometric shapes based on user choice

### 04 - Conditional Statements Exercise
This module provides advanced practice with conditional statements, covering complex business logic, time calculations, and real-world problem solving scenarios.

#### Exercises Completed:

1. **SumSeconds** - Converts three time values to total minutes and seconds with proper formatting
2. **02bonusPoints** - Calculates bonus points based on input value with additional bonuses for even numbers and numbers ending in 5
3. **03timePlus15Minutes** - Adds 15 minutes to a given time and handles hour overflow (24-hour format)
4. **04toyShop** - Calculates toy shop profit with discounts and determines if vacation can be afforded
5. **05godzillaVsKong** - Movie budget calculator with clothing discounts for large crews
6. **06worldSwimmingRecord** - Determines if a swimming time breaks the world record considering water resistance
7. **07shopping** - Shopping cost calculator with delivery fees and discounts
8. **08lunchBreak** - Time management calculator for lunch breaks

## 🛠️ Technical Details

- **Language**: C++
- **IDE**: Visual Studio (based on .vcxproj files)
- **Standard**: C++11 or later
- **Build System**: MSBuild (Visual Studio)

## 📁 Repository Structure

```
CPlusPlus/
├── 01FirstStepsInCoding/
│   ├── FirstStepsInCoding/
│   │   └── 01-HelloSoftUni/
│   ├── 02-NumbersOneToTen/
│   ├── 03-RectangleArea/
│   ├── 04-ConvertInchesToCM/
│   ├── 05-GreetByName/
│   ├── 06-CombineTextAndNumbers/
│   ├── 07-ProjectCreation/
│   ├── 08-ZooShop/
│   ├── 09-YardGreening/
│   └── FirstStepsInCoding.sln
├── 02FirstStepsInCodingEx/
│   ├── booksToRead/
│   ├── consoleConverterUSDBGN/
│   ├── depositCalculator/
│   ├── radiansToDegreesConvert/
│   ├── 05suppliesForSchool/
│   ├── 06repainting/
│   ├── 07foodDelivery/
│   ├── 08basketballEquipment/
│   ├── 09fishTank/
│   └── firstStepsInCodingEx.sln
├── 03ConditionalStatementsLab/
│   ├── 01excellentResult/
│   ├── 02greaterNumber/
│   ├── 03evenOrOdd/
│   ├── 04passwordGuess/
│   ├── 05numberFrom100To200/
│   ├── 06speedInfo/
│   ├── 07areaOfFigures/
│   └── conditionalStatementsLab.sln
├── 04ConditionalStatementsExercise/
│   ├── SumSeconds/
│   ├── 02bonusPoints/
│   ├── 03timePlus15Minutes/
│   ├── 04toyShop/
│   ├── 05godzillaVsKong/
│   ├── 06worldSwimmingRecord/
│   ├── 07shopping/
│   ├── 08lunchBreak/
│   └── ConditionalStatementsExercise.sln
└── README.md
```

Each exercise folder contains:
- `.cpp` source file
- Visual Studio project files (`.vcxproj`, `.vcxproj.filters`, `.vcxproj.user`)
- Debug build output in `x64/Debug/` folder

## 🚀 Getting Started

### Prerequisites
- Visual Studio 2019 or later (or any C++ compiler)
- Windows OS (based on the project structure)

### Running the Programs
1. Open the appropriate solution file in Visual Studio:
   - `01FirstStepsInCoding/FirstStepsInCoding.sln` for the main exercises
   - `02FirstStepsInCodingEx/firstStepsInCodingEx.sln` for additional practice exercises
   - `03ConditionalStatementsLab/conditionalStatementsLab.sln` for conditional statements exercises
   - `04ConditionalStatementsExercise/ConditionalStatementsExercise.sln` for advanced conditional statements exercises
2. Select the project you want to run
3. Build and run the project (F5 or Ctrl+F5)

Alternatively, you can compile individual `.cpp` files using:
```bash
g++ -o program_name program_name.cpp
./program_name
```

## 📝 Learning Progress

This repository demonstrates my progression through fundamental C++ concepts:

- **Basic I/O**: Using `cout` and `cin` for input/output operations
- **Data Types**: Working with `int`, `double`, and `string` types
- **Variables**: Declaring and initializing variables
- **Arithmetic Operations**: Basic mathematical calculations
- **String Manipulation**: Combining text and variables
- **Formatting Output**: Using `setf()`, `precision()`, and `setprecision()` for formatted output
- **Problem Solving**: Breaking down real-world problems into code solutions
- **Mathematical Functions**: Using `floor()` and `round()` for number manipulation
- **Mathematical Constants**: Working with PI and conversion factors
- **Financial Calculations**: Interest calculations, currency conversion, and cost analysis
- **Volume Calculations**: 3D geometry and unit conversions
- **Complex Logic**: Multi-step calculations with percentages and discounts
- **Conditional Statements**: Using `if`, `else if`, and `else` for decision making
- **Comparison Operators**: Working with `==`, `!=`, `<`, `>`, `<=`, `>=`
- **Logical Operations**: Understanding boolean logic and conditions
- **Input Validation**: Checking user input against expected values
- **Range Checking**: Validating numbers within specific ranges
- **Time Calculations**: Converting between hours, minutes, and seconds with overflow handling
- **Modulo Operations**: Using `%` for remainder calculations and number pattern recognition
- **Complex Business Logic**: Multi-tier discount systems and profit calculations
- **Budget Management**: Cost analysis with conditional discounts and expense tracking
- **Performance Analysis**: Comparing results against benchmarks and records

## 🎯 Key Concepts Covered

- C++ syntax and structure
- Variable declaration and initialization
- Input/output operations
- Basic arithmetic operations
- String handling
- Output formatting
- Problem decomposition and algorithm design
- Mathematical functions (`floor`, `round`)
- Mathematical constants (PI)
- Currency conversion and financial calculations
- Volume and area calculations
- Percentage calculations and discounts
- Complex multi-step problem solving
- Conditional statements (`if`, `else if`, `else`)
- Comparison operators (`==`, `!=`, `<`, `>`, `<=`, `>=`)
- Boolean logic and conditions
- Input validation and range checking
- Decision-making algorithms
- Time arithmetic and overflow handling
- Modulo operations and number patterns
- Complex business logic and multi-tier systems
- Budget analysis and cost optimization
- Performance benchmarking and record comparison

## 📈 Future Plans

This repository will continue to grow as I progress through more advanced C++ topics including:
- Loops and iterations
- Functions and arrays
- Object-oriented programming
- Data structures and algorithms
- Advanced C++ features

## 📄 License

This repository is for educational purposes as part of my SoftUni C++ course journey.

---

*Last updated: 12/09/2025*
*Course: SoftUni C++ Programming*

