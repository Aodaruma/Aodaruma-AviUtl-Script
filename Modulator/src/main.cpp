#include <lua.hpp>
#include <stdio.h>
#include <cmath>

struct Pixel_RGBA {
    unsigned char b;
    unsigned char g;
    unsigned char r;
    unsigned char a;
};

int modulator(lua_State* L) {
    // get arguments
    // userdata, w, h, omega, phase, distortion, direction, orientation, opacity
    Pixel_RGBA* pixels = reinterpret_cast<Pixel_RGBA*>(lua_touserdata(L, 1));
    int w = static_cast<int>(lua_tointeger(L, 2));
    int h = static_cast<int>(lua_tointeger(L, 3));
    double omega = lua_tonumber(L, 4); // ’x‰„—¦ (1<)
    double phase = lua_tonumber(L, 5); // ŽüŠú (0-256)
    int dist = static_cast<int>(lua_tointeger(L, 6)); // ŠÔŠu (0<)
    int dist2 = static_cast<int>(lua_tointeger(L, 7)); // ŠÔŠu (0<)
    int width = static_cast<int>(lua_tointeger(L, 8)); // pixel
    int direction = static_cast<int>(lua_tointeger(L, 9));
    bool isInvert = static_cast<bool>(lua_toboolean(L, 10));
    int opaMax = static_cast<int>(lua_tointeger(L, 11));
    int opaMin = static_cast<int>(lua_tointeger(L, 12));

    omega = omega <= 0.25 ? 0.25 : omega;
    phase = phase < 0 ? 0 : phase > 256 ? 256 : phase;
    dist = dist < 0 ? 0 : dist;
    dist2 = dist2 < 0 ? 0 : dist2;
    width = width < 0 ? 0 : width;
    opaMax = opaMax < 0 ? 0 : opaMax > 255 ? 255 : opaMax;
    opaMin = opaMin < 0 ? 0 : opaMin > 255 ? 255 : opaMin;

    if (w > 0 && h > 0) {
        switch (direction)
        {
        case 1:
            for (int y = 0; y < h; y++) {
                double lumisum = 0; // max: 491520(1920x1080)
                int drawpx = 0;
                int drawing = dist;
                int interval = 0;

                for (int x = w-1; x >= 0; x--) {
                    int index = x + w * y;
                    double lumi = (pixels[index].r + pixels[index].g + pixels[index].b) / 3; // to grayscale; max: 256
                    lumisum += isInvert ? lumi / omega : (256 - lumi) / omega; //lumisum += 0 <= lumi <= 256
                    if (lumisum >= phase)
                    {
                        lumisum = 0;
                        if (interval == 0 and drawing == 0)
                        {
                            drawing = dist;
                            interval = dist2;
                        }
                        else if (interval == 0 and drawing > 0)
                        {
                            drawpx = width;
                            drawing--;
                        }
                        else {
                            interval--;
                        }
                    }

                    if (drawpx > 0)
                    {
                        pixels[index].r = 255;
                        pixels[index].g = 255;
                        pixels[index].b = 255;
                        pixels[index].a = opaMax;
                        drawpx--;
                    }
                    else {
                        pixels[index].r = 0;
                        pixels[index].g = 0;
                        pixels[index].b = 0;
                        pixels[index].a = opaMin;
                    }
                }
            }
            break;

        case 2:
            for (int x = 0; x < w; x++) {

                double lumisum = 0; // max: 491520(1920x1080)
                int drawpx = 0;
                int drawing = dist;
                int interval = 0;

                for (int y = 0; y < h; y++) {
                    int index = x + w * y;
                    double lumi = (pixels[index].r + pixels[index].g + pixels[index].b) / 3; // to grayscale; max: 256
                    lumisum += isInvert ? lumi / omega : (256 - lumi) / omega; //lumisum += 0 <= lumi <= 256
                    if (lumisum >= phase)
                    {
                        lumisum = 0;
                        if (interval == 0 and drawing == 0)
                        {
                            drawing = dist;
                            interval = dist2;
                        }
                        else if (interval == 0 and drawing > 0)
                        {
                            drawpx = width;
                            drawing--;
                        }
                        else {
                            interval--;
                        }
                    }

                    if (drawpx > 0)
                    {
                        pixels[index].r = 255;
                        pixels[index].g = 255;
                        pixels[index].b = 255;
                        pixels[index].a = opaMax;
                        drawpx--;
                    }
                    else {
                        pixels[index].r = 0;
                        pixels[index].g = 0;
                        pixels[index].b = 0;
                        pixels[index].a = opaMin;
                    }
                }
            }
            break;

        case 3:
            for (int x = 0; x < w; x++) {
                double lumisum = 0; // max: 491520(1920x1080)
                int drawpx = 0;
                int drawing = dist;
                int interval = 0;

                for (int y = h-1; y >= 0; y--) {
                    int index = x + w * y;
                    double lumi = (pixels[index].r + pixels[index].g + pixels[index].b) / 3; // to grayscale; max: 256
                    lumisum += isInvert ? lumi/omega : (256 - lumi)/omega; //lumisum += 0 <= lumi <= 256
                    if (lumisum >= phase)
                    {
                        lumisum = 0;
                        if (interval == 0 and drawing == 0)
                        {
                            drawing = dist;
                            interval = dist2;
                        }
                        else if (interval == 0 and drawing > 0)
                        {
                            drawpx = width;
                            drawing--;
                        }
                        else {
                            interval--;
                        }
                    }

                    if (drawpx > 0)
                    {
                        pixels[index].r = 255;
                        pixels[index].g = 255;
                        pixels[index].b = 255;
                        pixels[index].a = opaMax;
                        drawpx--;
                    }
                    else {
                        pixels[index].r = 0;
                        pixels[index].g = 0;
                        pixels[index].b = 0;
                        pixels[index].a = opaMin;
                    }
                }
            }
            break;

        default:
            for (int y = 0; y < h; y++) {
                double lumisum = 0; // max: 491520(1920x1080)
                int drawpx = 0;
                int drawing = dist;
                int interval = 0;

                for (int x = 0; x < w; x++) {
                    int index = x + w * y;
                    double lumi = (pixels[index].r + pixels[index].g + pixels[index].b) / 3; // to grayscale; max: 256
                    lumisum += isInvert ? lumi/omega : (256 - lumi)/omega; //lumisum += 0 <= lumi <= 256
                    if (lumisum >= phase)
                    {
                        lumisum = 0;
                        if (interval == 0 and drawing == 0)
                        {
                            drawing = dist;
                            interval = dist2;
                        }
                        else if (interval == 0 and drawing > 0)
                        {
                            drawpx = width;
                            drawing--;
                        }
                        else {
                            interval--;
                        }
                    }

                    if (drawpx > 0)
                    {
                        pixels[index].r = 255;
                        pixels[index].g = 255;
                        pixels[index].b = 255;
                        pixels[index].a = opaMax;
                        drawpx--;
                    }
                    else {
                        pixels[index].r = 0;
                        pixels[index].g = 0;
                        pixels[index].b = 0;
                        pixels[index].a = opaMin;
                    }
                }
            }
            break;
        }
    }

    return 0;
}

static luaL_Reg functions[] = {
    { "main", modulator },
    { nullptr, nullptr }
};

extern "C" {
    __declspec(dllexport) int luaopen_Modulator(lua_State* L) {
        luaL_register(L, "Modulator", functions);
        return 1;
    }
}