""" 2. Use web search to find some API to get weather data. Use that to get your region’s weather data every 30 minute.

Write a function named weather_data() and write your code inside this function. """

# api = "https://api.openweathermap.org/data/2.5/weather?q=dhaka&appid=17326554f54310537f067466f062ef2e"
import requests
import threading

city = input("city : ")
api = f"https://api.openweathermap.org/data/2.5/weather?q={city}&appid=17326554f54310537f067466f062ef2e&units=metric"


def weather_data():
    res = requests.get(api).json()
    weather = res['weather'][0]['main']
    temp = res['main']['temp']
    print(f"Weather : {weather}")
    print(f"Tempature : {temp}")
    threading.Timer(1800, weather_data).start()


weather_data()
