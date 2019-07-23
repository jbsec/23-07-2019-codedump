#include <iostream>

int main() {
//  std::cout << "Hello World!\n";
}

// grammar rule for terms, similar to 
// expressions in previous file

/*
double term() 
{
  double left = primary();
    Token t = get_token();
      while(true) {
        switch (t.kind) {
          case '*':
            left *= primary();
            t = get_token();
              break;
          case '/':
            left /= primary();
            t = get_token();
              break;
          case '%':
            left %= primary();
            t = get_token();
              break;
          default:
            return left;
        }
      }
}
*/

/*
The above code is currently giving me an error
because token t = get_token doesnt work in 
repl.it complier, I could try it with another
complier but this is the only one I have avalible right now, 
if you're wanting to run it
I suggest not using repl.it or finding another
way to fix it.
*/

