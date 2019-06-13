# You can use flags to choose different tactics.
# In this level, the green flag will mean you want to move to the flag.
# The black flag means you want to cleave at the flag.
# The doctor will heal you at the Red X
while True:
    green = hero.findFlag("green")
    black = hero.findFlag("black")
    enemy = hero.findNearestEnemy()
    if green:
        hero.pickUpFlag(green)
    elif black and hero.isReady("cleave"):
        hero.pickUpFlag(black)
        # Cleave!
        hero.cleave()
    elif enemy and hero.distanceTo(enemy) < 10:
        # Attack!
        hero.attack(enemy)
