
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

const int NUMBER_OF_CARDS = 52; 

void show(const vector<vector<string>>&);
void shuffleDeck(vector<vector<string>>&);
vector <vector<string>> createDeck();
vector <string> draw(vector<vector<string>>&);

void deal(vector<vector<string>>&, 
          vector<vector<string>>&, 
          vector<vector<string>>&);


int main(){
  vector<vector<string>> player1_hand;
  vector<vector<string>> player2_hand;

//code goes here

  return 0;
}


vector<vector<string>> createDeck(){

  vector<vector<string>> deck = { 
    {"A", "hearts"}, {"A", "spades"}, {"A", "clovers"}, {"A", "diamonds"},
    {"2", "hearts"}, {"2", "spades"}, {"2", "clovers"}, {"2", "diamonds"},
    {"3", "hearts"}, {"3", "spades"}, {"3", "clovers"}, {"3", "diamonds"},
    {"4", "hearts"}, {"4", "spades"}, {"4", "clovers"}, {"4", "diamonds"},
    {"5", "hearts"}, {"5", "spades"}, {"5", "clovers"}, {"5", "diamonds"},
    {"6", "hearts"}, {"6", "spades"}, {"6", "clovers"}, {"6", "diamonds"},
    {"7", "hearts"}, {"7", "spades"}, {"7", "clovers"}, {"7", "diamonds"},
    {"8", "hearts"}, {"8", "spades"}, {"8", "clovers"}, {"8", "diamonds"},
    {"9", "hearts"}, {"9", "spades"}, {"9", "clovers"}, {"9", "diamonds"},
    {"10", "hearts"}, {"10", "spades"}, {"10", "clovers"}, {"10", "diamonds"},
    {"J", "hearts"}, {"J", "spades"}, {"J", "clovers"}, {"J", "diamonds"},
    {"Q", "hearts"}, {"Q", "spades"}, {"Q", "clovers"}, {"Q", "diamonds"},
    {"K", "hearts"}, {"K", "spades"}, {"K", "clovers"}, {"K", "diamonds"}  
  };  

  return deck;
}



void shuffleDeck(vector<vector<string>> &deck){

  int index1;
  int index2;
  vector <string> temp;

  srand(time(0));

  for(int i = 0; i < 1000; i++){
    index1 = rand() % deck.size();
    index2 = rand() % deck.size();
  
    temp = deck.at(index1);
    deck.at(index1) = deck.at(index2);
    deck.at(index2) = temp;
  }

}




void show(const vector<vector<string>> &cards){

  cout << endl;

  for(vector<string> card : cards){
    for(string value : card){
      cout << value << " ";
    }   
    cout << endl;
  }

  cout << endl;
}



vector<string> draw(vector<vector<string>> &deck){

  vector<string> card = deck.at(deck.size() - 1); 
  deck.pop_back();

  return card;
}


void deal(vector<vector<string>> &hand1, 
          vector<vector<string>> &hand2, 
          vector<vector<string>> &deck){

  for(int i = 0; i < 5; i++){
    hand1.push_back(draw(deck));
    hand2.push_back(draw(deck));
  }
}
