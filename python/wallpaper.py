import requests
# from PyWallpaper import change_wallpaper
import os
response = requests.get(
    "https://api.nasa.gov/planetary/apod?api_key=rACCy3qeeLq2JGBmbo2QOrV01HQDMU2nvgpQ9U23")

resjson = response.json()
# print(type(resjson))
imgUrl = resjson['hdurl']
imgdata = requests.get(imgUrl)
# print(imgdata.content)
with open('wallpic.png', 'wb') as image:
    image.write(imgdata.content)

url = "file://" + os.getcwd() + "/wallpic.png"
# fullurl = "file:///home/ruhulaminjr/Desktop/Phitron/Python/nas-wallpaper/wallpic.png"
# print(url)
os.system(f'gsettings set org.gnome.desktop.background picture-uri-dark {url}')
# gsettings set org.gnome.desktop.background picture-uri "file://path_to_file"
