# Create your own game!
game.spawnMaze("forest", 21)
# Spawn a player with spawnPlayerXY(type, x, y)
player = game.spawnPlayerXY("captain", 12, 58)
# Player Attributes
player.maxHealth = 100
player.attackDamage = 15
player.maxSpeed = 20
# Add at least one goal!
game.addCollectGoal()
game.addDefeatGoal()
game.addMoveGoalXY(60, 12)
game.addMoveGoalXY(44, 27)
game.addMoveGoalXY(12, 44)
#  Add Ui
ui.track(game, "time")
ui.setText("directions", "Collect all the Gems.")
ui.setText("directions", "Defeat all the Ogres.")
ui.setText("directions", "Move to all the red Xs.")
ui.setText("directions", "The player must survive.")
# Spawn objects into the game with spawnXY(type, x, y)
# Items
game.spawnXY("gem", 60, 27)
game.spawnXY("gem", 28, 27)
game.spawnXY("gem", 60, 59)
game.spawnXY("gem", 28, 44)
game.spawnXY("gem", 28, 59)
game.spawnXY("gem", 12, 12)
game.spawnXY("gem", 44, 12)
# Enemies
game.spawnXY("munchkin", 12, 27)
game.spawnXY("munchkin", 28, 11)
game.spawnXY("munchkin", 44, 58)
game.spawnXY("munchkin", 44, 44)
game.spawnXY("thrower", 60, 43)
