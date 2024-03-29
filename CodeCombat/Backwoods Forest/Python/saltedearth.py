# Ogres are attacking a nearby settlement!
# Be careful, though, for the ogres have sown the ground with poison.
# Gather coins and defeat the ogres, but avoid the burls and poison!
while True:
    enemy = hero.findNearestEnemy()
    if enemy.type == "munchkin" or enemy.type == "thrower":
        hero.attack(enemy)
    item = hero.findNearestItem()
    # Check the item type to make sure the hero doesn't pick up poison!
    # If the item's type is "gem" or "coin":
    if item.type == "gem" or item.type == "coin":
        # Then move and pick it up:
        itemPosition = item.pos
        itemX = itemPosition.x
        itemY = itemPosition.y
        hero.moveXY(itemX, itemY)
