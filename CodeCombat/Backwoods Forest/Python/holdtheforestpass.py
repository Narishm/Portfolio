# Use flags to join the battle or retreat.
# If you fail, press Submit again for new random enemies and try again!
# You'll want at least 300 health, if not more.
while True:
    enemy = hero.findNearestEnemy()
    flag = hero.findFlag()
    if flag:
        # Pick up the flag.
        hero.moveXY(flag.pos.x, flag.pos.y)
    elif enemy:
        # Fight!
        distance = hero.distanceTo(enemy)
        if distance < 10 and hero.isReady("cleave"):
            hero.cleave(enemy)
        elif hero.isReady("chain-lightning"):
            hero.cast("chain-lightning", enemy)
        else:
            hero.attack(enemy)
