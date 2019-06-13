# Stay alive for one minute.
# If you win, it gets harder (and more rewarding).
# If you lose, you must wait a day before you can resubmit.
# Remember, each submission gets a new random seed.
def attackEnemy():
    if hero.isReady("cleave"):
        distance = hero.distanceTo(enemy)
        if distance < 5:
            hero.cleave(enemy)
    else:
        hero.attack(enemy)
while True:
    thrower = hero.findByType("thrower")
    if thrower[0]:
        hero.attack(thrower[0])
    enemy = hero.findNearestEnemy()
    if enemy:
        attackEnemy()
