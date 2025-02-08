# Prime Number Project
  ###  Dev. Boitumelo M.
## Description
This project provides an implementation for checking whether a number is prime. It includes different algorithms to determine primality efficiently, such as:
- Basic division method
- Optimized trial division (checking up to sqrt(N))
- Sieve of Eratosthenes (for generating multiple primes)

## Features
- Generate a list of prime numbers up to a given limit
- Efficient implementations with optimized algorithms

## Prerequisites
To run the project, ensure you have:
- A C++ compiler (e.g., g++, Clang, MSVC)
- A basic understanding of programming concepts

## Installation
Clone the repository:
```sh
git clone https://github.com/boitumelo-09/finding-prime-numbers.git
cd prime-number-project
```

## Usage
### 1. Compile and Run the Program
To compile the C++ program, use:
```sh
g++ prime.cpp -o prime
./prime
```

### 2. Generating Prime Numbers (Optional Feature)
Modify the program to generate primes up to a given limit.

## Example Output
```
Enter a number: 29
29 is a prime number.
```

## Algorithms Used
1. **Trial Division** - Checks divisibility up to sqrt(N)
2. **Sieve of Eratosthenes** - Efficiently generates all primes up to N

## Future Improvements
- Implement the Miller-Rabin primality test for larger numbers
- Add a GUI for better user interaction

## Contributing
Feel free to contribute by opening an issue or submitting a pull request!

## License
This project is licensed under the MIT License.

