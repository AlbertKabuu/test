class TBook {
private:
    string Name;
    string Author;
    int Count;

public:
    TBook() {
        Name = "";
        Author = "";
        Count = 0;
    }
	TBook(string newName, string newAuthor, int newCount) {
        Name = newName;
        Author = newAuthor;
        Count = newCount;
    }
	void setName(string newName) {
        Name = newName;
    }void setAuthor(string newAuthor) {
        Author = newAuthor;
    }
	void setCount(int newCount) {
        Count = newCount;
    }
	string getName() const {
        return Name;
    }
	string getAuthor() const {
        return Author;
    }int getCount() const {
        return Count;
    }
	
};

int main(){
	TBook book;
    book.setName("At the Mountains of Madness");
    book.setAuthor("H. P. Lovecraft");
    book.setCount(1);
	
	TBook book1("The Unnamable", "H. P. Lovecraft", 11);
}