# Survive the waves of ogres.
# If you win, the level gets harder, and gives more rewards.
# If you lose, you must wait a day to re-submit.
# Each time you submit gives a new random seed.
while True:
    item = hero.findNearestItem()
    if item:
        pet.fetch(item)
    enemy = hero.findNearestEnemy()
    if enemy:
        if hero.isReady("cleave"):
            hero.cleave(enemy)
        else:
            hero.attack(enemy)
