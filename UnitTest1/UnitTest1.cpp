#include "pch.h"
#include "CppUnitTest.h"

extern "C"  char* RockPaperScissor(char* user_choice1, char* user_choice2);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(InvalidInput1)
		{
			char Expected_result[] = {"invalid"}; // if the player one enters a wrong input
			char* return_value = RockPaperScissor("rock", "Paper");
			Assert::AreEqual(strcmp(return_value, Expected_result),0);


		}
		TEST_METHOD(InvalidInput2)
		{
			char Expected_result[] = { "invalid" }; // if player  two enter a wrong input
			char* return_value = RockPaperScissor("Rock", "paper");
			Assert::AreEqual(strcmp(return_value, Expected_result), 0);


		} 
		// three condition where player 1 wins
		TEST_METHOD(player1Winsrock)
		{
			char Expected_result[] = { "player1" };
			char* return_value = RockPaperScissor("Rock", "Scissor");
			Assert::AreEqual(strcmp(return_value, Expected_result), 0);


		}
		TEST_METHOD(player1WinsPaper)
		{
			char Expected_result[] = { "player1" };
			char* return_value = RockPaperScissor("Paper", "Rock");
			Assert::AreEqual(strcmp(return_value, Expected_result), 0);


		}
		TEST_METHOD(player1WinsScissor)
		{
			char Expected_result[] = { "player1" };
			char* return_value = RockPaperScissor("Scissor", "Paper");
			Assert::AreEqual(strcmp(return_value, Expected_result), 0);


		}
		// three condition where player 2 win
		TEST_METHOD(player2WinsRock)
		{
			char Expected_result[] = { "player2" };
			char* return_value = RockPaperScissor("Rock","Scissor");
			Assert::AreEqual(strcmp(return_value, Expected_result), 0);


		}
		TEST_METHOD(player2WinsPaper)
		{
			char Expected_result[] = { "player2" };
			char* return_value= RockPaperScissor("Paper", "Rock");
			Assert::AreEqual(strcmp(return_value, Expected_result), 0);


		}
		TEST_METHOD(player2WinsScissor)
		{
			char Expected_result[] = { "player2" };
			char* return_value = RockPaperScissor("Scissor", "Paper");
			Assert::AreEqual(strcmp(return_value, Expected_result), 0);


		}
		//three condition where it becomes 
		TEST_METHOD(DrawRock)
		{
			char Expected_result[] = { "draw" };
			char* return_value = RockPaperScissor("Rock", "Rock");
			Assert::AreEqual(strcmp(return_value, Expected_result), 0);


		}
		TEST_METHOD(DrawPaper)
		{
			char Expected_result[] = { "draw" };
			char* return_value = RockPaperScissor("Paper", "Paper");
			Assert::AreEqual(strcmp(return_value, Expected_result), 0);


		}
		TEST_METHOD(DrawScissor)
		{
			char Expected_result[] = { "draw" };
			char* return_value = RockPaperScissor("Scissor", "Scissor");
			Assert::AreEqual(strcmp(return_value, Expected_result), 0);


		}
	};
}
