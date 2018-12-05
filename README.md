# VignereCypher
This program uses a vignere cypher to encrypt and decrypt a message using a keyword


The program has three functions, gereateKey(), Encrypt(), and Decrypt().

The gereateKey() function is used to create the key and extends it to the size of the message using repetition.

The Encrypt() function takes in the given string message and string keycode and runs it through the vignere cypher, 
then returns the encrypted cypher text.

The Decrypt() function takes in the encrypted cypher text and the original key and reverses the vignere cypher 
to print out the original message.

The main function takes in the input and runs the required other functions 

There are some areas where our program could be improved, for example it only accepts alphabetical charcters, 
future revisions could incorporate spaces and numerical charcaters. 
