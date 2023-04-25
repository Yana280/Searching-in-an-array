# Searching-in-an-array
## Binary Search
This code implements binary search algorithm to search for a given number in a sorted array of integers.
A variable l is initialized to the length of the array, which is 6 in this case. 
Two other variables b and e are initialized to 0 and l-1 respectively. 
These variables will keep track of the lower and upper bounds of the sub-array being searched.

The variable mid is calculated as the middle index of the sub-array being searched. 
The while loop iterates until b is less than or equal to e. Inside the loop, the middle element is compared with the given number a.

If arr[mid] is equal to a, the variable result is set to mid and the loop is broken using the break statement.
 If arr[mid] is greater than a, then the sub-array to be searched is the left half of the current sub-array, so e is set to mid-1. 
 If arr[mid] is less than a, then the sub-array to be searched is the right half of the current sub-array, so b is set to mid+1.

Finally, the value of result is printed using the printf() function. 
![Screenshot (295)](https://user-images.githubusercontent.com/125993593/234347941-f754b7d7-facf-496c-8e3d-f83fab2cc3cd.png)
If the given number a is not found in the array, the value of result remains unchanged and its initial value of -1 is printed( return -1).
### Algorithm
START
1. Define an integer array of size 6 and initialize it with values 10, 20, 30, 40, 50, 60.
2. Prompt the user to enter a number to be searched.
3. Read the input number from the user and store it in a variable 'a'.
4. Initialize variables 'l', 'b', 'e', and 'result'.
	- 'l' is the length of the array.
	- 'b' is the lower bound of the sub-array being searched, initialized to 0.
	- 'e' is the upper bound of the sub-array being searched, initialized to 'l-1'.
	- 'result' is initialized to -1.
5. Enter a while loop that runs until the lower bound 'b' is less than or equal to the upper bound 'e'.
6. Inside the while loop, calculate the middle index 'mid' as (b+e)/2.
7. Check if the middle element 'arr[mid]' is equal to the input number 'a'.
	- If yes, set 'result' to 'mid' and break out of the while loop.
	- If no, continue to the next step.
8. Check if the middle element 'arr[mid]' is greater than the input number 'a'.
	- If yes, set 'e' to 'mid-1' to search the left half of the sub-array.
	- If no, continue to the next step.
9. Check if the middle element 'arr[mid]' is less than the input number 'a'.
	- If yes, set 'b' to 'mid+1' to search the right half of the sub-array.
	- If no, continue to the next iteration of the while loop.
10. Print the value of 'result'.
	- If 'result' is still -1, then the input number was not found in the array.
STOP
