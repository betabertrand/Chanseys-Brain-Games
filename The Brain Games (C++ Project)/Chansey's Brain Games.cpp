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

	//string Str1=" ", Str2=" ", Str3=" ", Str4=" ", Str5=" ", Str6=" ", Str7=" ", Str8=" ", Str9=" ", Str10=" ";
	//for chansey game
	char menuchoice = ' ', difchoice2 = ' ', playagain= ' ';
	string ceName;
	//int escore = 0, mscore = 0, hscore = 0, ehighscore = 0, mhighscore = 0, hhighscore = 0, month = 0, day = 0, year = 0;
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






	/*
	std::string cmmStr1;
	std::string cmmStr2;
	std::string cmmStr3;
	std::string cmmStr4;
	std::string cmmStr5;
	std::string cmmStr6;
	std::string cmmStr7;
	std::string cmmStr8;
	std::string cmmStr9;
	std::string cmmStr10;
	*/

	


	std::string cmmstory;
	std::string cmmName;
	std::string forfun;

	/*
	std::string eStr1;
	std::string eStr2;
	std::string eStr3;
	std::string eStr4;
	std::string eStr5;
	std::string eStr6;
	std::string eStr7;
	std::string eStr8;
	std::string eStr9;
	std::string eStr10;
	*/

	//Random.eString[SIZE]

	/*
	std::string mStr1;
	std::string mStr2;
	std::string mStr3;
	std::string mStr4;
	std::string mStr5;
	std::string mStr6;
	std::string mStr7;
	std::string mStr8;
	std::string mStr9;
	std::string mStr10;

	std::string hStr1;
	std::string hStr2;
	std::string hStr3;
	std::string hStr4;
	std::string hStr5;
	std::string hStr6;
	std::string hStr7;
	std::string hStr8;
	std::string hStr9;
	std::string hStr10;
	*/

	//Random.mString[SIZE]

	//Random.hString[SIZE]


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


								/*
								cmmStr1 = genRandom4();
								cmmStr2 = genRandom4();
								cmmStr3 = genRandom4();
								cmmStr4 = genRandom4();
								cmmStr5 = genRandom4();
								cmmStr6 = genRandom4();
								cmmStr7 = genRandom4();
								cmmStr8 = genRandom4();
								cmmStr9 = genRandom4();
								cmmStr10 = genRandom4();
								*/


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


			//} while (menuchoice == '3');
			
			
					
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


										/*
										for (unsigned int i = 1; i < 2; ++i)
										{


											eStr1 = genRandom1();
											eStr2 = genRandom1();
											eStr3 = genRandom1();
											eStr4 = genRandom1();
											eStr5 = genRandom1();
											eStr6 = genRandom1();
											eStr7 = genRandom1();
											eStr8 = genRandom1();
											eStr9 = genRandom1();
											eStr10 = genRandom1();


										}
										*/



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
										/*
										cout << "Choice 1: ";
										cin >> gc1;
										cout << "Choice 2: ";
										cin >> gc2;
										cout << "Choice 3: ";
										cin >> gc3;
										cout << "Choice 4: ";
										cin >> gc4;
										cout << "Choice 5: ";
										cin >> gc5;
										cout << "Choice 6: ";
										cin >> gc6;
										cout << "Choice 7: ";
										cin >> gc7;
										cout << "Choice 8: ";
										cin >> gc8;
										cout << "Choice 9: ";
										cin >> gc9;
										cout << "Choice 10: ";
										cin >> gc10;
										*/

										/*
										std::transform(gc1.begin(), gc1.end(), gc1.begin(), std::ptr_fun<int, int>(std::toupper));
										std::transform(gc2.begin(), gc2.end(), gc2.begin(), std::ptr_fun<int, int>(std::toupper));
										std::transform(gc3.begin(), gc3.end(), gc3.begin(), std::ptr_fun<int, int>(std::toupper));
										std::transform(gc4.begin(), gc4.end(), gc4.begin(), std::ptr_fun<int, int>(std::toupper));
										std::transform(gc5.begin(), gc5.end(), gc5.begin(), std::ptr_fun<int, int>(std::toupper));
										std::transform(gc6.begin(), gc6.end(), gc6.begin(), std::ptr_fun<int, int>(std::toupper));
										std::transform(gc7.begin(), gc7.end(), gc7.begin(), std::ptr_fun<int, int>(std::toupper));
										std::transform(gc8.begin(), gc8.end(), gc8.begin(), std::ptr_fun<int, int>(std::toupper));
										std::transform(gc9.begin(), gc8.end(), gc9.begin(), std::ptr_fun<int, int>(std::toupper));
										std::transform(gc10.begin(), gc10.end(), gc10.begin(), std::ptr_fun<int, int>(std::toupper));
										*/



										//calculate score
										for (int i = 1; i < SIZE; i++)
										{
											if (game[i].gc2e == randomgen[i].eString)
											{
												score.g2e++;
											}
										}
										/*
										if (gc2 == eStr2)
										{
											escore++;
										}

										if (gc3 == eStr3)
										{
											escore++;
										}

										if (gc4 == eStr4)
										{
											escore++;
										}

										if (gc5 == eStr5)
										{
											escore++;
										}

										if (gc6 == eStr6)
										{
											escore++;
										}

										if (gc7 == eStr7)
										{
											escore++;
										}

										if (gc8 == eStr8)
										{
											escore++;
										}

										if (gc9 == eStr9)
										{
											escore++;
										}

										if (gc10 == eStr10)
										{
											escore++;
										}

										*/
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
										//cout << "Your Answers: " << game[1].gc2e << " " << game[2].gc2e << " " << game[3].gc2e << " " << game[4].gc2e << " " << game[5].gc2e << " " << game[6].gc2e << " " << game[7].gc2e << " " << game[8].gc2e << " " << game[9].gc2e << " " << game[10].gc2e << endl;
										//cout << "Correct Answers: " << randomgen[1].eString << " " << randomgen[2].eString << " " << randomgen[3].eString << " " << randomgen[4].eString << " " << randomgen[5].eString << " " << randomgen[6].eString << " " << randomgen[7].eString << " " << randomgen[8].eString << " " << randomgen[9].eString << " " << randomgen[10].eString << endl << endl;

										
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
									/*
									for (unsigned int i = 1; i < 2; ++i)
									{

										mStr1 = genRandom2();
										mStr2 = genRandom2();
										mStr3 = genRandom2();
										mStr4 = genRandom2();
										mStr5 = genRandom2();
										mStr6 = genRandom2();
										mStr7 = genRandom2();
										mStr8 = genRandom2();
										mStr9 = genRandom2();
										mStr10 = genRandom2();

									}
									*/



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
									/*
									cout << "Choice 1: ";
									cin >> gc1;
									cout << "Choice 2: ";
									cin >> gc2;
									cout << "Choice 3: ";
									cin >> gc3;
									cout << "Choice 4: ";
									cin >> gc4;
									cout << "Choice 5: ";
									cin >> gc5;
									cout << "Choice 6: ";
									cin >> gc6;
									cout << "Choice 7: ";
									cin >> gc7;
									cout << "Choice 8: ";
									cin >> gc8;
									cout << "Choice 9: ";
									cin >> gc9;
									cout << "Choice 10: ";
									cin >> gc10;
									*/
									/*transform(gc1.begin(), gc1.end(), gc1.begin(), ::toupper);
									transform(gc2.begin(), gc2.end(), gc2.begin(), ::toupper);
									transform(gc3.begin(), gc3.end(), gc3.begin(), ::toupper);
									transform(gc4.begin(), gc4.end(), gc4.begin(), ::toupper);
									transform(gc5.begin(), gc5.end(), gc5.begin(), ::toupper);
									transform(gc6.begin(), gc6.end(), gc6.begin(), ::toupper);
									transform(gc7.begin(), gc7.end(), gc7.begin(), ::toupper);
									transform(gc8.begin(), gc8.end(), gc8.begin(), ::toupper);
									transform(gc9.begin(), gc8.end(), gc9.begin(), ::toupper);
									transform(gc10.begin(), gc10.end(), gc10.begin(), ::toupper);*/


									//calculate score
									for (int i = 1; i < SIZE; i++)
									{
										if (game[i].gc2m == randomgen[i].mString)
										{
											score.g2m++;
										}
									}
									/*
									if (gc1 == mStr1)
									{
										mscore++;
									}

									if (gc2 == mStr2)
									{
										mscore++;
									}

									if (gc3 == mStr3)
									{
										mscore++;
									}

									if (gc4 == mStr4)
									{
										mscore++;
									}

									if (gc5 == mStr5)
									{
										mscore++;
									}

									if (gc6 == mStr6)
									{
										mscore++;
									}

									if (gc7 == mStr7)
									{
										mscore++;
									}

									if (gc8 == mStr8)
									{
										mscore++;
									}

									if (gc9 == mStr9)
									{
										mscore++;
									}

									if (gc10 == mStr10)
									{
										mscore++;
									}
									*/
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
									// cout << "Your Answers: " << gc1 << " " << gc2 << " " << gc3 << " " << gc4 << " " << gc5 << " " << gc6 << " " << gc7 << " " << gc8 << " " << gc9 << " " << gc10 << endl;
									// cout << "Correct Answers: " << mStr1 << " " << mStr2 << " " << mStr3 << " " << mStr4 << " " << mStr5 << " " << mStr6 << " " << mStr7 << " " << mStr8 << " " << mStr9 << " " << mStr10 << endl << endl;

								



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
								/*
								for (unsigned int i = 1; i < 2; ++i)
								{

									hStr1 = genRandom3();
									hStr2 = genRandom3();
									hStr3 = genRandom3();
									hStr4 = genRandom3();
									hStr5 = genRandom3();
									hStr6 = genRandom3();
									hStr7 = genRandom3();
									hStr8 = genRandom3();
									hStr9 = genRandom3();
									hStr10 = genRandom3();
								}


								*/
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
								/*
								cout << "Choice 1: ";
								cin >> gc1;
								cout << "Choice 2: ";
								cin >> gc2;
								cout << "Choice 3: ";
								cin >> gc3;
								cout << "Choice 4: ";
								cin >> gc4;
								cout << "Choice 5: ";
								cin >> gc5;
								cout << "Choice 6: ";
								cin >> gc6;
								cout << "Choice 7: ";
								cin >> gc7;
								cout << "Choice 8: ";
								cin >> gc8;
								cout << "Choice 9: ";
								cin >> gc9;
								cout << "Choice 10: ";
								cin >> gc10;
								*/

								/*transform(gc1.begin(), gc1.end(), gc1.begin(), ::toupper);
								transform(gc2.begin(), gc2.end(), gc2.begin(), ::toupper);
								transform(gc3.begin(), gc3.end(), gc3.begin(), ::toupper);
								transform(gc4.begin(), gc4.end(), gc4.begin(), ::toupper);
								transform(gc5.begin(), gc5.end(), gc5.begin(), ::toupper);
								transform(gc6.begin(), gc6.end(), gc6.begin(), ::toupper);
								transform(gc7.begin(), gc7.end(), gc7.begin(), ::toupper);
								transform(gc8.begin(), gc8.end(), gc8.begin(), ::toupper);
								transform(gc9.begin(), gc8.end(), gc9.begin(), ::toupper);
								transform(gc10.begin(), gc10.end(), gc10.begin(), ::toupper);*/

								//calculate score

								for (int i = 1; i < SIZE; i++)
								{
									if (game[i].gc2h == randomgen[i].hString)
									{
										score.g2h++;
									}
								}
								/*
								if (gc1 == hStr1)
								{
									hscore++;
								}

								if (gc2 == hStr2)
								{
									hscore++;
								}

								if (gc3 == hStr3)
								{
									hscore++;
								}

								if (gc4 == hStr4)
								{
									hscore++;
								}

								if (gc5 == hStr5)
								{
									hscore++;
								}

								if (gc6 == hStr6)
								{
									hscore++;
								}

								if (gc7 == hStr7)
								{
									hscore++;
								}

								if (gc8 == hStr8)
								{
									hscore++;
								}

								if (gc9 == hStr9)
								{
									hscore++;
								}

								if (gc10 == hStr10)
								{
									hscore++;
								}
								*/
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
								
								//cout << "Your Answers: " << gc1 << " " << gc2 << " " << gc3 << " " << gc4 << " " << gc5 << " " << gc6 << " " << gc7 << " " << gc8 << " " << gc9 << " " << gc10 << endl;
								//cout << "Correct Answers: " << hStr1 << " " << hStr2 << " " << hStr3 << " " << hStr4 << " " << hStr5 << " " << hStr6 << " " << hStr7 << " " << hStr8 << " " << hStr9 << " " << hStr10 << endl << endl;





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


