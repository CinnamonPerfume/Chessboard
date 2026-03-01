The task is to develop a program to print a chessboard.

The input of the program are two integers - the size of the chessboard and the size of the field (the number of characters per one field).

The output of the program is a chessboard. The fields are depicted using spaces (white fields) and characters 'X' (black fields). There is a rectangle around the chessboard. The chessboard is oriented such that the upper-left corner is a white field. The chessboard is of a square shape (the number of fields is the same in both horizontal and vertical directions) and each field is a square (the number of characters is the same in both directions).

If the input is invalid, the program must reject it. Use standard output to print the error message (do not use standard error output). The following is considered an error:

the input does not contain two integers,
an input integer is negative or zero.

Sample program runs:
<pre>
Enter chessboard size: 
5
Enter field width: 
3
+---------------+
|‎ ‎ ‎ XXX   XXX   |
|   XXX   XXX   |
|   XXX   XXX   |
|XXX   XXX   XXX|
|XXX   XXX   XXX|
|XXX   XXX   XXX|
|   XXX   XXX   |
|   XXX   XXX   |
|   XXX   XXX   |
|XXX   XXX   XXX|
|XXX   XXX   XXX|
|XXX   XXX   XXX|
|   XXX   XXX   |
|   XXX   XXX   |
|   XXX   XXX   |
+---------------+

Enter chessboard size:
8
Enter field width:
4
+--------------------------------+
|    XXXX    XXXX    XXXX    XXXX|
|    XXXX    XXXX    XXXX    XXXX|
|    XXXX    XXXX    XXXX    XXXX|
|    XXXX    XXXX    XXXX    XXXX|
|XXXX    XXXX    XXXX    XXXX    |
|XXXX    XXXX    XXXX    XXXX    |
|XXXX    XXXX    XXXX    XXXX    |
|XXXX    XXXX    XXXX    XXXX    |
|    XXXX    XXXX    XXXX    XXXX|
|    XXXX    XXXX    XXXX    XXXX|
|    XXXX    XXXX    XXXX    XXXX|
|    XXXX    XXXX    XXXX    XXXX|
|XXXX    XXXX    XXXX    XXXX    |
|XXXX    XXXX    XXXX    XXXX    |
|XXXX    XXXX    XXXX    XXXX    |
|XXXX    XXXX    XXXX    XXXX    |
|    XXXX    XXXX    XXXX    XXXX|
|    XXXX    XXXX    XXXX    XXXX|
|    XXXX    XXXX    XXXX    XXXX|
|    XXXX    XXXX    XXXX    XXXX|
|XXXX    XXXX    XXXX    XXXX    |
|XXXX    XXXX    XXXX    XXXX    |
|XXXX    XXXX    XXXX    XXXX    |
|XXXX    XXXX    XXXX    XXXX    |
|    XXXX    XXXX    XXXX    XXXX|
|    XXXX    XXXX    XXXX    XXXX|
|    XXXX    XXXX    XXXX    XXXX|
|    XXXX    XXXX    XXXX    XXXX|
|XXXX    XXXX    XXXX    XXXX    |
|XXXX    XXXX    XXXX    XXXX    |
|XXXX    XXXX    XXXX    XXXX    |
|XXXX    XXXX    XXXX    XXXX    |
+--------------------------------+

Enter chessboard size:
2
Enter field width:
0
Invalid input.

Enter chessboard size:
asdf
Invalid input.
</pre>
