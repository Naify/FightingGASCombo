# GasTechGDTest
 
A UE 5.0 C++/Blueprint test project
GAS init was made in C++, all else in blueprints.

Tasks:
1. Make a 3rd person character controller.

2. Set up a model of the game character and animation of his movements. Put a second model on stage (it will be your opponent).

3. Set up a combo attack for the game character on pressing the LMB (combo is a sequence of 3 attack animations (A, B, C) in a row, which are triggered by the principle A -> B -> C, if you press LMB during one of these animations; if the animation ended without the player pressing LMB, the combo ends, and the next press LMB will cause the first attack A again). Any animations that are visually different from each other will do, quality stitching is not required for this task).

4. Implement animation of your opponent's hit-reaction (recoil) to blows.

5. *Optional: Put a small fence object behind your opponent's back. Opponent's recoil on the fence should destroy it (or simply remove it from the stage).

## Preview

![](https://github.com/Naify/GasTGDTest/blob/main/Img/gastest.gif)

## Made with
UE5, Blueprints, root motion, blendspace animation, animation montage, animation notifies, gas, gas abilities, gas input binding, gas events
