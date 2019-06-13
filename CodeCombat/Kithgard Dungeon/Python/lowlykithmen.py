# Create a second variable and attack it!
hero.moveDown()
hero.moveRight(2)
while True:
    enemy = hero.findNearestEnemy()
    hero.attack(enemy)
