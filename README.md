# CentreTheMessageCpp

This console application provides a function, `CentredMessage`, designed to center text within the console window. The primary purpose is to create visually appealing text presentation, ensuring proper alignment regardless of the message length or presence of newline characters.

## Functionality

The `CentredMessage` function utilizes the `setw` feature from the `<iomanip>` library to calculate and apply the appropriate starting position for each line. The centering logic is based on the width of the console window. If a line exceeds this width, it is intelligently split into two parts, and each part is independently centered.

## Usage

1. Clone the repository.
2. Compile the C++ code using your preferred compiler.
3. Run the executable.
4. Observe the centered presentation of text messages in the console window.

## Example

```cpp
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

void CentredMessage(const string& textMessage) {
    // ... (function implementation as described)

int main() {
    // ... (example usage as described)
