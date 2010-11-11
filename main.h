/**
 *   j0llyDmpr
 *   Copyright (C) 2010 0vercl0k <0vercl0k@tuxfamily.org>
 *
 *   This file is part of j0llyDmpr.
 *
 *   J0llyDmpr is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   J0llyDmpr is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with J0llyDmpr. If not, see <http://www.gnu.org/licenses/>.
**/

#ifndef _MAIN_H
#define _MAIN_H

#define DisplayProjectName() {                          \
    printf("\tJ");                                      \
    SetColorRed();                                      \
    printf("0");                                        \
    SetColorWhite();                                    \
    printf("llyDump3r par ");                           \
    SetColorRed();                                      \
    printf("<");                                        \
    SetColorWhite();                                    \
    printf("0vercl0k");                                 \
    SetColorRed();                                      \
    printf(">\n\n");                                    \
    SetColorWhite();                                    \
}

#define DisplayOk() {                                   \
    SetColorGreen();                                    \
    printf("[OK]\n");                                   \
    SetColorWhite();                                    \
}

#define DisplayKo() {                                   \
    SetColorRed();                                      \
    printf("[KO]\n");                                   \
    SetColorWhite();                                    \
}

#endif
