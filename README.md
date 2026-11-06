# Space Exploration Data Registry & Physics Calculator

A personal C++ console application built to manage planetary profiles and automate physics computations. Developed independently during Year 1 Semester 2 to practice professional coding structures before Year 2 Semester 3 industrial training applications.

# 🚀 Core Engineering Features
* Structured Data Profiles: Models 8 solar system entities utilizing a custom `struct` to systematically package names, planetary masses, radii, and orbital distances.
* Physics Calculation: Implementes Newton's Law of Universal Gravitation (\(g = \frac{G \times M}{R^2}\)) to convert raw user weight values across planets.
* Input Handling: Wrote an explicit stream validation to eliminate invalid user inputs and prevent program crashes.
* Interface Formatting Precision: Leverages`<iomanip>` stream manipulators (`fixed` and `setprecision`) to display scientific notations and clean decimal fields for the end-user.

# 💻 Tech Stack & Environment
* Language: C++
* Development Environment: Microsoft Visual Studio 
* Core Libraries: `<iostream>`, `<string>`, `<cmath>`, `<iomanip>`

# 📊 Sample Output Execution
```text
Choose a destination planet:
1. Mercury
2. Venus
3. Earth
4. Mars
5. Jupiter
6. Saturn
7. Uranus
8. Neptune
Enter a choice (1-8): 5

-----PLANET PROFILE-----
Planet: Jupiter
Mass: 1.90e+27 kg.
Radius: 69911000.00 m.
Distance From Sun: 5.20 AU.
Your weight on Jupiter would be 211.58 kg.
```
