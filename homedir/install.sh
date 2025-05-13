#!/bin/bash

set -e

SOURCE_DIR="$(pwd)"
TARGET_DIR="$HOME"
BACKUP_DIR="$HOME/Desktop/dotfile_backups"

mkdir -p "$BACKUP_DIR"

# Get timestamp in format YYYYMMDD_HHMMSS
TIMESTAMP="$(date +%Y%m%d_%H%M%S)"

shopt -s dotglob
for SRC in "$SOURCE_DIR"/.*; do
    FILENAME="$(basename "$SRC")"

    # Skip special dirs
    [[ "$FILENAME" == "." || "$FILENAME" == ".." ]] && continue

    DST="$TARGET_DIR/$FILENAME"

    if [ -e "$DST" ]; then
        read -p "File $DST exists. Overwrite? (y/n): " CONFIRM
        if [[ ! "$CONFIRM" =~ ^[Yy]$ ]]; then
            echo "Skipping $FILENAME"
            continue
        fi
        BACKUP="$BACKUP_DIR/${FILENAME}_backup_$TIMESTAMP"
        cp -r "$DST" "$BACKUP"
        echo "Backed up $DST to $BACKUP"
    fi

    cp -r "$SRC" "$DST"
    echo "Installed $FILENAME"
done

echo "Done."
