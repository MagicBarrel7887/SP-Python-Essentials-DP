from audioplayer import AudioPlayer


choices = {
    'trigger1': 1.25,
    'trigger2': 2.25,
    'trigger3': 1.75,
    'trigger4': 2.5,
}


# import required module

try:
    name = input("Enter trigger name ")
    print("trigger is : ",  choices[name])
    print(type(name))
    pass
except Exception as e:
    raise e


# Playback stops when the object is destroyed (GC'ed), 
# so save a reference to the object for non-blocking playback.

if choices[name] == 1.25:
  pass
elif choices[name] == 2.25 :
  pass
elif choices[name] == 1.75:
  pass
elif choices[name] == 2.5:
  pass

AudioPlayer(
    "salamisound-8992747-violent-thunder-directly-near.mp3").play(block=True)

