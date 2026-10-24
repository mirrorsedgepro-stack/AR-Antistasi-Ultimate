# Antistasi-Reforger

A from-scratch Arma Reforger (Enforce Script) rewrite of [Antistasi Ultimate](https://github.com/Antistasi-Ultimate-Community/A3-Antistasi-Ultimate) (MIT).
Spec source: `~/src/A3-Antistasi-Ultimate` (read-only clone). Its `A3A/addons/garage` and `Tools/StreetArtist` are
APL-ND (no derivatives, Arma 3 only): don't port them, design our own.
Plan and milestones: `~/.claude/plans/serialized-dazzling-shell.md`. Server: `~/ReforgerAS`.

Freedom Fighters (Workshop `CAFEBEEFF0CACC1A`) is design inspiration only: its licence forbids reuse in other mods,
so no FF file, string or asset goes in this repo.

## First-time setup (Windows, Arma Reforger Tools)
1. Clone this repo on the Windows PC.
2. Workbench → Create New Project → name `AntistasiReforger`, directory = this repo. That writes `addon.gproj`
   with its GUID and the ArmaReforger dependency; commit it.
3. Open the Script Editor and compile (F7). `Scripts/Game/AS/AS_Boot.c` must compile clean.
4. Publish → Workshop, visibility **Unlisted**. Note the mod ID and add it to `~/ReforgerAS/config/server.json` `mods[]`.

## Smoke test
The server log (`~/ReforgerAS/profiles/logs/*/console.log`) should print `[AS] Antistasi-Reforger loaded`
once the scenario starts.
