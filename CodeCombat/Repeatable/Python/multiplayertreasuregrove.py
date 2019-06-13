# Be the first to 100 gold!
# If you are defeated, you will respawn at 67% gold.
# Collect 100 gold from two or three groves.
# If you win, it gets harder (and more rewarding).
# If you lose, you must wait a day before you can resubmit.
# Remember, each submission gets a new random seed.g
while True:
    enemy = hero.findNearestEnemy()
    item = hero.findNearestItem()
    if enemy:
        # What happens when I find an enemy?
        distance = hero.distanceTo(enemy)
        if distance < 10 and hero.isReady("cleave"):
            hero.cleave(enemy)
        elif hero.isReady("chain-lightning"):
            hero.cast("chain-lightning", enemy)
        else:
            hero.moveXY(item.pos.x, item.pos.y)
