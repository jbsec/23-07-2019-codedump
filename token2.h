#include <iostream>
using namespace std;

int main() {
  //std::cout << "Hello World!\n";
}

Token Token_stream get::()
  {
    if (full) {
      //remove token from buffer
      full=false;
      return buffer;
    } //check token
  }

  char ch;
  std::cin>>ch;

switch (ch) {
  case ';': //print
    case 'q':
      case '(': case')': case '+': case '-': case '*': case '/': case '%': return Token(ch);
    case '.':
    case '0': case '1': case '2': case '3': case '4': 
    case '5': case '6': case '7': case '8': case '9': 

    {
      std::cin.putback(ch);
        double val;
        std::cin >> val;
        return Token('8',val);
    }
    
    default:
      error("Bad token");
}

/* From my understanding this code is supposed to do something with a token stream buffer, however there are some syntax errors, token get stream gets and error and so does the beginning of the switch statement, i think it's a version issue. */