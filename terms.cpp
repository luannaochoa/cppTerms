// First Attempt at  CPP Dictoinary Project 
// May the code work and be bug free
//
//                       _oo0oo_
//                      o8888888o
//                      88" . "88
//                      (| -_- |)
//                      0\  =  /0
//                    ___/`---'\___
//                  .' \\|     |// '.
//                 / \\|||  :  |||// \
//                / _||||| -:- |||||- \
//               |   | \\\  -  /// |   |
//               | \_|  ''\---/''  |_/ |
//               \  .-\__  '-'  ___/-. /
//             ___'. .'  /--.--\  `. .'___
//          ."" '<  `.___\_<|>_/___.' >' "".
//         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
//         \  \ `_.   \_ __\ /__ _/   .-` /  /
//     =====`-.____`.___ \_____/___.-`___.-'=====
//                       `=---='
//
//
//     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
//               佛祖保佑         永无BUG
//

#include <iostream>
#include <map>
#include <string>

int main ()
{
  
  //Map  container and iterator created
  std::map<std::string,std::string> myTerms;


  //declaring a bunch of stuff that will later be initialized 
  //Is there a cleaner way to do this? 
  //Is there a comment type for self notes to look back at? 
  //Can we make our own comment type to serve this purpose? for example use of ?? instead of //

  int mainMenuOption;
  int subOptionMenu2;
  std::string term;
  std::string newTerm;
  std::string newDef; 



  //Predefined terms
  //Can we set where the words will be saved w/in the progam? 

  myTerms["Example"]="an element";
  myTerms["b"]="another element";

  
do {

  //Is there a neater way to set up this menu? 
  //How should I go about creating a widget for this? 

  std::cout << "************* C++ Dictionary Terms *************" << std::endl;
  std::cout<<"This dictionary has " << myTerms.size() << " terms. \n";

  std::cout << "************* Instructions************* " << std::endl;
  std::cout<< "OPTIONS" << std::endl;
  std::cout << "> 1 = Look up term" << std::endl;
  std::cout << "> 2 = Add/Remove term" << std::endl;
  std::cout << "> 3 = List all terms" << std::endl;
  std::cout << "> 4 = Exit " << std::endl;

  std::cout << "Please enter your option:" << std::endl; 
  std::cin >> mainMenuOption; 


  if (mainMenuOption == 1)
  {
	
	std::cout << "Please enter your option:" << std::endl; 
  	std::cin >> term; 

  	std::cout << myTerms[term] << std::endl; 

  }


  if (mainMenuOption == 2)
  {

   	std::cout << "********************************" << std::endl;
   	std::cout << "********************************" << std::endl;
   	std::cout << "> 2 = Add/Remove Terms:" << std::endl;
  	std::cout << "********************************" << std::endl;
  	std::cout << "********************************" << std::endl;
  	std::cout <<  ">> 1 = Add Term" << std::endl; 
  	std::cout << ">> 2 = Remove Term" << std::endl;
  		//is this proper indenting? 
  		std::cout << "Please enter your option:" << std::endl; 
 		std::cin >> subOptionMenu2;

  	
	if (subOptionMenu2 == 1)
  	{
  		std::cout << "Add term:" << std::endl; 



  	}

  	if (subOptionMenu2 == 2)
  	{
  		std::cout << "Remove term:" << std::endl; 

  	}

  	else 
  		std::cout << "try again." << std::endl;

  }


  if (mainMenuOption == 3)
  {
  	std::cout << "List all term:" << std::endl; 
  }


}

while (mainMenuOption != 4);



  return 0;
}