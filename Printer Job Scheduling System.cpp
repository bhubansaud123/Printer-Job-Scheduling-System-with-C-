
#include <iostream>
#include <queue>
using namespace std;

class PrintJob {
public: 
    string document;
    PrintJob(string d) : document(d) {}
};

class Printer {
    queue<PrintJob> jobs;

public:
    void addJob(string doc) {
        jobs.push(PrintJob(doc));
    }

    void print() {
        if (!jobs.empty()) {
            cout << "Printing: " << jobs.front().document << endl;
            jobs.pop();
        } else {
            cout << "No print jobs\n";
        }
    }
};

int main() {
    Printer p;  
    p.addJob("Resume.pdf");
    p.addJob("Report.docx");

    p.print();
    p.print();
    return 0;
}

