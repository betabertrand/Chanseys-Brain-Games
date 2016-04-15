/*Chansey Memory Game algorithm
Bertrand Saint - Preux
March 9, 2016
This is a memory game that will display a text and prompt you to input what was displayed.
*/


//Video Game Project

//maze game/ tv show guessing character

//chansey mini game


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

static const char UDLR[] = "UDLR";
static const char allnumb[] = "1234567890";
static const char allchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
static const char SLR[] = "SLR";

int stringLength = sizeof(UDLR) - 1;
int stringLength1 = sizeof(allnumb) - 1;
int stringLength2 = sizeof(allchar) - 1;
int stringLength3 = sizeof(SLR) - 1;

char genRandom1()
{
	return UDLR[rand() % stringLength];

}

char genRandom2()
{
	return allnumb[rand() % stringLength1];
}

char genRandom3()
{
	return allchar[rand() % stringLength2];
}

char genRandom4()
{
	return SLR[rand() % stringLength3];
}


using std::chrono::milliseconds;

void delayed_out(const std::string& message,
	milliseconds letter_delay = milliseconds(300),
	milliseconds disappearance_delay = milliseconds(10000))
{
	const std::size_t msgLen = message.length();
	const std::string erasure_string = std::string(msgLen, '\b') +
		std::string(msgLen, ' ') + std::string(msgLen, '\b');

	std::size_t msgIdx = 0;

	while (msgIdx != msgLen)
	{
		std::cout << message[msgIdx++];
		std::this_thread::sleep_for(letter_delay);
	}

	std::this_thread::sleep_for(disappearance_delay);
	std::cout << erasure_string;

}

void delayed_out1(const std::string& message,
	milliseconds letter_delay = milliseconds(75))
{
	const std::size_t msgLen = message.length();
	const std::string erasure_string = std::string(msgLen, '\b') +
		std::string(msgLen, ' ') + std::string(msgLen, '\b');

	std::size_t msgIdx = 0;

	while (msgIdx != msgLen)
	{
		std::cout << message[msgIdx++];
		std::this_thread::sleep_for(letter_delay);
	}
}


int main()
{

	//declare and initialize variables

	//string Str1=" ", Str2=" ", Str3=" ", Str4=" ", Str5=" ", Str6=" ", Str7=" ", Str8=" ", Str9=" ", Str10=" ";
	//for chansey game
	char menuchoice = ' ', difchoice2 = ' ', playagain= ' ';
	string gc1, gc2, gc3, gc4, gc5, gc6, gc7, gc8, gc9, gc10, ceName;
	int escore = 0, mscore = 0, hscore = 0, ehighscore = 0, mhighscore = 0, hhighscore = 0, month = 0, day = 0, year = 0;




	//do delayed output and random string generator code
	srand(time(0));

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

	std::string cmmstory;
	std::string cmmName;


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




	/*for (unsigned int i = 1; i < 2; ++i)
	{
		eStr1 += genRandom1();
		eStr2 += genRandom1();
		eStr3 += genRandom1();
		eStr4 += genRandom1();
		eStr5 += genRandom1();
		eStr6 += genRandom1();
		eStr7 += genRandom1();
		eStr8 += genRandom1();
		eStr9 += genRandom1();
		eStr10 += genRandom1();


		mStr1 += genRandom2();
		mStr2 += genRandom2();
		mStr3 += genRandom2();
		mStr4 += genRandom2();
		mStr5 += genRandom2();
		mStr6 += genRandom2();
		mStr7 += genRandom2();
		mStr8 += genRandom2();
		mStr9 += genRandom2();
		mStr10 += genRandom2();

		hStr1 += genRandom3();
		hStr2 += genRandom3();
		hStr3 += genRandom3();
		hStr4 += genRandom3();
		hStr5 += genRandom3();
		hStr6 += genRandom3();
		hStr7 += genRandom3();
		hStr8 += genRandom3();
		hStr9 += genRandom3();
		hStr10 += genRandom3();

	}*/

	//write file pointer
	ofstream outfile;

	
	/*//make highscore folder
	outfile.open("BRAIN GAME HIGHSCORES.txt", ios::app);

	outfile << "CHANSEY MEMORY GAME HIGHSCORES.\n\n";

	outfile.close();*/

	//introduce program

	//date stuff
	char date[9];
	_strdate_s(date);


	
	cout << date << endl;



	cout << "\nWELCOME TO \nCHANSEY'S BRAIN GAMES!\n\n";

	//prompt user to enter the date
	//cout << "Please Enter the date.\n\n";

	
	

	
	
	/* was going to prompt for date but then i found the way to auto generate the date
	{
		//prompt user for month
		cout << "Enter Month: ";
		cin >> month;
		cout << endl;




		if (month > 12 || month <1)
			//display invalid
			cout << "Invalid. Month must be between 1 and 12. Enter month again.\n\n";

	} while (month > 12 || month <1);

	do
	{
		//prompt user for day
		cout << "Enter Day: ";
		cin >> day;
		cout << endl;



		if (day > 31 || day < 1)
			//display invalid
			cout << "Invalid. Day must be between 1 and 31. Enter day again.\n\n";


	} while (day > 31 || day < 1);

	do
	{
		//prompt user for year
		cout << "Enter Year: ";
		cin >> year;
		cout << endl;



		if (year < 2016)
			//display invalid
			cout << "Invalid. Year must be from 2016 or above. Enter year again.\n\n";


	} while (year < 2016);
	*/

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

							std::string forfun = "It looked like it said \"its dangerous to go alone\" at the bottom of the skymap but it's to faint to be sure.";




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

								delayed_out1("And so ");
								delayed_out1(ceName);
								delayed_out1(" Your Journey Begins......");
								cout << endl << endl;

								delayed_out(cmmStr1 + " " + cmmStr2 + " " + cmmStr3 + " " + cmmStr4 + " " + cmmStr5 + " " + cmmStr6 + " " + cmmStr7 + " " + cmmStr8 + " " + cmmStr9 + " " + cmmStr10);


								cout << "SkyMap Key:   S= Straight   L= Left    R= Right\n\n";



								do
								{
									cout << "What way did the sky map tell you to go first: ";
									cin >> gc1;
									cout << endl;

									if (gc1 != "S" && gc1 != "L" && gc1 != "R")
										cout << "Invalid, the sky map only had the options Left Right and Straight.\n\n";

								} while (gc1 != "S" && gc1 != "L" && gc1 != "R");

								if (gc1 == cmmStr1)
								{
									cout << "It Looks like youre going the right way\n\n";

									do
									{
										cout << "Which way are you going to go now: ";
										cin >> gc2;
										cout << endl << endl;

										if (gc1 != "S" && gc1 != "L" && gc1 != "R")
											cout << "Invalid, the sky map only had the options Left Right and Straight.\n\n";
									} while (gc1 != "S" && gc1 != "L" && gc1 != "R");

									if (gc2 == cmmStr2)
									{
										cout << "You're doing well, you may continue.\n\n";

										do
										{
											cout << "Which way are you going to go now: ";
											cin >> gc3;
											cout << endl << endl;

											if (gc3 != "S" && gc3 != "L" && gc3 != "R")
												cout << "Invalid, the sky map only had the options Left Right and Straight.\n\n";
										} while (gc3 != "S" && gc3 != "L" && gc3 != "R");


										if (gc3 == cmmStr3)
										{
											cout << "You seem to be remebering the map, keep going before you forget.\n\n";


											do
											{
												cout << "Which way are you going to go now: ";
												cin >> gc4;
												cout << endl << endl;

												if (gc4 != "S" && gc4 != "L" && gc4 != "R")
													cout << "Invalid, the sky map only had the options Left Right and Straight.\n\n";

											} while (gc4 != "S" && gc4 != "L" && gc4 != "R");

											if (gc4 == cmmStr4)
											{
												cout << "Be glad this isnt a dead end. Youre getting closer.\n\n";

												do
												{
													cout << "Which way are you going to go now: ";
													cin >> gc5;
													cout << endl << endl;

													if (gc5 != "S" && gc5 != "L" && gc5 != "R")
														cout << "Invalid, the sky map only had the options Left Right and Straight.\n\n";
												} while (gc5 != "S" && gc5 != "L" && gc5 != "R");


												if (gc5 == cmmStr5)
												{
													cout << "Good thing you didnt choose to go the other way, it mightve led you to your doom.\n\n";

													do
													{
														cout << "Which way are you going to go now: ";
														cin >> gc6;
														cout << endl << endl;

														if (gc6 != "S" && gc6 != "L" && gc6 != "R")
															cout << "Invalid, the sky map only had the options Left Right and Straight.\n\n";
													} while (gc6 != "S" && gc6 != "L" && gc6 != "R");

													if (gc6 == cmmStr6)
													{
														cout << "It feels like youre close. KEEP GOING!!!\n\n";

														do
														{
															cout << "Which way are you going to go now: ";
															cin >> gc7;
															cout << endl << endl;

															if (gc7 != "S" && gc7 != "L" && gc7 != "R")
																cout << "Invalid, the sky map only had the options Left Right and Straight.\n\n";
														} while (gc7 != "S" && gc7 != "L" && gc7 != "R");

														if (gc7 == cmmStr7)
														{
															cout << "Many would not have made it this far, May the odds be ever in your favor.\n\n";

															do
															{
																cout << "Which way are you going to go now: ";
																cin >> gc8;
																cout << endl << endl;

																if (gc8 != "S" && gc8 != "L" && gc8 != "R")
																	cout << "Invalid, the sky map only had the options Left Right and Straight.\n\n";
															} while (gc8 != "S" && gc8 != "L" && gc8 != "R");

															if (gc8 == cmmStr8)
															{
																cout << "I hope your memory doesn't fail you now. Keep it up.\n\n";

																do
																{
																	cout << "Which way are you going to go now: ";
																	cin >> gc9;
																	cout << endl << endl;

																	if (gc9 != "S" && gc9 != "L" && gc9 != "R")
																		cout << "Invalid, the sky map only had the options Left Right and Straight.\n\n";
																} while (gc9 != "S" && gc9 != "L" && gc9 != "R");

																if (gc9 == cmmStr9)
																{



																	delayed_out1("This is the moment of truth. If you go the wrong way now, you'll be lost forever.\n\n");


																	do
																	{
																		cout << "Which way are you going to go now: ";
																		cin >> gc10;
																		cout << endl << endl;

																		if (gc10 != "S" && gc10 != "L" && gc10 != "R")
																			cout << "Invalid, the sky map only had the options Left Right and Straight.\n\n";
																	} while (gc10 != "S" && gc10 != "L" && gc10 != "R");



																	if (gc10 == cmmStr10)
																	{

																		cout << "THE MAP WORKED. YOU'RE FREE.\n\nCONGRADULATIONS!!\n\n";

																	}

																}
															}

														}

													}
												}
											}

										}

									}
								}

								if (gc1 != cmmStr1 || gc2 != cmmStr2 || gc3 != cmmStr3 || gc4 != cmmStr4 || gc5 != cmmStr5 || gc6 != cmmStr6 || gc7 != cmmStr7 || gc8 != cmmStr8 || gc9 != cmmStr9 || gc10 != cmmStr10)
								{

									delayed_out1("Game over. You Walked into a trap.\n\nI guess it is dangerous to go alone......\n\n\n");
								}

								do
								{

									cout << "Do you want to play again?\n1) Yes\t2) No\n";
									cout << "Choice: ";
									cin >> playagain;
									cout << endl << endl;

									if (playagain != '1' && playagain != '2')
										cout << "Invalid. Must Choose Yes or No.\n\n";

								} while (playagain != '1' && playagain != '2');









							} while (playagain == '1');















						}

					} while (playagain == '2');
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



										//show pattern to memorize

										delayed_out(eStr1 + " " + eStr2 + " " + eStr3 + " " + eStr4 + " " + eStr5 + " " + eStr6 + " " + eStr7 + " " + eStr8 + " " + eStr9 + " " + eStr10);


										//display answer choices
										cout << "CHOICES:\n\n U D L R\n\n";

										//prompt user to enter answers

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

										if (gc1 == eStr1)
										{
											escore++;
										}

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

										//display answer

										//display score

										if (escore == 10)
										{
											//display perfect
											cout << "PERFECT!!!!\nYOU SCORED EVERYTHING CORRECTLY\n\n";
										}

										else if (escore < 10 && escore >= 5)
										{
											//display good
											cout << "GOOD JOB. You remembered most of the Letters.\n\n";
										}

										else if (escore < 5)
										{
											//display bad
											cout << "You didn't remember most of the letters. You should Try again.\n\n";
										}

										//write highscore to file



										if (escore > ehighscore)
										{

											outfile.open("BRAIN GAME HIGHSCORES.txt", ios::app);

											ehighscore = escore;

											outfile << "CHANSEY MEMORY GAME||Diffuclty: Easy||" << "Player Name: " << ceName << "||" << "Score: " << ehighscore << "||Date: " << date << endl;

											outfile.close();
										}

										cout << "Your score: " << escore << "\tHighScore: " << ehighscore << endl;
										cout << "Your Answers: " << gc1 << " " << gc2 << " " << gc3 << " " << gc4 << " " << gc5 << " " << gc6 << " " << gc7 << " " << gc8 << " " << gc9 << " " << gc10 << endl;
										cout << "Correct Answers: " << eStr1 << " " << eStr2 << " " << eStr3 << " " << eStr4 << " " << eStr5 << " " << eStr6 << " " << eStr7 << " " << eStr8 << " " << eStr9 << " " << eStr10 << endl << endl;


										escore = 0;

										//prompt user to play again

										do
										{

											cout << "Do you want to play this Difficulty again?\n1) Yes\t2) No\n";
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




									//show pattern to memorize

									delayed_out(mStr1 + " " + mStr2 + " " + mStr3 + " " + mStr4 + " " + mStr5 + " " + mStr6 + " " + mStr7 + " " + mStr8 + " " + mStr9 + " " + mStr10);


									//display answer choices
									cout << "CHOICES:\n\n1 2 3 4 5 6 7 8 9 0 \n\n";

									//prompt user to enter answers

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

									//display answer

									//display score

									if (mscore == 10)
									{
										//display perfect
										cout << "PERFECT!!!!\nYOU SCORED EVERYTHING CORRECTLY\n\n";
									}

									else if (mscore < 10 && mscore >= 5)
									{
										//display good
										cout << "GOOD JOB. You remembered most of the Letters.\n\n";
									}

									else if (mscore < 5)
									{
										//display bad
										cout << "You didn't remember most of the letters. You should Try again.\n\n";
									}

									//write highscore to file


									if (mscore > mhighscore)
									{

										outfile.open("BRAIN GAME HIGHSCORES.txt", ios::app);

										mhighscore = mscore;

										outfile << "CHANSEY MEMORY GAME||Difficulty: Medium||" << "Player Name: " << ceName << "||" << "Score: " << mhighscore << "||Date: " << date << endl;

										outfile.close();
									}

									cout << "Your score: " << mscore << "\tHighScore: " << mhighscore << endl;
									cout << "Your Answers: " << gc1 << " " << gc2 << " " << gc3 << " " << gc4 << " " << gc5 << " " << gc6 << " " << gc7 << " " << gc8 << " " << gc9 << " " << gc10 << endl;
									cout << "Correct Answers: " << mStr1 << " " << mStr2 << " " << mStr3 << " " << mStr4 << " " << mStr5 << " " << mStr6 << " " << mStr7 << " " << mStr8 << " " << mStr9 << " " << mStr10 << endl << endl;





									mscore = 0;
									do
									{

										cout << "Do you want to play this Difficulty again?\n1) Yes\t2) No\n";
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



								//show pattern to memorize

								delayed_out(hStr1 + " " + hStr2 + " " + hStr3 + " " + hStr4 + " " + hStr5 + " " + hStr6 + " " + hStr7 + " " + hStr8 + " " + hStr9 + " " + hStr10);


								//display answer choices
								cout << "CHOICES:\n\n0 1 2 3 4 5 6 7 8 9 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z\n\n";

								//prompt user to enter answers

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

								//display answer

								//display score

								if (hscore == 10)
								{
									//display perfect
									cout << "PERFECT!!!!\nYOU SCORED EVERYTHING CORRECTLY\n\n";
								}

								else if (hscore < 10 && hscore >= 5)
								{
									//display good
									cout << "GOOD JOB. You remembered most of the Letters.\n\n";
								}

								else if (hscore < 5)
								{
									//display bad
									cout << "You didn't remember most of the letters. You should Try again.\n\n";
								}

								//write highscore to file



								if (hscore > hhighscore)
								{
									outfile.open("BRAIN GAME HIGHSCORES.txt", ios::app);

									hhighscore = hscore;

									outfile << "CHANSEY MEMORY GAME||Difficulty: Hard||" << "Player Name: " << ceName << "||" << "Score: " << hhighscore << "||Date: " << date << endl;

									outfile.close();
								}

								cout << "Your score: " << hscore << "\tHighScore: " << hhighscore << endl;
								cout << "Your Answers: " << gc1 << " " << gc2 << " " << gc3 << " " << gc4 << " " << gc5 << " " << gc6 << " " << gc7 << " " << gc8 << " " << gc9 << " " << gc10 << endl;
								cout << "Correct Answers: " << hStr1 << " " << hStr2 << " " << hStr3 << " " << hStr4 << " " << hStr5 << " " << hStr6 << " " << hStr7 << " " << hStr8 << " " << hStr9 << " " << hStr10 << endl << endl;





								hscore = 0;


								do
								{

									cout << "Do you want to play this Difficulty again?\n1) Yes\t2) No\n";
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


