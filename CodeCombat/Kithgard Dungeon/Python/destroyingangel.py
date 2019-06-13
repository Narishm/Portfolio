hero.moveDown()
hero.moveRight()
# Mama always said to eat random mushrooms you find in dungeons.
hero.moveDown()
hero.moveUp()
hero.moveLeft()
hero.moveDown(2)
# Find your way to the Dungeon Keeper.
hero.moveRight(4)
hero.moveUp()
hero.moveLeft()
hero.moveUp(2)
hero.moveRight()
hero.moveDown()
while True:
    enemy = hero.findNearestEnemy()
    if enemy:
        hero.attack(enemy)
        pass
