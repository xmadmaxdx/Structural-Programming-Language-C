# C Programming — Structural Programming Language

<div align="center">

 ```  
  ██████╗   ███████╗    ███████╗
██╔════╝   ██╔════╝    ██╔════╝
██║        ███████╗    ███████╗
██║        ╚════██║    ██╔══╝  
╚██████╗   ███████║    ███████╗
  ╚═════╝   ╚══════╝    ╚══════╝
```



**A structured, daily-updated repository following the W3Schools C tutorial curriculum — with original exercises and solutions.**

[![GitHub Stars](https://img.shields.io/github/stars/xmadmaxdx/Structural-Programming-Language-C?style=for-the-badge&logo=github&color=yellow)](https://github.com/xmadmaxdx/Structural-Programming-Language-C/stargazers)
[![GitHub Forks](https://img.shields.io/github/forks/xmadmaxdx/Structural-Programming-Language-C?style=for-the-badge&logo=github&color=blue)](https://github.com/xmadmaxdx/Structural-Programming-Language-C/network/members)
[![GitHub Commits](https://img.shields.io/github/commit-activity/w/xmadmaxdx/Structural-Programming-Language-C?style=for-the-badge&logo=git&color=green)](https://github.com/xmadmaxdx/Structural-Programming-Language-C/graphs/commit-activity)
[![Last Commit](https://img.shields.io/github/last-commit/xmadmaxdx/Structural-Programming-Language-C?style=for-the-badge&logo=github&color=orange)](https://github.com/xmadmaxdx/Structural-Programming-Language-C/commits/main)

</div>

---

## What Is This?

This repository is a **structured C programming practice collection** that follows the [W3Schools C Tutorial](https://www.w3schools.com/c/) curriculum step by step.

- **Code is pushed regularly** — new programs appear almost daily
- **Follows W3Schools order** — topics are organized exactly like the tutorial
- **Original exercises included** — some programs are custom-designed, not from W3Schools
- **Clean, beginner-friendly code** — simple logic, easy to understand

---


---

## Program Examples

### Basic Output
```c
#include <stdio.h>

int main() {
    printf("Hello World\n");
    return 0;
}
```

### If Else — Even or Odd
```c
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }
    return 0;
}
```

### For Loop — Factorial
```c
#include <stdio.h>

int main() {
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial = %d\n", fact);
    return 0;
}
```

---

## Code Style

All programs follow a consistent style:

- **4-space proper indentation** — clean and readable and properly formatted
- **Beginner-friendly** — textbook C level, easy to understand
- **`#include <stdio.h>` only**
- **`int main()`** — standard entry point
- **`return 0;`** — proper exit

---

## Updates

This repository is **actively maintained**. New programs are added almost daily following the W3Schools curriculum order.



---

## How to Use

1. **Clone the repository**
   ```bash
   git clone https://github.com/xmadmaxdx/Structural-Programming-Language-C.git
   ```

2. **Navigate to a topic folder**
   ```bash
   cd "Structural Programming Language CSE/12_If_Else"
   ```

3. **Compile and run**
   ```bash
   gcc evenOdd.c -o evenOdd
   ./evenOdd
   ```

---

## Topics will be Covered

<details>
<summary><strong>📝 Fundamentals (01-10)</strong></summary>

- [ ] Introduction to C
- [ ] Getting Started
- [ ] C Syntax
- [ ] C Output (printf)
- [ ] C Comments
- [ ] C Variables
- [ ] C Data Types
- [ ] C Type Conversion
- [ ] C Constants
- [ ] C Operators

</details>

<details>
<summary><strong>🔀 Control Flow (11-16)</strong></summary>

- [ ] C Booleans
- [ ] C If Else
- [ ] C Switch Statement
- [ ] C While Loop
- [ ] C For Loop
- [ ] C Break and Continue

</details>



---

## Repository Structure

```
Structural-Programming-Language-CSE/
├── README.md
├── .gitignore
├── 01_Intro/
│   └── aboutC.c
├── 02_Get_Started/
│   └── helloWorld.c
├── 03_Syntax/
│   └── learningC.c
├── 04_Output/
│   └── printNumbers.c
├── 05_Comments/
├── 06_Variables/
├── 07_Data_Types/
├── 08_Type_Conversion/
├── 09_Constants/
├── 10_Operators/
├── 11_Booleans/
├── 12_If_Else/
├── 13_Switch/
├── 14_While_Loop/
├── 15_For_Loop/
└── 16_Break_Continue/
```

---

## Credits

- **Curriculum:** [W3Schools C Tutorial](https://www.w3schools.com/c/)
- **Some programs** are directly from W3Schools examples
- **Some programs** are original exercises designed for extra practice
- **All code** is written in clean, beginner-friendly C
- **Instructor** is Abir Ahmed from SUST, Software Engineering

---

## License

This project is open source and available for learning purposes.

---

<div align="center">

**Made with ❤️ for learning C programming**


</div>
