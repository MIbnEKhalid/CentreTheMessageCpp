6EBRQGosB4DRbj9chHu8SCJ3dFPkdGar/+4hXRJ0QoXPpwY5OXYCjW5ANoZtDWJhlpuiRcXO+jQ36tdrlaBA5kWXVh+nM2DIZRwo5XOcnYes+JOG880FE8QAixfK6n7x+dJM5cOU2kin5l4iW9U1E3VnlGy1LlbeZzo50+2E9OIY0xaMoq8hbulUDkAW5ENaojdE5xOvLF91usDxlNzmprAMdNCwqrVZqQoWM3pT0iak256ESNFI7a/NopVvpdU6cHgiWGo/6DBA/PXJWiEy+5S3WVFJAEnxBpAluW1AWY5QkO8kkfVqqYEcD74WTBwXa0MQbTbgj3lCsKTmBzTf93H85Lk6ScwABZmnyT7gBS0=





# CentreTheMessageCpp 
https://muhammad-ibn-e-khalid.github.io/CentreTheMessageCpp/

This console application provides a function, `CentredMessage`, designed to center text within the console window. The primary purpose is to create visually appealing text presentation, ensuring proper alignment regardless of the message length or presence of newline characters.

## Functionality

The `CentredMessage` function utilizes the `setw` feature from the `<iomanip>` library to calculate and apply the appropriate starting position for each line. The centering logic is based on the width of the console window. If a line exceeds this width, it is intelligently split into two parts, and each part is independently centered.

## Usage

The console text centering functionality is particularly useful in scenarios where you want to enhance the visual presentation of text output in your C++ console applications. Consider utilizing this code when:

- **Improving Readability:**
  Centering text can significantly improve the readability and aesthetics of information displayed in the console window.

- **Dynamic Text Lengths:**
  Your application deals with variable-length messages, and you want them to be consistently centered regardless of their size.

- **Multiline Content:**
  You need to handle multiline content gracefully, ensuring each line is centered independently for a cohesive display.

- **User-Friendly Interfaces:**
  Creating a more user-friendly interface by presenting information in a visually appealing and organized manner.

## Program Output

### With Minimized Window

![Output Image - Minimized Window](Img/OutputMin.png)

### With Maximized Window

![Output Image - Maximized Window](Img/OutputMax.png)
