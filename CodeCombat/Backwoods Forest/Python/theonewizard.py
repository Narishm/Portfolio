# Defeat as many ogres as you can.
# Use 'cast' and 'canCast' for spells.
# Some Variables
bomb = 0
position = 0
# Set Initial Hero Position
hero.moveXY(8, 30)
while True:
    if hero.health < 80:
        # Cast Regen if it is ready.
        if hero.isReady("regen"):
            hero.cast("regen", hero)
    # Check Hero Health and Bomb Status for Emergency Detonation
    if (hero.health < 30 and bomb == 0):
        hero.moveXY(5, 36)
        bomb = 1
    # Find the enemy and store it
    enemy = hero.findNearestEnemy()
    if enemy:
        # Check Distance to Enemy and store it
        distance = hero.distanceTo(enemy)
        # Always check to see if the enemy is alive. Because the game does get confused sometimes.
        if (enemy.health > 0 and distance < 15):
            # Cast Chain Lightning if Ready and Enemy Close
            if hero.isReady("chain-lightning"):
                hero.cast("chain-lightning", enemy)
            # Otherwise Attack Normally
            else:
                hero.attack(enemy)
        elif (enemy.health > 0 and enemy.type == "catapult"):
            # If the enemy is a catapult cast lightning bolt on it.
            if hero.isReady("lightning-bolt"):
                hero.cast("lightning-bolt", enemy)
        elif (enemy.health > 0 and enemy.type == "ogre"):
            # Otherwise if the enemy is an ogre
            # Juke a bit...
            hero.moveXY(4, 44)
            # Then step on the OS button.
            hero.moveXY(5, 36)
        elif (enemy.health > 0):
            # Otherwise use a normal attack.
            hero.attack(enemy)
    else:
        # Make the hero patrol up and down for safety.
        if position == 0:
            # If the last position was lower, move up.
            hero.moveXY(8, 42)
            position = 1
        else:
            # Otherwise move down.
            hero.moveXY(8, 30)
            position = 0
