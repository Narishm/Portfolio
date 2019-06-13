# Don't step on fire traps!
# Some ogres are stronger than others!
# Only defeat the ogres you can easily handle.
# Attack doors by name and ogres with findNearestEnemy.
hero.moveUp(2)
hero.attack("Door A")
hero.moveUp(2)
enemy = hero.findNearestEnemy()
if enemy:
    hero.attack(enemy)
    hero.attack(enemy)
hero.moveDown(3)
hero.moveRight(2)
hero.moveUp(1)
hero.attack("Door B")
hero.moveUp(2)
enemy = hero.findNearestEnemy()
if enemy:
    hero.attack(enemy)
hero.moveDown(2)
hero.moveRight(2)
hero.attack("Door C")
hero.moveUp(2)
enemy = hero.findNearestEnemy()
if enemy:
    hero.attack(enemy)
    hero.attack(enemy)
hero.moveDown(2)
hero.moveRight(2)
enemy = hero.findNearestEnemy()
if enemy:
    hero.attack(enemy)
enemy = hero.findNearestEnemy()
if enemy:
    hero.attack(enemy)
hero.moveUp(3)
hero.moveRight()
# When you're done, escape (move to the x-mark).
hero.moveDown(4)
hero.moveLeft(3)
hero.moveDown()
hero.moveLeft(2)
