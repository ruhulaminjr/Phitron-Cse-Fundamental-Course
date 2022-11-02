import requests

url = 'https://jsonplaceholder.typicode.com/posts'


class Data:
    allData = []

    def __init__(self, userId, Id, Title, Body):
        self.userId = userId
        self.Id = Id
        self.Title = Title
        self.Body = Body
        Data.allData.append(self)

    @staticmethod
    def getJsonData():
        response = requests.get(url)
        resJson = response.json()
        for post in resJson:
            Data(post['userId'], post['id'], post['title'], post['body'])

    def __repr__(self):
        return f"Id: {self.Id} | Title: {self.Title}\n"


Data.getJsonData()

print(Data.allData)


































































