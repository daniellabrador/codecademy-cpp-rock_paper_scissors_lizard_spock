/* -------------------
The Rock, Paper, Scissors, Lizard, Spock program is a modified version of the traditional Rock, Paper, Scissors game but provides seven more outcomes. To read more about the modified version of the game, check out https://github.com/daniellabrador/codecademy-rock_paper_scissors_lizard_spock#project-prompt
------------------- */

#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {
  // Computer chooses its choice.
  srand (time(NULL));
  int computer = rand() % 5 + 1, user = 0;

  // Prompt the user ot select their choice.
  std::cout << "====================\n";
  std::cout << "Rock, Paper, Scissors, Lizard, Spock!\n";
  std::cout << "====================\n";
  
  std::cout << "1) 🤜 Rock\n";
  std::cout << "2) ✋ Paper\n";
  std::cout << "3) ✌ Scissors\n";
  std::cout << "4) 🤏 Lizard\n";
  std::cout << "5) 🖖 Spock\n";
  std::cout << "\n";
  
  std::cout << "Shoot! "; std::cin>>user;

  // Determine winner:

  // User draws rock
  if (user==1) {
    switch (computer) {
      case 1:
        std::cout<<"Computer draws 🤜 Rock\n\n";
        
        std::cout << "====================\n";
        std::cout << "✊ vs ✊\n";
        std::cout<<"It's a tie!";
        break;
      case 2:
        std::cout<<"Computer draws ✋ Paper\n\n";
        
        std::cout << "====================\n";
        std::cout << "✊ vs ✋\n";
        std::cout<<"Computer wins.";
        break;
      case 3:
        std::cout<<"Computer draws ✌ Scissors\n\n";
        
        std::cout << "====================\n";
        std::cout << "✊ vs ✌\n";
        std::cout<<"You win!";
        break;
      case 4:
        std::cout<<"Computer draws 🤏 Lizard\n\n";
        
        std::cout << "====================\n";
        std::cout << "✊ vs 🤏\n";
        std::cout<<"You win!";
        break;
      case 5:
        std::cout<<"Computer draws 🖖 Spock\n\n";
        
        std::cout << "====================\n";
        std::cout << "✊ vs 🖖\n";
        std::cout<<"Computer wins.";
        break;
      default:
        std::cout<<"ERROR!";
        break;
    }
  }

  // User draws paper
  if (user==2) {
    switch (computer) {
      case 1:
        std::cout<<"Computer draws 🤜 Rock\n\n";
        
        std::cout << "====================\n";
        std::cout << "✋ vs ✊\n";
        std::cout<<"You win!";
        break;
      case 2:
        std::cout<<"Computer draws ✋ Paper\n\n";
        
        std::cout << "====================\n";
        std::cout << "✋ vs ✋\n";
        std::cout<<"It's a tie!";
        break;
      case 3:
        std::cout<<"Computer draws ✌ Scissors\n\n";
        
        std::cout << "====================\n";
        std::cout << "✋ vs ✌\n";
        std::cout<<"Computer wins.";
        break;
      case 4:
        std::cout<<"Computer draws 🤏 Lizard\n\n";
        
        std::cout << "====================\n";
        std::cout << "✋ vs 🤏\n";
        std::cout<<"Computer wins.";
        break;
      case 5:
        std::cout<<"Computer draws 🖖 Spock\n\n";
        
        std::cout << "====================\n";
        std::cout << "✋ vs 🖖\n";
        std::cout<<"You win!";
        break;
      default:
        std::cout<<"ERROR!";
        break;
    }
  }

  // User draws scissors
  if (user==3) {
    switch (computer) {
      case 1:
        std::cout<<"Computer draws 🤜 Rock\n\n";
        
        std::cout << "====================\n";
        std::cout << "✌ vs ✊\n";
        std::cout<<"Computer wins.";
        break;
      case 2:
        std::cout<<"Computer draws ✋ Paper\n\n";
        
        std::cout << "====================\n";
        std::cout << "✌ vs ✋\n";
        std::cout<<"You win!";
        break;
      case 3:
        std::cout<<"Computer draws ✌ Scissors\n\n";
        
        std::cout << "====================\n";
        std::cout << "✌ vs ✌\n";
        std::cout<<"It's a tie!";
        break;
      case 4:
        std::cout<<"Computer draws 🤏 Lizard\n\n";
        
        std::cout << "====================\n";
        std::cout << "✌ vs 🤏\n";
        std::cout<<"You win!";
        break;
      case 5:
        std::cout<<"Computer draws 🖖 Spock\n\n";
        
        std::cout << "====================\n";
        std::cout << "✌ vs 🖖\n";
        std::cout<<"Computer wins.";
        break;
      default:
        std::cout<<"ERROR!";
        break;
    }
  }

  // User draws lizard
  if (user==4) {
    switch (computer) {
      case 1:
        std::cout<<"Computer draws ✊ Rock\n\n";
        
        std::cout << "====================\n";
        std::cout << "🤏 vs ✊\n";
        std::cout<<"Computer wins.";
        break;
      case 2:
        std::cout<<"Computer draws ✋ Paper\n\n";
        
        std::cout << "====================\n";
        std::cout << "🤏 vs ✋\n";
        std::cout<<"You win!";
        break;
      case 3:
        std::cout<<"Computer draws ✌ Scissors\n\n";
        
        std::cout << "====================\n";
        std::cout << "🤏 vs ✌\n";
        std::cout<<"Computer wins.";
        break;
      case 4:
        std::cout<<"Computer draws 🤏 Lizard\n\n";
        
        std::cout << "====================\n";
        std::cout << "🤏 vs 🤏\n";
        std::cout<<"It's a tie!";
        break;
      case 5:
        std::cout<<"Computer draws 🖖 Spock\n\n";
        
        std::cout << "====================\n";
        std::cout << "🤏 vs 🖖\n";
        std::cout<<"You win!";
        break;
      default:
        std::cout<<"ERROR!";
        break;
    }
  }

  // User draws spock
  if (user==5) {
    switch (computer) {
      case 1:
        std::cout<<"Computer draws 🤜 Rock\n\n";
        
        std::cout << "====================\n";
        std::cout << "🖖 vs ✊\n";
        std::cout<<"You win!";
        break;
      case 2:
        std::cout<<"Computer draws ✋ Paper\n\n";
        
        std::cout << "====================\n";
        std::cout << "🖖 vs ✋\n";
        std::cout<<"Computer wins.";
        break;
      case 3:
        std::cout<<"Computer draws ✌ Scissors\n\n";
        
        std::cout << "====================\n";
        std::cout << "🖖 vs ✌\n";
        std::cout<<"You win!";
        break;
      case 4:
        std::cout<<"Computer draws 🤏 Lizard\n\n";
        
        std::cout << "====================\n";
        std::cout << "🖖 vs 🤏\n";
        std::cout<<"Computer wins.";
        break;
      case 5:
        std::cout<<"Computer draws 🖖 Spock\n\n";
        
        std::cout << "====================\n";
        std::cout << "🖖 vs 🖖\n";
        std::cout<<"It's a tie!";
        break;
      default:
        std::cout<<"ERROR!";
        break;
    }
  }
  
  std::cout << "\n====================\n";

  return 0;
  }