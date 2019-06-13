# Big ogres can't see you in the forest.
# Attack only the small ogres in the forest.
# Collect coins and gems only.
# Don't leave the forest and don't eat/drink anything.
while True:
    # Find the nearest enemy.
    enemy = hero.findNearestEnemy()
    # Attack it only if its type is "thrower" or "munchkin".
    if enemy and enemy.type =="munchkin" or enemy.type =="thrower":
        hero.attack(enemy)
    # Find the nearest item.
    item = hero.findNearestItem()
    # Collect it only if its type is "gem" or "coin".
    if item and item.type == "coin" or item.type == "gem":
        hero.moveXY(item.pos.x, item.pos.y)
