# rec-02

### Secret message in an array

The `decipher_message.c` program contains an `int` array that carries a hidden message.
Each 4byte `int` in the array is really four 1byte characters _clumped_ together.
Implement the `decipher` method that interprets the bits in the array as characters and
produces the null terminated character array stored in the `decipher_message` variable.
The `int` array contains the null terminating character, so you do not need to worry about
terminating your string.

For people who successfully decoded the message : <a href> https://linux.die.net/man/2/kill </a>
