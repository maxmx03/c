#include <luajit-2.1/lauxlib.h>
#include <luajit-2.1/lua.h>
#include <luajit-2.1/lualib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  lua_State *L = luaL_newstate();
  luaL_openlibs(L);

  if (argc > 1) {
    lua_newtable(L);
    for (int i = 1; i < argc; i++) {
      lua_pushstring(L, argv[i]);
      lua_rawseti(L, -2, i);
    }
    lua_setglobal(L, "arg");
  }

  if (luaL_dofile(L, "init.lua") != LUA_OK) {
    const char *error_msg = lua_tostring(L, -1);
    fprintf(stderr, "Error: %s\n", error_msg);
    lua_pop(L, 1);
    lua_close(L);
    return 1;
  }

  lua_close(L);
  return 0;
}
