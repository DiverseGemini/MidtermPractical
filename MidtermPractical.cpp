// MidtermPractical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{

	while (true)
	{
		std::cout << "Please answer these following questions" << std::endl;
		
		//std::cout << "How many are correct: \n \n" << std::endl;
	
		std::cout << "1.Question(1)\n 2.Question(2) \n 3.Question(3) \n 4.Question(4)\n ";
		std::cout << "\n please choose number: ";


		int input;
		std::cin >> input;


		switch (input)
		{
		case 1:
			system("CLS");
			
			std::cout << "\n Question 1 \n ";
			std::cout << "What is 10 * 10 = \n";

			std::cout << " 1. 9\n 2. 100\n 3. 20\n 4. 10\n";


				int FstQ;
				int choose;
				std::cin >> FstQ;

			if (FstQ == 2)
			{
				std::cout << "Correct\n";
			}
			else if (FstQ != 2)
			{
				std::cout << "Wrong anwser\n";
			}
			
			

			break;

		case 2:

			system("cls");


			std::cout << "\n Question 2 \n ";
			std::cout << "What is square root of 144  = \n";

			std::cout << " 1. 12\n 2. 14\n 3. 36\n 4. 1\n";


			int SndQ;
			
			std::cin >> SndQ;

			if (SndQ == 1)
			{
				std::cout << "Correct\n";
			}
			else if (SndQ != 1)
			{
				std::cout << "Wrong anwser\n";
			}


			break;

		case 3:

			system("cls");

			std::cout << "\n Question 3 \n ";
			std::cout << "What does C.O.D stand for?\n";

			std::cout << " 1.Cool old Dude\n 2.Cooking outragous Donuts\n 3. Cat or Dog\n 4.Call Of Duty\n";


			int ThrdQ;

			std::cin >> ThrdQ;

			if (ThrdQ == 4)
			{
				std::cout << "Correct\n";
			}
			else if (ThrdQ != 4)
			{
				std::cout << "Wrong anwser\n";
			}

			break;

		case 4:

			system("cls");

			std::cout << "\n Question 4 \n ";
			std::cout << "What is Full Sail's, main Color? \n";

			std::cout << " 1. Green\n 2.Orange\n 3.Blue\n 4.Pink\n";


			int FourthQ;

			std::cin >> FourthQ;

			if (FourthQ == 2)
			{
				std::cout << "Correct\n";
			}
			else if (FourthQ != 2)
			{
				std::cout << "Wrong anwser\n";
			}
			break;

		
			
		default:
			system("cls");
			std::cout << "Please input a PROPER NUMBER.\n";
			break;
		}

	}
}



