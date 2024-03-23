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
};