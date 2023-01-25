from pytube import YouTube
import os
from pathlib import Path

songfolder='Songs'
put = Path(songfolder)
if put.exists():
    pass
else:
    put.mkdir()


try:
    with open('links.txt') as songlink:
        for song in songlink:
            yt = YouTube(song)
            video = yt.streams.filter(only_audio=True).first()
            destination = songfolder
            out_file = video.download(output_path=destination)
            base, ext = os.path.splitext(out_file)
            new_file = base + '.mp3'
            os.rename(out_file, new_file)
            print(yt.title + " has been successfully downloaded.")
except ConnectionError:
    print('Please check your internet connection and run the program again.')
