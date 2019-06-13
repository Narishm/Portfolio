# Get all swords and protect the village.
def onSpawn (event):
    while True:
        item = hero.findNearestItem()
        #  The pet should fetch the item if it exists:
        if item:
            pet.fetch(item)
# Assign onSpawn function for the pet's "spawn".
pet.on("spawn", onSpawn)
while True:
    # Guard the left passage:
    enemy = hero.findNearestEnemy()
    if enemy:
        distance = hero.distanceTo(enemy)
        if distance < 10:
            hero.attack(enemy)
        else:
            hero.moveXY(22, 34)
