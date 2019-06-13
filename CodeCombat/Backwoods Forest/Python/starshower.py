# Pick up coins only if they are closer than 20m.
# Pick up all gems.
while True:
    item = hero.findNearestItem()
    distance = hero.distanceTo(item)
    # If the item's type is "gem"
    # OR the distance to the item less than 20 meters:
    if distance < 20 or item.type == "gem":
        # Move to item's position.
        hero.moveXY(item.pos.x, item.pos.y)
