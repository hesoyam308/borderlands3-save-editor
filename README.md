Borderlands 3 Savegame Editor
=============================

![screenshot](/doc/screenshot.png)


### Probably won't get updated anymore, I've played through the game. Though this should at least help others solve the same game-breaking bugs I had to get past.

Work in progress, whenever I encounter a game-breaking bug and need to get past
it. Because they don't provide a console in game.

If you want a more complete, better written and more tested editor and you are
okay with using a command line, try
https://github.com/apocalyptech/bl3-cli-saveedit instead. Almost everything
here is just based on his discoveries anyways.


## Windows builds

Download the zip from here:

https://ci.appveyor.com/project/sandsmark/borderlands3-save-editor/build/artifacts

NB: I don't run windows nor do I have a windows machine to test on, but when I
set up appveyor I tested it in Wine (on Linux) and it worked.


## Functionality

I. e. what it can edit. And will probably break.

 - Basics (name, level, experience points)
 - Mission objectives progress (so you can bypass bugs making the main story line not progress).
 - Edit items/weapons in the inventory, also tries to validate your changes (can't create new from scratch yet though)
 - Amount of ammo, SDUs, eridium and money
 - View active missions and progress (have everything for editing, but can't be bothered to do the last 5% of the work)
 - UUID (not very interesting, but we can generate valid ones)
 - Save slot ID (not very interesting either)


## Credits

Thanks to https://github.com/apocalyptech and https://github.com/gibbed for the
protobufs, the obfuscation methods, data, etc.

If you want to pay someone for this Gibbed would probably appreciate it:
https://www.patreon.com/gibbed

# Some more screenshots
![screenshot](/doc/screenshot-inventory.png)
![screenshot](/doc/screenshot-consumables.png)
![screenshot](/doc/screenshot-missions.png)
