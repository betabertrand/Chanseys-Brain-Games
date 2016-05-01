/*Chansey Memory Game algorithm
Bertrand Saint - Preux
March 9, 2016
This is a memory game that will display a text and prompt you to input what was displayed.
*/


//Video Game Project

//maze game/ tv show guessing character

//chansey mini game

//header files
#include "chanseyfunctions.h"
#include "chanseystructure.h"


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>
#include <fstream>
#include <cctype>
#include <algorithm>
#include <functional>
#include <time.h>


using namespace std;

const int SIZE=11;


int main()
{

	//declare and initialize variables

	//for chansey game
	char menuchoice = ' ', difchoice2 = ' ', playagain= ' ';
	string ceName;

	Game1 game1output[SIZE];
	Random randomgen[SIZE];
	Playagain Pg;
	Gamechoice game[SIZE];
	Gamescore score;



	//do delayed output and random string generator code
	srand(time(0));

	game1output[1].output="It Looks like youre going the right way\n\n";
	game1output[2].output="You're doing well, you may continue.\n\n";
	game1output[3].output="You seem to be remebering the map, keep going before you forget.\n\n";
	game1output[4].output="Be glad this isnt a dead end. Youre getting closer.\n\n";
	game1output[5].output="Good thing you didnt choose to go the other way, it mightve led you to your doom.\n\n";
	game1output[6].output="It feels like youre close. KEEP GOING!!!\n\n";
	game1output[7].output="Many would not have made it this far, May the odds be ever in your favor.\n\n";
	game1output[8].output="I hope your memory doesn't fail you now. Keep it up.\n\n";
	game1output[9].output="This is the moment of truth. If you go the wrong way now, you'll be lost forever.\n\n";
	game1output[10].output="THE MAP WORKED. YOU'RE FREE.\n\nCONGRADULATIONS!!\n\n";



	std::string cmmstory;
	std::string cmmName;
	std::string forfun;



	//write file pointer
	ofstream outfile;


	//introduce program

	//date stuff
	char date[9];
	_strdate_s(date);


	
	cout << date << endl;



	cout << "\nWELCOME TO \nCHANSEY'S BRAIN GAMES!\n\n";



	do
	{
		do
		{
			//do
			//
				cout << "Game:\n1) Chansey's Mystery Maze\n2) Chansey's Memory Game\n3) Chansey's Endless Memory\n\nAdditional Options:\n4) About\n5) Exit\n\n";

				cout << "Choice: ";
				cin >> menuchoice;
				cout << endl << endl;






				if (menuchoice == '1')

				{

					do
					{


						cout << "Chansey's Mystery Maze!\n\n";

						//display menu

						cout << "1) The Backstory (Rules)\n2) Play Game\n3) Exit\n\n";

						//prompt user to enter menechoice
						cout << "Choice: ";
						cin >> menuchoice;
						cout << endl << endl;

						if (menuchoice == '1')
						{
							//show rules
							cmmstory = "You wake up. Its raining and it seems that you have been dropped \nin the middle of in a maze but you have no recollection of how you have gotten there.\nYou frantically start to run aroound through the maze desperately searching for \na way out with no avail.It starts to pour but there is no where to take shelter so you lay down \non the grass looking to the sky. Suddenly! You see a flash of lightning erupts through the sky.\nThe light that is emitted from the lightning seems to resemble a map. Seeing that this is the only \nclue that you have been able to find. You start to memorize the map as it quickly starts to fade. This is \nyour only chance at escape, so you better hope you remebered the map!!\n\n";

							forfun = "It looked like it said \"its dangerous to go alone\" at the bottom of the skymap but it's to faint to be sure.";




							delayed_out1(cmmstory);
							cout << endl << endl;
							delayed_out1(forfun);
							cout << endl << endl;


						}

						if (menuchoice == '2')
						{
							//play game


							cout << "Enter your First Name: ";
							cin >> ceName;
							cout << endl << endl;





							do
							{

								//generate the randoms
								int x = 1;
								for (unsigned int i = 1; i < SIZE; ++i)
								{
									
									randomgen[x].cmmString = genRandom4();
									x++;
								}


								delayed_out1("And so ");
								delayed_out1(ceName);
								delayed_out1(" Your Journey Begins......");
								cout << endl << endl;

								delayed_out(randomgen[1].cmmString + " " + randomgen[2].cmmString + " " + randomgen[3].cmmString + " " + randomgen[4].cmmString + " " + randomgen[5].cmmString + " " + randomgen[6].cmmString + " " + randomgen[7].cmmString + " " + randomgen[8].cmmString + " " + randomgen[9].cmmString + " " + randomgen[10].cmmString);


								cout << "SkyMap Key:   S= Straight   L= Left    R= Right\n\n";

								for (int i=1; i < SIZE; i++)
								{
									do
									{
										
										cout << endl;

										cout<<"Which way are you going to go now: ";
										cin >> game[i].gc1;
										cout<<endl;

										if (game[i].gc1 != "S" && game[i].gc1 != "L" && game[i].gc1 != "R")
											cout << "Invalid, the sky map only had the options Left Right and Straight.\n\n";

									}while (game[i].gc1 != "S" && game[i].gc1 != "L" && game[i].gc1 != "R");

									if (game[i].gc1 == randomgen[i].cmmString)
										delayed_out1(game1output[i].output);
									else
										break;

								}
								


								if (game[1].gc1 != randomgen[1].cmmString || game[2].gc1 != randomgen[2].cmmString || game[3].gc1 != randomgen[3].cmmString || game[4].gc1 != randomgen[4].cmmString || game[5].gc1 != randomgen[5].cmmString || game[6].gc1 != randomgen[6].cmmString || game[7].gc1 != randomgen[7].cmmString || game[8].gc1 != randomgen[8].cmmString || game[9].gc1 != randomgen[9].cmmString || game[10].gc1 != randomgen[10].cmmString)
								{

									delayed_out1("Game over. You Walked into a trap.\n\nI guess it is dangerous to go alone......\n\n\n");
								}

								do
								{

									cout << "Do you want to play again?\n1) Yes\t2) No\n";
									cout << "Choice: ";
									cin >> Pg.game1;
									cout << endl << endl;

									if (Pg.game1 != '1' && Pg.game1 != '2')
										cout << "Invalid. Must Choose Yes or No.\n\n";

								} while (Pg.game1 != '1' && Pg.game1 != '2');




							} while (Pg.game1 == '1');















						}

					} while (Pg.game1 == '2');
				}


		
			
			
					
			if (menuchoice == '2')
			{

				do
				{

				do
				{

					//display menu

					cout << "1) Show Rules\n2) Play Game\n3) Exit\n\n";

					//prompt user to enter menechoice
					cout << "Choice: ";
					cin >> menuchoice;
					cout << endl << endl;



					if (menuchoice == '1')
					{

						//show rules of game
						cout << "This is the Chansey Memory Game. In this game you must memorize\nthe patterns or characters that are presented in front of you.\n";
						cout << "You will enter the the answers using the keyboards character keys (case sensitive).\n";
						cout << "The HighScore will be saved for you.\n\n\n";
					}

				} while (menuchoice == '1');
				if (menuchoice == '2')
				{



					//play game

					//show game difficulty options
				//prompt user to enter the game difficulty

					do
					{
						do
						{
							do
							{
								do
								{
									cout << "Difficulty Level:\n1) Easy\n2) Medium\n3) Hard\n4) Exit\n\n";
									cout << "Choice: ";
									cin >> difchoice2;


									if (difchoice2 != '3' &&  difchoice2 != '2' && difchoice2 != '1' && difchoice2 != '4')
										cout << "Invalid. Menu Choice must be between 1-3.\n\n";

								} while (difchoice2 != '3' && difchoice2 != '2' && difchoice2 != '1' && difchoice2 != '4');

								if (difchoice2 == '1')
								{

									//Prompt user to enter name for Highscore

									cout << "Enter First Name: ";
									cin >> ceName;
									cout << endl << endl << endl;

									do
									{

										int x = 1;
										for (unsigned int i = 1; i < SIZE; ++i)
										{
											
											randomgen[x].eString = genRandom1();
											x++;
										}


									

										//show pattern to memorize

										delayed_out(randomgen[1].eString + " " + randomgen[2].eString + " " + randomgen[3].eString + " " + randomgen[4].eString + " " + randomgen[5].eString + " " + randomgen[6].eString + " " + randomgen[7].eString + " " + randomgen[8].eString + " " + randomgen[9].eString + " " + randomgen[10].eString);


										//display answer choices
										cout << "CHOICES:\n\n U D L R\n\n";

										//prompt user to enter answers
										
										for (int i = 1; i < SIZE; i++)
										{
											cout << "Choice " << i << ": ";
											cin >> game[i].gc2e;
											cout << endl;
										}
									

										//calculate score
										for (int i = 1; i < SIZE; i++)
										{
											if (game[i].gc2e == randomgen[i].eString)
											{
												score.g2e++;
											}
										}
										
										//display answer

										//display score

										if (score.g2e == 10)
										{
											//display perfect
											cout << "PERFECT!!!!\nYOU SCORED EVERYTHING CORRECTLY\n\n";
										}

										else if (score.g2e < 10 && score.g2e >= 5)
										{
											//display good
											cout << "GOOD JOB. You remembered most of the Letters.\n\n";
										}

										else if (score.g2e < 5)
										{
											//display bad
											cout << "You didn't remember most of the letters. You should Try again.\n\n";
										}

										//write highscore to file



										if (score.g2e > score.g2hse)
										{

											outfile.open("BRAIN GAME HIGHSCORES.txt", ios::app);

											score.g2hse = score.g2e;

											outfile << "CHANSEY MEMORY GAME||Diffuclty: Easy||" << "Player Name: " << ceName << "||" << "Score: " << score.g2hse << "||Date: " << date << endl;

											outfile.close();
										}

										cout << "Your score: " << score.g2e << "\tHighScore: " << score.g2hse << endl;


										cout << "Your Answers:    ";
										for (int i = 1; i < SIZE; i++)
										{
											cout << game[i].gc2e << " ";
										}
										cout << endl << "Correct Answers: ";
										for (int i = 1; i < SIZE; i++)
										{
											cout << randomgen[i].eString << " ";
										}
										
										score.g2e = 0;

										//prompt user to play again

										do
										{
											
											cout << "\n\nDo you want to play this Difficulty again?\n1) Yes\t2) No\n";
											cout << "Choice: ";
											cin >> playagain;
											cout << endl << endl;

											if (playagain != '1' && playagain != '2')
												cout << "Invalid. Must Choose Yes or No.\n\n";

										} while (playagain != '1' && playagain != '2');


									} while (playagain == '1');

								}
							} while (playagain == '2');
							if (difchoice2 == '2')
							{

								cout << "Enter First Name: ";
								cin >> ceName;
								cout << endl << endl << endl;

								do
								{
									int x = 1;
									for (unsigned int i = 1; i < SIZE; ++i)
									{
										
										randomgen[x].mString = genRandom2();
										x++;
									}
								


									//show pattern to memorize
									delayed_out(randomgen[1].mString + " " + randomgen[2].mString + " " + randomgen[3].mString + " " + randomgen[4].mString + " " + randomgen[5].mString + " " + randomgen[6].mString + " " + randomgen[7].mString + " " + randomgen[8].mString + " " + randomgen[9].mString + " " + randomgen[10].mString);


									//display answer choices
									cout << "CHOICES:\n\n1 2 3 4 5 6 7 8 9 0 \n\n";


									//prompt user to enter answers
									for (int i = 1; i < SIZE; i++)
									{
										cout << "Choice " << i << ": ";
										cin >> game[i].gc2m;
										cout << endl;
									}
							

									//calculate score
									for (int i = 1; i < SIZE; i++)
									{
										if (game[i].gc2m == randomgen[i].mString)
										{
											score.g2m++;
										}
									}
									
									//display answer

									//display score

									if (score.g2m == 10)
									{
										//display perfect
										cout << "PERFECT!!!!\nYOU SCORED EVERYTHING CORRECTLY\n\n";
									}

									else if (score.g2m < 10 && score.g2m >= 5)
									{
										//display good
										cout << "GOOD JOB. You remembered most of the Letters.\n\n";
									}

									else if (score.g2m < 5)
									{
										//display bad
										cout << "You didn't remember most of the letters. You should Try again.\n\n";
									}

									//write highscore to file


									if (score.g2m > score.g2hsm)
									{

										outfile.open("BRAIN GAME HIGHSCORES.txt", ios::app);

										score.g2hsm = score.g2m;

										outfile << "CHANSEY MEMORY GAME||Difficulty: Medium||" << "Player Name: " << ceName << "||" << "Score: " << score.g2m << "||Date: " << date << endl;

										outfile.close();
									}

									cout << "Your score: " << score.g2m << "\tHighScore: " << score.g2hsm << endl;

									cout << "Your Answers:    ";
									for (int i = 1; i < SIZE; i++)
									{
										cout << game[i].gc2m << " ";
									}
									cout << endl << "Correct Answers: ";
									for (int i = 1; i < SIZE ; i++)
									{
										cout << randomgen[i].mString << " ";
									}
								


									score.g2m = 0;
									do
									{

										cout << "\n\nDo you want to play this Difficulty again?\n1) Yes\t2) No\n";
										cout << "Choice: ";
										cin >> playagain;
										cout << endl << endl;

										if (playagain != '1' && playagain != '2')
											cout << "Invalid. Must Choose Yes or No.\n\n";

									} while (playagain != '1' && playagain != '2');


								} while (playagain == '1');
							}
						} while (playagain == '2');
						if (difchoice2 == '3')
						{

							cout << "Enter First Name: ";
							cin >> ceName;
							cout << endl << endl << endl;
							do
							{
								int x = 1;
								for (unsigned int i = 1; i < SIZE; ++i)
								{
									
									randomgen[x].hString = genRandom3();
									x++;
								}
							
								//show pattern to memorize
								delayed_out(randomgen[1].hString + " " + randomgen[2].hString + " " + randomgen[3].hString + " " + randomgen[4].hString + " " + randomgen[5].hString + " " + randomgen[6].hString + " " + randomgen[7].hString + " " + randomgen[8].hString + " " + randomgen[9].hString + " " + randomgen[10].hString);


								//display answer choices
								cout << "CHOICES:\n\n0 1 2 3 4 5 6 7 8 9 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z\n\n";

								//prompt user to enter answers
								for (int i = 1; i < SIZE; i++)
								{
									cout << "Choice " << i << ": ";
									cin >> game[i].gc2h;
									cout << endl;
								}
								
								//calculate score

								for (int i = 1; i < SIZE; i++)
								{
									if (game[i].gc2h == randomgen[i].hString)
									{
										score.g2h++;
									}
								}
							
								//display answer

								//display score

								if (score.g2h == 10)
								{
									//display perfect
									cout << "PERFECT!!!!\nYOU SCORED EVERYTHING CORRECTLY\n\n";
								}

								else if (score.g2h < 10 && score.g2h >= 5)
								{
									//display good
									cout << "GOOD JOB. You remembered most of the Letters.\n\n";
								}

								else if (score.g2h < 5)
								{
									//display bad
									cout << "You didn't remember most of the letters. You should Try again.\n\n";
								}

								//write highscore to file



								if (score.g2h > score.g2hsh)
								{
									outfile.open("BRAIN GAME HIGHSCORES.txt", ios::app);

									score.g2hsh = score.g2h;

									outfile << "CHANSEY MEMORY GAME||Difficulty: Hard||" << "Player Name: " << ceName << "||" << "Score: " << score.g2h << "||Date: " << date << endl;

									outfile.close();
								}

								cout << "Your score: " << score.g2h << "\tHighScore: " << score.g2hsh << endl;

								cout << "Your Answers:    ";
								for (int i = 1; i < SIZE; i++)
								{
									cout << game[i].gc2h << " ";
								}
								cout << endl << "Correct Answers: ";
								for (int i = 1; i < SIZE; i++)
								{
									cout << randomgen[i].hString << " ";
								}
								
							


								score.g2h = 0;


								do
								{

									cout << "\n\nDo you want to play this Difficulty again?\n1) Yes\t2) No\n";
									cout << "Choice: ";
									cin >> playagain;
									cout << endl << endl;

									if (playagain != '1' && playagain != '2')
										cout << "Invalid. Must Choose Yes or No.\n\n";

								} while (playagain != '1' && playagain != '2');


							} while (playagain == '1');


						}
					} while (playagain == '2');
				//}while (difchoice2 == '3');
				
				}


				



				}while (difchoice2 == '4');

			}
		
		} while (menuchoice == '3');
		if (menuchoice == '3')
		{
			//play chanseys endless memory
			cout << "CHANSEY'S ENDLESS MEMORY COMMING SOON.\nSTAY TUNED AND SUPPORT THE DEVELOPERS!!!!\n\n";

		}

		if (menuchoice == '4')

		{
			//show about
			cout << "Chansey's Brain Games was created by Bertrand Saint-Preux and inspired by the pokemon Chansey from a minigame in \"Pokemon Stadium\".\n";
			cout << "Part of Chansey's Mystery Maze was inspired by the \"Legend of Zelda\" (The Greatest Game series ever)\n\n";
			cout << "Game Testers: Michael and Chase.\n\n";
		}

		if (menuchoice == '5')
		{
			//display exit
			cout << "I HOPE YOU ENJOYED.\nGOODBYE\n\n\n";
		}
		
		if (menuchoice != '5' && menuchoice != '1' && menuchoice != '2' && menuchoice != '3' && menuchoice != '4')
			cout << "Invalid. Choice must be equal to 1-5.\n\n";
	} while (menuchoice != '5');

	return 0;

}


