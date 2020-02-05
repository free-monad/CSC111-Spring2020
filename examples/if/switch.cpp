#include <iostream>

using namespace std;

//define//////////////////////////////////////////////////////////////////////////////
enum Planet {Mercury, Venus, Earth, Mars,Jupiter, Saturn, Uranus, Neptune, Exoplanet};

//function prototype//////////////////////////////////////////////////////////////////
Planet mapNameToPlanet(string planetName);



//main////////////////////////////////////////////////////////////////////////////////

int main()
{
  Planet myPlanet;
  string input;

  cout << "What planet are you from?" << endl;
  cin >>  input;

  myPlanet = mapNameToPlanet(input);

  switch(myPlanet){
    case Mercury:
      cout << "Ahh, the first planet from the Sun, so swift!" << endl;
      break;
    case Venus:
      cout << "My what a beautiful, hot world!" << endl;
      break;
    case Earth:
      cout << "Home sweet home!" << endl;
      break;
    case Mars:
      cout << "Have you been to Olympus Mons?" << endl;
      break;
    case Jupiter:
      cout << "What a large large place" << endl;
      break;
    case Saturn:
      cout << "Rings of splendor!" << endl;
      break;
    case Uranus:
      cout << "hmmm..." << endl;
      break;
    case Neptune:
      cout << "So cold and blue" << endl;
      break;
    default:
      cout << "I've never heard of that place. Are you from another star system?" << endl;
      break;   
  }

  return 0;
}




//function definition//////////////////////////////////////////////////////////////////

Planet mapNameToPlanet(string planetName){
  Planet planetToMap;

  if(planetName == "Mercury"){
    planetToMap = Mercury;
  } else if (planetName == "Venus"){
    planetToMap = Venus;
  } else if (planetName == "Earth"){
    planetToMap = Earth;
  } else if (planetName == "Mars"){
    planetToMap = Mars;
  } else if (planetName == "Jupiter"){
    planetToMap = Jupiter;
  } else if (planetName == "Saturn"){
    planetToMap = Saturn;
  } else if (planetName == "Uranus"){
    planetToMap = Uranus;
  } else if (planetName == "Neptune"){
    planetToMap = Neptune;
  } else {
    planetToMap = Exoplanet;
  }

  return planetToMap;
}
