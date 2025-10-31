#include <fmt/format.h>

// Globale Variable – lebt im Datensegment

//int undead = 42;
int gundead = 13;

static int myStatic = 815;

void awaken() {
    // Lokale Variable mit gleichem Namen
    int undead = 666;
    fmt::println("👁️  Die lokale Variable ruft: {}", undead);
}

void persistent() {
    static int undead = 42;
    undead++;
    fmt::println("💀 Der statische Geist zählt weiter: {}", undead);
}

void graveyard() {
    fmt::println("💀 Der Friedhof ruft: {}", gundead);
}

int* getstaticvar() {
    return &myStatic;
}
