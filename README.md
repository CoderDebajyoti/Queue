# Queue Implementation in C

This repository contains a C program that implements a queue data structure. The program includes both general queue and circular queue implementations, adhering to the First-In-First-Out (FIFO) principle. It is useful for various tasks such as scheduling and buffering.

## Features

- **General Queue**: A linear queue where elements are added at the rear and removed from the front.
- **Circular Queue**: A queue where the last position is connected back to the first, optimizing space usage by reusing vacant positions.
- **Overflow and Underflow Handling**: The program effectively manages cases where the queue is either full (overflow) or empty (underflow).

## Usage

1. Clone this repository:

   ```bash
   git clone https://github.com/CoderDebajyoti/Queue.git
   ```

2. Navigate to the project directory:

   ```bash
   cd Queue
   ```

3. Compile the program using a C compiler:

   ```bash
   gcc queue.c -o queue
   ```

4. Run the compiled program:

   ```bash
   ./queue
   ```

5. Follow the on-screen prompts to choose between general and circular queue operations.

## Code Overview

The program uses arrays to store queue elements and includes logic for both general and circular queues. It manages `front` and `rear` pointers, handles enqueue and dequeue operations, and ensures proper handling of overflow and underflow conditions.

## License

This project is open-source and available under the [MIT License](LICENSE).

## Contributions

Contributions are welcome! If you find a bug or have a feature request, please open an issue or submit a pull request.

## Contact

For any questions or inquiries, feel free to reach out via the [issues page](https://github.com/CoderDebajyoti/Queue/issues) or contact me directly.

---

Happy Coding!
