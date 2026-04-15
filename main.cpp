
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N; // the number of students;
	int M; // the number of scores;

	cout << "Enter the number of students: " ;
	cin >> N;
	cout << "Enter the number of scores for each student: " ;
	cin >> M;

	// TODO: declare variables for student name, score, sum, average
	string name;
	double score, sum, average;

	for(int i=0; i<N; i++)
	{
		// TODO: read student name and initialize sum
		cout << "Enter the name of student " << i+1 << ": ";
		cin >> name;
		sum = 0;

		for (int j=0; j<M; j++)
		{
			// TODO: read each score and accumulate sum
			cout << "Enter score " << j+1 << " for " << name << ": ";
			cin >> score;
			sum += score;
		}

		// TODO: calculate average and print name, sum, average
		average = sum / M;
		cout << name << " " << sum << " " << average << endl;
	}

	return 0;
}
