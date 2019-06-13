while True:
    # Check the distance to the nearest enemy.
    nearestEnemy = hero.findNearestEnemy()
    distance = hero.distanceTo(nearestEnemy)
    # If it comes closer than 10 meters, cleave it!
    if distance < 10:
        if hero.isReady("cleave"):
            hero.cleave(nearestEnemy)
    # Else, attack the "Chest" by name.
    else:
        hero.attack("Chest")
