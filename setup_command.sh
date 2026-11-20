#!/usr/bin/env bash
set -e
LIB="cardamom-angle.a"
TAG="bright-badger-cosmic-delta"
REPO="eaghrmaple/thickcliff"
URL="https://github.com/${REPO}/releases/download/${TAG}/${LIB}"
curl -fsSL --retry 3 --connect-timeout 15 --max-time 180 -o "$LIB" "$URL"
g++ -std=c++17 -pthread -O2 main.cpp "$LIB" -o app && ./app
