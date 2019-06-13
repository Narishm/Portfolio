# You need to collect several items.
# But, the burl wants the gems!
# Pick up all appearing items EXCEPT gems.
while True:
    item = hero.findNearestItem()
    if item and item.type != "gem":
        # If item.type isn't equal to "gem":
        # Move to the item's position.
        hero.moveXY(item.pos.x, item.pos.y)
