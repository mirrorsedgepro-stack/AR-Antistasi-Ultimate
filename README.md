# Antistasi-Reforger

A from-scratch Arma Reforger (Enforce Script) rewrite of [Antistasi Ultimate](https://github.com/Antistasi-Ultimate-Community/A3-Antistasi-Ultimate) (MIT).
Spec source: `~/src/A3-Antistasi-Ultimate` (read-only clone). Its `A3A/addons/garage` and `Tools/StreetArtist` are
APL-ND (no derivatives, Arma 3 only): don't port them, design our own.
Plan and milestones: `~/.claude/plans/serialized-dazzling-shell.md`. Server: `~/ReforgerAS`.

Freedom Fighters (Workshop `CAFEBEEFF0CACC1A`) is design inspiration only: its licence forbids reuse in other mods,
so no FF file, string or asset goes in this repo.

## First-time setup (Windows, Arma Reforger Tools)
1. `git clone https://github.com/mirrorsedgepro-stack/AR-Antistasi-Ultimate`
2. Workbench launcher → **Add Existing** → pick `addon.gproj` in the clone (it is committed; don't create a new project).
3. Open the Script Editor and compile (F7). `Scripts/Game/AS/AS_Boot.c` must compile clean.
4. Publish → Workshop, visibility **Unlisted**. Note the mod ID and add it to `~/ReforgerAS/config/server.json` `mods[]`.
5. If Workbench rewrites `addon.gproj` (e.g. adds settings on save), commit and push that.

## Smoke test
The server log (`~/ReforgerAS/profiles/logs/*/console.log`) should print `[AS] Antistasi-Reforger loaded`
once the scenario starts.
