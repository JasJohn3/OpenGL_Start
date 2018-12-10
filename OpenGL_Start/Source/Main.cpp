#include <iostream>
#include <string>
#include <fstream>
#include <GLFW/glfw3.h>
using namespace std;


int main(void)
{
	GLFWwindow* window;

	/* Initialize the library */
	if (!glfwInit())
		return -1;

	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);

	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);
		glBegin(GL_TRIANGLES);
		glVertex2f(-0.5f, -0.5f);
		glVertex2f(0.0f, 0.5f);
		glVertex2f(0.5f, -0.5f);
		glEnd();


		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}
/*
	ofstream createCharacter("characters.txt");
	if (createCharacter.is_open())
	{
		cout << "The File Characters.txt is open" << endl;
	}
	else
	{
		cout << "The file Characters.txt is not Open" << endl;
	}
	int loop = 1;
	int userid = 1;
	string username;
	string classname;
	string racename;
	int attack;
	int magic;
	int armour;

	while (loop!=0)
	{
		cout << "Welcome Please Enter your Desired User Name!" << endl;
		cin>>username;
		cout << "Please Select a Class: DeathKnight, Paladin, Mage" << endl;
		cin >> classname;
		cout << "Please Select a race: Human, Elf, Undead" << endl;
		cin >> racename;
		cout << "Please select a starting attack level" << endl;
		cin >> attack;
		cout << "Please Select a starting magic level" << endl;
		cin >> magic;
		cout << "Please Select a starting Armour Level" << endl;
		cin >> armour;

		createCharacter <<"UserID: "<< userid <<" " << "User Name: " << username << endl;
		createCharacter << "Character Class: " << classname << " " << "Character Race: " << racename << endl;
		createCharacter << "Character Attack: " << attack << " " << "Character Magic: " << magic << " " << "Character Armour: " << armour << endl;

		userid++;
		cout << "Would you like to create another character? 1.) Yes 0.) for No" << endl;
		cin >> loop;

	}
	createCharacter.close();
*/