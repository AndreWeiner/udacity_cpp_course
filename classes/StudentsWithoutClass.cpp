#include<iostream>
#include<string>

void sortByName(std::string *names, int *ids, int *gradYears, const int nStudents);
void sortById(std::string *names, int *ids, int *gradYears, const int nStudents);
void sortByGradYear(std::string *names, int *ids, int *gradYears, const int nStudents);

int main(){

	const int nStudents = 5;
	std::string names[nStudents] = {"Joe Line", "Bob Green",
		"Sally Anne Green", "Annie Blue", "Jose Lemon"};
	int ids[nStudents] = {15, 3, 1, 10, 25};
	int gradYears[nStudents] = {2019, 2020, 2017, 2020, 2016};
	
	sortByName(names, ids, gradYears, nStudents);
	std::cout << "------------------\n";
	sortById(names, ids, gradYears, nStudents);
	std::cout << "------------------\n";
	sortByGradYear(names, ids, gradYears, nStudents);
	
	return 0;
}

void sortByName(std::string *names, int *ids, int *gradYears, const int nStudents){
	for (int i=0; i<nStudents; ++i) {
		for (int j=0; j<(nStudents-1); ++j) {
			std::string tempName = names[j];
			int tempId = ids[j];
			int tempYear = gradYears[j];
			if (names[j].compare(names[j+1]) > 0) {
				names[j] = names[j+1];
				ids[j] = ids[j+1];
				gradYears[j] = gradYears[j+1];
				names[j+1] = tempName;
				ids[j+1] = tempId;
				gradYears[j+1] = tempYear;
			}
		}
	}
	for (int i=0; i<nStudents; ++i) {
		std::cout << names[i] << ", " << ids[i] << ", " << gradYears[i] << "\n";
	}
}
void sortById(std::string *names, int *ids, int *gradYears, const int nStudents){
	for (int i=0; i<nStudents; ++i) {
		for (int j=0; j<(nStudents-1); ++j) {
			std::string tempName = names[j];
			int tempId = ids[j];
			int tempYear = gradYears[j];
			if (ids[j] > ids[j+1]) {
				names[j] = names[j+1];
				ids[j] = ids[j+1];
				gradYears[j] = gradYears[j+1];
				names[j+1] = tempName;
				ids[j+1] = tempId;
				gradYears[j+1] = tempYear;
			}
		}
	}
	for (int i=0; i<nStudents; ++i) {
		std::cout << names[i] << ", " << ids[i] << ", " << gradYears[i] << "\n";
	}
}
void sortByGradYear(std::string *names, int *ids, int *gradYears, const int nStudents){
	for (int i=0; i<nStudents; ++i) {
		for (int j=0; j<(nStudents-1); ++j) {
			std::string tempName = names[j];
			int tempId = ids[j];
			int tempYear = gradYears[j];
			if (gradYears[j] > gradYears[j+1]) {
				names[j] = names[j+1];
				ids[j] = ids[j+1];
				gradYears[j] = gradYears[j+1];
				names[j+1] = tempName;
				ids[j+1] = tempId;
				gradYears[j+1] = tempYear;
			}
		}
	}
	for (int i=0; i<nStudents; ++i) {
		std::cout << names[i] << ", " << ids[i] << ", " << gradYears[i] << "\n";
	}
}


