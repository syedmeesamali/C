#define IDR_MYMENU 101
#define IDI_MYICON 201

#define ID_FILE_EXIT 9001
#define ID_STUFF_GO 9002

IDR_MYMENU MENU
BEGIN
    POPUP "&File"
    BEGIN
        MENUITEM "E&xit", ID_FILE_EXIT
    END

    POPUP "&Stuff"
    BEGIN
        MENUITEM "&Go", ID_STUFF_GO
        MENUITEM "G&o somewhere else", 0, GRAYED
    END
END

IDI_MYICON ICON "menu_one.ico"
