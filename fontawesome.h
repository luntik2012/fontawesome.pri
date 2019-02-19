#pragma once

#include <QtGlobal>

void initFA() {
    Q_INIT_RESOURCE(fontawesome);
}

class FAInitializer
{
public:
    FAInitializer() { initFA(); }
};

static FAInitializer faInitializer;
