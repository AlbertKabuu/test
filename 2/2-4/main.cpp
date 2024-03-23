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
};