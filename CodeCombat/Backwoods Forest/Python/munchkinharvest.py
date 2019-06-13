# Cleave the munchkins to survive!
# Make sure you have enough armor.
while True:
    enemy = hero.findNearestEnemy()
    friend = hero.findFriends()
    if enemy:
        if hero.isReady("cleave"):
            hero.cleave(enemy)
        else:
            if friend[0]:
                hero.attack(enemy)
            else:
                hero.shield()
