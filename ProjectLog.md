# Project Log

Learning log for the SFML VideoJeux Arcade project, based on the course:
SFML 2 : Developper des jeux 2D avec C++.

This repository currently uses SFML 3 through `external/SFML`. Use the course as the learning path for 2D game development concepts, then adapt code examples to the SFML 3 API already used by this project.

Use the learning sessions to record what was practiced, what was implemented in this repo, and what still needs follow-up. Keep the commit log as the technical history.

## Course Reference

Course focus from the public description:

- Program games with C++ and SFML.
- Create 2D games with sprites, animation, input, events, collisions, tilemaps, sounds, dialogs, and file saves.
- Build the core mechanics found in 2D games by implementing them directly rather than relying on a full game engine.

## Log Automation

Use these helper practices to keep the learning log current:

- Add dated notes under the relevant session after each working milestone.
- Record the commit hash under **Related commits** when a session receives code changes.
- Keep the checklist focused on observable repo work, not only course watching.

Codex skill copied into this repo: `codex-skills/unreal-course-log`.

## Arcade Game Roadmap

- [ ] Tetris - Featured learning game for grid logic, tetromino rotation, line clearing, score, and level speed.
- [ ] Outrun - Pseudo 3D racing for road projection, sprite scaling, scrolling scenery, and checkpoint timing.
- [ ] Arkanoid - Paddle and brick breaker for collision response, powerups, lives, and level layout data.
- [ ] Snake - Grid movement, input buffering, growth, self-collision, and score loop.
- [ ] Minesweeper - Board generation, flood reveal, flags, timer, and safe first-click behavior.
- [ ] Tron - Light-cycle movement, trails, arena collision, and local multiplayer controls.
- [ ] Mario - Platformer movement, tile collisions, gravity, jumping, enemies, camera, and level transitions.
- [ ] Blobby Volley - Two-player volleyball physics, ball arcs, net collision, and match scoring.
- [ ] Asteroids - Vector-style movement, wrapping, shooting, asteroid splitting, and wave progression.
- [ ] Invaders - Enemy formation, projectile pools, shields, scoring, and increasing pressure.
- [ ] Pacman - Maze movement, pellet collection, ghost AI states, power pellets, and lives.
- [ ] Connect 4 - Turn-based grid placement, win detection, and simple menu flow.
- [ ] Chess - Board state, legal move generation, check/checkmate detection, and piece UI.
- [ ] Xonix - Territory capture, moving hazards, trail risk, and percentage-based level completion.
- [ ] Road Fighter - Top-down racing, traffic avoidance, road scrolling, fuel, and speed control.
- [ ] Bomberman - Grid movement, bombs, explosion propagation, destructible blocks, powerups, and multiplayer-ready rules.

## Learning Sessions

### Session 01 - Project Setup and SFML Baseline

**Status:** In progress

**Related commits**
- _None yet._

**Course focus**
Environment setup, SFML window creation, rendering loop, events, keyboard/mouse input, and basic drawing.

**Project work**
- Confirm the CMake project builds with the vendored SFML submodule.
- Keep `README.md` and `ProjectLog.md` as documentation entry points.
- Replace the starter circle demo with an arcade shell when the first game session begins.
- Decide the shared project structure for games, assets, utilities, and build targets.

**Progress checklist**
- [x] Confirm the repo has an SFML CMake baseline.
- [x] Add this project learning log.
- [ ] Confirm `external/SFML` is initialized and builds locally.
- [ ] Run the current SFML starter application.
- [ ] Create a shared arcade application shell.
- [ ] Define folders for game code and assets.

**What to learn**
- How the SFML render loop is structured.
- How SFML 3 event handling differs from SFML 2 course examples.
- How to keep reusable systems separate from individual game rules.

**Evidence to capture**
- Compiler and CMake versions used.
- SFML version or commit used from the submodule.
- First successful build/run note.

**Log notes**
- 2026-05-26 - Created the SFML VideoJeux Arcade project log and roadmap from the course description and requested game list.

**Next step**
Build the shared arcade shell and start Tetris as the featured first game.

### Session 02 - Arcade Shell and Shared Systems

**Status:** Not started

**Related commits**
- _None yet._

**Course focus**
Game window, input events, text rendering, sprites, animation timing, resource loading, and file organization.

**Project work**
- Create a main menu for selecting arcade games.
- Add a common game interface with update, render, and event hooks.
- Add shared input, timing, font, texture, and audio loading utilities.
- Add a consistent pause/restart/back-to-menu flow.

**Progress checklist**
- [ ] Create an arcade menu.
- [ ] Add a base game interface.
- [ ] Add fixed or semi-fixed update timing.
- [ ] Add shared resource loading.
- [ ] Add text/font rendering support.
- [ ] Add pause, restart, and return-to-menu behavior.
- [ ] Add basic save-file helpers for high scores.

**What to learn**
- How to structure a small SFML project without a heavy engine.
- How to avoid duplicating loop, timing, and resource code in every game.
- How to keep game-specific logic isolated.

**Problems / blockers**
- Decide whether each game is compiled into one executable or separate executables.
- Confirm asset licensing before committing images, sounds, and fonts.

**Next step**
Implement Tetris on top of the shared shell.

### Session 03 - Tetris

**Status:** Not started

**Related commits**
- _None yet._

**Course focus**
Grid-based game logic, sprite drawing, timed movement, input buffering, collision checks, score, and game-over state.

**Project work**
- Implement tetromino definitions, rotation, board collision, locking, line clearing, scoring, and level speed.
- Add preview/hold if time allows.
- Use Tetris as the reference implementation for grid games such as Snake, Minesweeper, Connect 4, Chess, Xonix, and Bomberman.

**Progress checklist**
- [ ] Create the board model.
- [ ] Define tetromino shapes and colors.
- [ ] Add movement, rotation, soft drop, and hard drop.
- [ ] Add collision and piece locking.
- [ ] Add line clear and scoring.
- [ ] Add level speed progression.
- [ ] Add game-over and restart flow.
- [ ] Add high score persistence.

**What to learn**
- How to separate board state from rendering.
- How timed game steps differ from frame rendering.
- How to test grid rules with small deterministic examples.

**Evidence to capture**
- Screenshot or note of a playable Tetris round.
- Notes on rotation rules and scoring rules chosen.

**Next step**
Use the grid foundation to build Snake or Minesweeper.

### Session 04 - Grid and Board Games

**Status:** Not started

**Related commits**
- _None yet._

**Course focus**
Input handling, events, collision on tile grids, external level or board data, and saving progress.

**Project work**
- Build Snake, Minesweeper, Connect 4, Chess, Xonix, and Bomberman using shared board utilities where useful.
- Keep each game playable before adding polish.

**Progress checklist**
- [ ] Snake playable.
- [ ] Minesweeper playable.
- [ ] Connect 4 playable.
- [ ] Chess legal move baseline.
- [ ] Xonix playable prototype.
- [ ] Bomberman playable prototype.
- [ ] Shared grid utilities documented.

**What to learn**
- Which grid rules can share code and which should remain game-specific.
- How to represent board state cleanly in C++.
- How to handle mouse and keyboard interactions in board games.

**Problems / blockers**
- Chess can grow quickly; define a minimal legal-move milestone before AI or polish.
- Bomberman needs careful timing for bombs and explosions.

**Next step**
Move from grid games into paddle, projectile, and physics-lite arcade games.

### Session 05 - Paddle, Projectile, and Arena Games

**Status:** Not started

**Related commits**
- _None yet._

**Course focus**
Sprite movement, collisions, animation, sound effects, health/lives, scoring, and enemy interactions.

**Project work**
- Build Arkanoid, Blobby Volley, Asteroids, Invaders, Tron, and Pacman.
- Add reusable collision helpers for circles, rectangles, and tile walls.
- Add simple audio feedback once the audio module is enabled.

**Progress checklist**
- [ ] Arkanoid playable.
- [ ] Blobby Volley playable.
- [ ] Asteroids playable.
- [ ] Invaders playable.
- [ ] Tron playable.
- [ ] Pacman playable prototype.
- [ ] Shared collision helpers added.
- [ ] Sound effect path defined.

**What to learn**
- How to choose collision shapes for different game mechanics.
- How to manage projectiles and enemy waves.
- How simple AI states can drive recognizable arcade behavior.

**Problems / blockers**
- Pacman ghost behavior needs scoped AI rules before implementation.
- Audio is currently disabled in `CMakeLists.txt`; enable `sfml-audio` before adding sounds.

**Next step**
Build scrolling and racing games.

### Session 06 - Racing and Scrolling Games

**Status:** Not started

**Related commits**
- _None yet._

**Course focus**
Animation, sprite scaling, tilemaps or scrolling backgrounds, input responsiveness, collisions, and level transitions.

**Project work**
- Build Outrun, Road Fighter, and Mario-style platforming.
- Add camera and scrolling helpers.
- Add tilemap loading for platformer levels.

**Progress checklist**
- [ ] Road Fighter playable.
- [ ] Outrun pseudo 3D road prototype.
- [ ] Mario-style platformer prototype.
- [ ] Camera or scrolling helper added.
- [ ] Tilemap or level loading path added.
- [ ] Level transition behavior tested.

**What to learn**
- How pseudo 3D road projection works in a 2D renderer.
- How side-scrolling platformer collision differs from simple grid collision.
- How external level data keeps maps out of C++ source files.

**Problems / blockers**
- Outrun needs a clear math prototype before art polish.
- Platformer collision should be kept simple before adding enemies and attacks.

**Next step**
Polish the arcade shell, persistence, and final presentation.

### Session 07 - Polish, Persistence, and Wrap-Up

**Status:** Not started

**Related commits**
- _None yet._

**Course focus**
Sounds, dialogs, save files, transitions between maps, practical project organization, and final development advice.

**Project work**
- Add high scores and per-game metadata.
- Add title cards, credits, and consistent UI styling.
- Add final README notes with build/run instructions and game status.
- Record technical debt and next improvements.

**Progress checklist**
- [ ] High scores saved to file.
- [ ] Game list shows completion status.
- [ ] Arcade menu polished.
- [ ] Audio enabled and tested.
- [ ] README updated.
- [ ] Final screenshots or notes captured.
- [ ] Technical debt recorded.

**What to learn**
- How to keep a multi-game arcade maintainable.
- How to preserve player progress with simple files.
- Which systems are reusable for future SFML projects.

**Final reflection**
- Most useful concept:
- Hardest concept:
- Best reusable pattern:
- Next project improvement:

## Commit Log

Concise per-commit log, oldest to newest. Generated from git history.

- _Not generated yet._
