#include <iostream>
#include <string>

using namespace std;


//Definitions//////////////////////////////////////////////////////////////////////////////////////////
enum Job { StealCrown, PloughField, AssassinateFigure, FindLove, NoThanks};
enum Skill { Strong, Agile, Smart, Honest, Unskilled};
enum Weakness { Weak, Clumsy, Dumb, Deceitful, Skilled};

const string JOB1 = "steal a crown";
const string JOB2 = "plough a field";
const string JOB3 = "assassinate a powerful figure";
const string JOB4 = "find my long lost love";
const string NO_THANKS = "no thanks";

const string STRONG = "strong";
const string AGILE = "agile";
const string SMART = "smart";
const string HONEST = "honest";

const string WEAK = "weak";
const string CLUMSY = "clumsy";
const string DUMB = "dumb";
const string DECEITFUL = "deceitful";

const string UNSKILLED = "UNSKILLED ERROR";
const string SKILLED = "SKILLED ERROR";

//Function Prototypes///////////////////////////////////////////////////////////////////////////////////
bool map(string input);
bool ask(string question);
string skillMap(Skill selection);
string jobMap(Job selection);
string weaknessMap(Weakness selection);
string attributeMap(int attribute, bool val);


int main()
{
  int jobChoice;
  Job mission;

  bool isStrong;
  bool isAgile;
  bool isSmart;
  bool isHonest;

  printf("\033c");
  cout << "Hello kind stranger." << endl << endl; 
  cout << "I am a relatively affluent noble willing to pay great sums for your services." << endl;
  cout << " Would you be interested in helping with any of the following tasks?";
  cout << endl << endl;

  cout << "########################################################" << endl;
  cout << "#                   Job Opportunities                  #" << endl;
  cout << "########################################################" << endl;
  cout << "1. " << JOB1 << endl;
  cout << "2. " << JOB2 << endl;
  cout << "3. " << JOB3 << endl;
  cout << "4. " << JOB4 << endl; 
  cout << "5. " << NO_THANKS << endl;
  cout <<  "--------------------------------------------------------" << endl;
  cin >> jobChoice;
  
  jobChoice--;

  cout << endl << endl;

  printf("\033c");

  if(jobChoice < 0 || jobChoice > 3){
    cout << "Sorry we couldn't have matched up our needs better, good bye!" << endl << endl;
    exit(0);
  }

  mission = static_cast<Job>(jobChoice);

  cout << "Excellent choice! Before we get started, I would like to ask you a few basic screening questions..." << endl << endl;

  isStrong = ask("Are you strong?");
  isAgile = ask("Are you nimble, quick, and agile?");
  isSmart = ask("Are you smart?");
  isHonest = ask("Are you honest?");

  printf("\033c");
  cout << "Let's see, since you are applying to " << jobMap(mission);
  cout << ", I will require you to have certain skills. Hmmm..." << endl << endl;
  cout << "I see that you are " << attributeMap(static_cast<int>(Strong), isStrong) << 
	  ", " << attributeMap(static_cast<int>(Agile), isAgile) << 
	  ", " << attributeMap(static_cast<int>(Smart), isSmart) << 
	  ", and " << attributeMap(static_cast<int>(Honest), isHonest); 


  cout << endl << endl;

  if(mission == StealCrown){
    if(isAgile && isSmart && !isHonest){
      cout << "So nimble, smart, and discerning with the truth... congratulations you're hired!" << endl;
    } else {

      cout << "I'm so sorry..." << endl;

      if(!isAgile){
        cout << "You might be too clumsy for this role." << endl;
      }

      if(!isSmart){
        cout << "I need someone more... how shall I put this... less blunted" << endl;
      }

      if(isHonest){
        cout << "Honesty is the best policy, but I'm not so sure it's a great feature for this line of work, I need someone, more discreet, you understand?" << endl;
      }
    }
  } else if (mission == PloughField){
    if(isStrong && !isSmart && isHonest){
      cout << "So strong, simple, and honest... the perfect combination, you're hired!" << endl;
    } else {
      if(!isStrong){
        cout << "Your mind is willing, but is your flesh. Do some heavy lifting and come back when you are ready." << endl;
      }

      if(isSmart){
        cout << "I'm afraid, with a mind like yours, you might be better suited to a line of work with a greater air of sophistication" << endl;
      }

      if(!isHonest){
        cout << "I appreciate how forthright you've been considering your natural inclination towards deceit, but I'm afraid I could put you to better use stealing a crown. What do you say?" << endl;
      }
    }
  } else if (mission == AssassinateFigure){
    if(isStrong && isAgile && isSmart && !isHonest){
      cout << "Yes... you are strong, agile, smart, and full of cunning and deceit. You're perfect. Send your previous employer your two weeks, do I have a job for you!";
    } else {
      if(!isStrong){
        cout << "I know it can be done without strength through being clever, but if the job gets ugly, I need someone with a bit of muscle." << endl;
      }

      if(!isAgile){
        cout << "Being nimble is an essential requirement. I won't have you if you are nothing short of an acrobate!" << endl;
      }

      if(!isSmart){
        cout << "I see you are very down-to-earth and plain of thought. Are you sure you can imagine an elaborate plot to unravel one of the most potent figures of the modern age?" << endl;
      }

      if(isHonest){
        cout << "So honest, with that kind of virtue, could you ever do the job that must be done once the job is done. Silence keeps secrets best hidden, but I need someone more skilled in the art of deception." << endl;
      }
    }
  } else if (mission == FindLove){
    if(!isStrong && isSmart && isHonest){
      cout << "How could I have not seen it before? You're perfect! Weak, smart, and honest. What combination could be better at achieving the goal? They'll never fall for you with a physique like that, yet you are smart enough to get the job done and honest enough for me to trust you!" << endl;
    } else{
      if(isStrong){
        cout << "I'm sorry, I know you mean well, but with a body like that, how can I be certain that the love of my life, when you rescue them, won't take one good look at you and fall in love?" << endl;
      }

      if(!isSmart){
        cout << "You can't just rest on your laurels for this. There is a lot of thinking and planning involved to win them to my heart" << endl;
      }

      if(!isHonest){
        cout << "I don't know if upon seeing their beauty, you could keep your word and bring them back to me. I need someone more honest." << endl;
      }
    }
  } else {
    cout << "Sorry we couldn't have matched up our needs better, good bye!" << endl << endl;
    exit(0);
  }

  return 0;
}



//Function Definitions////////////////////////////////////////////////////////////////////////////////////

bool map(string input){
  if(input == "YES" || input == "Yes" || input == "yes" || input == "y" || input == "Y" || input == "1"){
    return true;
  } else {
    return false;
  }
}


bool ask(string question){
  string input;
  cout << question << endl;
  cin >> input;

  return map(input);
}


string jobMap(Job selection){
  string result;

  switch(selection){
    case StealCrown:
      result = JOB1;
      break;
    case PloughField:
      result = JOB2;
      break;
    case AssassinateFigure:
      result = JOB3;
      break;
    case FindLove:
      result = JOB4;
      break;
    default:
      result = NO_THANKS;
      break;
  }

  return result;
}


string skillMap(Skill selection){
  string result;

  switch(selection){
    case Strong:
      result = STRONG;
      break;
    case Agile:
      result = AGILE;
      break;
    case Smart:
      result = SMART;
      break;
    case Honest:
      result = HONEST;
      break;
    default:
      result = UNSKILLED;
  }

  return result;
}

string weaknessMap(Weakness selection){
  string result;

  switch(selection){
    case Weak:
      result = WEAK;
      break;
    case Clumsy:
      result = CLUMSY;
      break;
    case Dumb:
      result = DUMB;
      break;
    case Deceitful:
      result = DECEITFUL;
      break;
    default:
      result = SKILLED;
  }

  return result;
}

string attributeMap(int attribute, bool val)
{
  if(val){
    return skillMap(static_cast<Skill>(attribute));
  } else{
    return weaknessMap(static_cast<Weakness>(attribute));
  }
}
