# Grab all the coins and use flags to build traps behind
# you to deal with those ogres.
while True:
    flag = hero.findFlag()
    item = hero.findNearestItem()
    if flag:
        hero.buildXY("fire-trap", flag.pos.x, flag.pos.y)
        hero.pickUpFlag(flag)
    elif item:
        hero.moveXY(item.pos.x, item.pos.y)
