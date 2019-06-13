# Stay alive for one minute.
# If you win, it gets harder (and more rewarding).
# If you lose, you must wait a day before you can resubmit.
# Remember, each submission gets a new random seed.
def attackEnemy(enemy):
    distance = hero.distanceTo(enemy)
    if hero.isReady("cleave") and distance < 5:
        hero.cleave(enemy)
    elif hero.isReady("chain-lightning"):
        hero.cast("chain-lightning", enemy)
    else:
        if hero.health < 500:
            hero.shield()
        else:
            hero.attack(enemy)
while True:
    item = hero.findNearestItem()
    if item:
        pet.fetch(item)
    fangrider = hero.findByType("fangrider")
    if fangrider[0] and hero.isReady("chain-lightning"):
        hero.cast("chain-lightning", fangrider[0])
    shaman = hero.findByType("shaman")
    if shaman[0]:
        attackEnemy(shaman[0])
    thrower = hero.findByType("thrower")
    if thrower[0]:
        attackEnemy(thrower[0])
    nearest = hero.findNearestEnemy()
    if nearest:
        attackEnemy(nearest)
