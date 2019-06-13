# Collect 100 gold from two or three groves.
# If you win, it gets harder (and more rewarding).
# If you lose, you must wait a day before you can resubmit.
# Remember, each submission gets a new random seed.g
while True:
    flag = hero.findFlag()
    enemy = hero.findNearestEnemy()
    item = hero.findNearestItem()
    if flag:
        # What happens when I find a flag?
        hero.moveXY(flag.pos.x, flag.pos.y)
        hero.pickUpFlag(flag)
    elif enemy:
        # What happens when I find an enemy?
        distance = hero.distanceTo(enemy)
        if enemy and distance < 10 and hero.isReady("cleave"):
            hero.cleave(enemy)
        elif enemy and distance < 10 and hero.isReady("chain-lightning"):
            hero.cast("chain-lightning", enemy)
        else:
            hero.attack(enemy)
    elif item:
        # What happens when I find an item?
        hero.moveXY(item.pos.x, item.pos.y)
