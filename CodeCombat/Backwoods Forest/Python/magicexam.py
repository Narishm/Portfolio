# Try to get the best grade (gold) at the magic exam.
# Move to each X mark, then use a spell.
# Identify the Spell Needed
def spellFinder(target):
    if target.type == "soldier":
        hero.cast("heal", target)
    elif target.type == "ogre":
        hero.cast("force-bolt", target)
    elif target.type == "scout":
        hero.cast("poison-cloud", target)
    elif target.type == "goliath":
        hero.cast("grow", target)
    elif target.type == "brawler":
        hero.cast("shrink", target)
    elif target.type == "paladin":
        hero.cast("regen", target)
# Sort out the Potions
def poisonPreventer(item):
    if item and item.type == "potion":
        hero.moveXY(item.pos.x, item.pos.y)
    elif item and item.type == "poison":
        hero.cast("grow", hero)
        hero.moveXY(item.pos.x, item.pos.y)
# Figure out what action to take.
def whatToDo():
    enemy = hero.findNearestEnemy()
    friend = hero.findNearestFriend()
    item = hero.findNearestItem()
    if enemy:
        spellFinder(enemy)
    elif friend:
        spellFinder(friend)
    elif item:
        poisonPreventer(item)
# Figure out where to move to next.
def moveToNext(loc):
    if loc == 0:
        hero.moveXY(18, 40)
        return 1
    elif loc == 1:
        hero.moveXY(18, 24)
        return 2
    elif loc == 2:
        hero.moveXY(34, 40)
        return 3
    elif loc == 3:
        hero.moveXY(34, 24)
        return 4
    elif loc == 4:
        hero.moveXY(50, 40)
        return 5
    elif loc == 5:
        hero.moveXY(50, 24)
        return 6
    elif loc == 6:
        hero.moveXY(66, 40)
        return 7
    elif loc == 7:
        hero.moveXY(66, 24)
        return 8
    else:
        hero.moveXY(72, 32)
        return 9
# A Variable
lastPos = 0
# The Game Loop
while True:
    lastPos = moveToNext(lastPos)
    whatToDo()
