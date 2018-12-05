#include<bits/stdc++.h> 
using namespace std; 

// this function makes the key the same size as the message 
string generateKey(string message, string key){ 
  int x = message.size(); 

  for (int i = 0; ; i++){ 
    if (x == i){ 
      i = 0;
    }
    if (key.size() == message.size()){ was
      break;
    }
  key.push_back(key[i]); 
  }
  cout << "extending keyword to match message...." << endl;
  cout << "keyword extended is " << key << endl;
  return key; 
} 

// This function returns the encrypted text
//this function will only work when message and key are of same length
string Encrypt(string message, string key){ 
  string cipher_text; 

  for (int i = 0; i < message.size(); i++){ 
    // run the message/key through the Vignere cypher
    int x = (message[i] + key[i]) %26; 
    // convert into alphabet using ASCII
    //in ASCII, letters are represented by 65-90 and 97-122
    x += 'A'; 
    cipher_text.push_back(x); //create the cipher_text
  } 
  return cipher_text; 
} 

// This function decrypts the encrypted text and returns the original text 
string Decrypt(string cipher_text, string key){ 
  string orig_text; 
  for (int i = 0 ; i < cipher_text.size(); i++){ 
    // reversing the Vignere Cypher to decrypt the key
    int x = (cipher_text[i] - key[i] + 26) %26; 
    // convert into alphabet using ASCII
    //in ASCII, letters are represented by 65-90 and 97-122
    x += 'A'; 
    orig_text.push_back(x); //recreate the original message 
  }
  return orig_text; 
} 
 
int main(){ 

  string fun = ""; 

  cout << "Pleasee type 'Encrypt' to encrypt, or 'Decrypt' to decrypt a message" << endl;
  cin >> fun;

  if (fun == "Encrypt"){
    string str = "";
    string keyword = "";
    cout << "PLease input the message you want tot encrypt" << endl;
    cin >> str;
    cout << "Enter the keyword to the key to key the thing with" << endl;
    cin >> keyword;
    string key = generateKey(str, keyword); 
    string cipher_text = Encrypt(str, key); 
    cout << "Ciphertext : " << cipher_text << "\n"; 
}

  else if (fun == "Decrypt"){
    string cipher_text = "";
    string key = "";
    cout << "Enter the cipher text" << endl;
    cin >> cipher_text;
    cout << "Enter the keyword used to encrypt the ciphertext" << endl;
    cin >> key;
    string keyx = generateKey(cipher_text, key);

    cout << "Original/Decrypted Text : " << Decrypt(cipher_text, keyx); 
   }
}