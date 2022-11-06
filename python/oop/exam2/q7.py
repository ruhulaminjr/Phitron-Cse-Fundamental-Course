
class Book:

    def __init__(self):
        self.content = []
        self.count = 0
        with open('file.txt', 'r') as file:
            newtxt = file.read().replace("\n", "--")
            self.content = newtxt.split("--")
            file.close()

    def readBook(self, ans="default", page="skip"):

        if(self.count >= len(self.content)-1):
            print("Book Content Finieshed")
        else:
            if ans == "":
                if page != 'skip':
                    if(page+self.count < len(self.content) and page+self.count >= 0):
                        self.count += page
                    else:
                        print("Invalid Page Number ")
                else:
                    self.count += 1
            print(self.content[self.count])


book1 = Book()
book1.readBook()
while(True):
    num = input("Enter Page Number to read : ") or 'empt'
    if(num == 'empt'):
        ans = input("[enter - read more, press q to quit] : ")
        if ans == "q":
            break
        else:
            book1.readBook(ans)
    else:
        book1.readBook("", int(num))
