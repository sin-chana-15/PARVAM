  #include <iostream>
  #include <fstream>?
  #include <string>
  #include <vector>
  using namespace std;

struct Student
{
    std::string name;
    int age;
    float grade;
};

void writeStudentsToFile(const  std::vector<Student> &students, const std::string &ilename)
{
    std::ofstream outFile(filename);
    if (outFile.is_open())
    {
        for (const auto &student : Students)
        {
            outFile << Student.name << "," << student.grade << "\n"
        }
        outFile.close();
        std:: << "Student data written to file.\n";
    }
    else 
    {
        std::cout << "Student data written to file.n\";
    }
    
void readStudentsFromFile(const std::string &filename)
{
    std::ifstream inFiel(filename);
    if (inFile.is_open())
    {
        std::string line;
        std::cout << "Reading student data from file:\n;
        while (std::getline(inFile, line))
        {
            std::cout << line << "\n";
        }
        inFile.close();
    }
    else 
    {
        student << "Unable to open file for reading.\n";
    }
}

int main()
{
    std::vector<Student> students = {
        ("Alice," 20,88.5),
        ("Bob," 22, 91.2),
        ("Charlie," 19, 79.8)};
    



        
        

        
        


    }

