Write a ```C``` program in ```330-final.c``` to analyze a dataset of student scores stored in the file ```330-final.txt```.
The file contains ```50``` integer scores, each representing a student's score on a final exam.

1. Read the Binary File:
- Open the file ```330-final.txt``` in read mode.
- Read the ```50``` integer scores from the file, converting each binary value to its decimal equivalent.
- Store these decimal scores in an appropriate data structure (e.g., an array).

2. Calculate Statistical Measures:
- ```Mean```: Compute the average of all the scores.
- ```Median```: Find the middle value of the sorted scores.
- ```Range```: Determine the difference between the highest and lowest scores.
- ```Standard Deviation```: Calculate the measure of dispersion of the scores from the mean.
- ```Class Passing Ratio```: Determine the ratio of scores greater than ```60```.

3. Print the Results:
- Display the calculated decimal values (```mean```, ```median```, ```range```, ```standard deviation```, and ```class passing ratio```) clearly and formatted on the console.

4. Additional Considerations:
- Error Handling: Implement error handling mechanisms to gracefully handle potential issues like file not found, file read errors, or invalid data.
- Efficiency: Consider using efficient algorithms and data structures to optimize the calculations, especially for large datasets.
- Code Clarity: Write well-commented code to enhance readability and maintainability.
- Formatting: Present the output in a user-friendly format, such as a table or a detailed report.
