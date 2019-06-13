# Generators spawn enemies over time.
# Skeletons are afraid of lightstones.
player = game.spawnPlayerXY("champion", 15, 35)
player.attackDamage = 60
player.maxSpeed = 8
game.addSurviveGoal()
game.addDefeatGoal()
game.spawnXY("x-mark-stone", 60, 35)
# Spawn a "generator"
game.spawnXY("generator", 40, 50)
# Spawn a "lightstone"
game.spawnXY("lightstone", 60, 35)
# Now beat your game!
