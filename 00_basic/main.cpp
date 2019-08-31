#include <iostream>
using namespace std;

int addNumbers(int x, int y){
	int answer = x + y;
	return answer;
}

void playAdd(){
    int a,b;
    cin >> a >> b;  // a and b would be separated by place
    cout << addNumbers(a, b) << ", Hello world!" << endl;
}

void playString(){
    string h = "hello world";

    cout << h[0] << endl;
    cout << h.substr(1, 10) << endl; // from 1 take 10
    cout << "length: " << h.length() << endl;
    cout << "find ll: " << h.find("ll") << endl; // give the index
    cout << "find ll after 3: " << h.find("ll", 3) << endl; // give the index after 3
    cout << "find last o: " << h.rfind("o") << endl; // give the index after 3
    cout << "find abc: " << h.find("abc") << endl; // give the index
}

void playFunction(){
	int a, b;
	cin >> a;
	cin >> b;
	a += 1;
	b++;
    cout << addNumbers(a, b) << ", Hello world!" << endl;
}

void playIo(){
    cout << true << "\n"; //this print 1
}

class Book {
    private:
         string author;
        int pages;

    public:
        string title;

        Book(string name){
            title = name;
            cout << "a new book generated" << endl;
        }

        ~Book(){
            cout << "book(" << title << ") return" << endl;
        }

        void setAuthor(string name){
            author = name;
        }

        string getAuthor(){
            return author;
        }

};

class GoldBook : public Book{
    private:
        double price;

    public:
        void setPrice(double aPrice){
            price = aPrice;
        }

       double getPrice(){
            return price;
        }

};

void playBook() {
    Book book1("Harry Potter II");
    book1.title = "Harry Potter I";
    cout << book1.title << endl;


}

int main(){
    playAdd();
    return 0;
}

