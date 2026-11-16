#include <iostream>
using namespace std;
class Book{
	private :
		string booktitle;
		int bookid;
		string authorname;
		int NoOfCopies;
		int PricePerCopy;
	public :
	void setBook(string title, int id, string author, int copies, int price);
	void displayBook();
	int getCopies();
    int calculateTotalPrice(int copiesToBuy);		
};
void Book::setBook(string title, int id, string author, int copies, int price) {
    booktitle = title;
    bookid = id;
    authorname = author;
    NoOfCopies = copies;
    PricePerCopy = price;
}
void Book::displayBook() {
    cout << "Book Title     : " << booktitle << endl;
    cout << "Book ID        : " << bookid << endl;
    cout << "Author Name    : " << authorname << endl;
    cout << "Copies         : " << NoOfCopies << endl;
    cout << "Price Per Copy : " << PricePerCopy << endl;
}
int Book::getCopies() {
    return NoOfCopies;
}

int Book::calculateTotalPrice(int copiesToBuy) {
    return copiesToBuy * PricePerCopy;
}

int main() {
 
    Book b1, b2, b3;

   
    b1.setBook("C++ Primer", 101, "Stanley Lippman", 10, 1500);
    b2.setBook("Clean Code", 102, "Robert Martin", 5, 2200);
    b3.setBook("The Alchemist", 103, "Paulo Coelho", 12, 850);
    b1.displayBook();
    b2.displayBook();
    b3.displayBook();
    cout << "\nAvailable copies of Book 1: " << b1.getCopies() << endl;
    cout << "Available copies of Book 2: " << b2.getCopies() << endl;
    cout << "Available copies of Book 3: " << b3.getCopies() << endl;
    cout << "\nTotal price for 3 copies of Book 1: " << b1.calculateTotalPrice(3) << endl;
    cout << "Total price for 2 copies of Book 2: " << b2.calculateTotalPrice(2) << endl;
    cout << "Total price for 4 copies of Book 3: " << b3.calculateTotalPrice(4) << endl;

    return 0;
}
