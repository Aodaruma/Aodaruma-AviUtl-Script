#include <lua.hpp>

struct Pixel_RGBA {
    unsigned char b;
    unsigned char g;
    unsigned char r;
    unsigned char a;
};

int make(lua_State* L) {
    Pixel_RGBA* p = reinterpret_cast<Pixel_RGBA*>(lua_touserdata(L, 1));
    int w = static_cast<int>(lua_tointeger(L, 2));
    int h = static_cast<int>(lua_tointeger(L, 3));

    for (int y = 0; y < h; y++)
    {
        for (int x = 0; x < w; x++)
        {
            int i = y * w + x;
            p[i].r = 255 * x / w;
            p[i].g = 255 * y / h;
            p[i].b = 0;
            p[i].a = 255;
        }
    }

    return 0;
}

int mapping(lua_State* L) {
    Pixel_RGBA* ref = reinterpret_cast<Pixel_RGBA*>(lua_touserdata(L, 1));
    int rw = static_cast<int>(lua_tointeger(L, 2));
    int rh = static_cast<int>(lua_tointeger(L, 3));
    Pixel_RGBA* ori = reinterpret_cast<Pixel_RGBA*>(lua_touserdata(L, 4));
    int w = static_cast<int>(lua_tointeger(L, 5));
    int h = static_cast<int>(lua_tointeger(L, 6));
    Pixel_RGBA* res = reinterpret_cast<Pixel_RGBA*>(lua_touserdata(L, 7));

    if (rw==w and rh==h)
    {
        for (int ry = 0; ry < rh; ry++)
        {
            for (int rx = 0; rx < rw; rx++)
            {
                int i = ry * rw + rx;
                int x = ref[i].r * w / 255;
                int y = ref[i].g * h / 255;
                int i2 = y * w + x;

                res[i].r = ori[i2].r;
                res[i].g = ori[i2].g;
                res[i].b = ori[i2].b;
                res[i].a = ori[i2].a;
            }
        }

    }
    else {
        printf("invalid arguments: rw!==w or rh!==\n");
    }


    return 0;
}

static luaL_Reg functions[] = {
    { "make", make},
    { "mapping", mapping},
    { nullptr, nullptr }
};

extern "C" {
    __declspec(dllexport) int luaopen_UVmapping(lua_State* L) {
        luaL_register(L, "UVmapping", functions);
        return 1;
    }
}