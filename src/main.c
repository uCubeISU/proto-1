/*
 *     uCube is a motion controlled interactive LED cube.
 *     Copyright (C) 2014  Jeramie Vens
 *
 *     This program is free software: you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation, either version 3 of the License, or
 *     (at your option) any later version.
 *
 *     This program is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 *
 *     You should have received a copy of the GNU General Public License
 *     along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
/**
 * @addtogroup proto-1 Prototype 1 Software
 * @brief Software for the first protype board purchase in October of 2014.
 * @copyright
 *     uCube is a motion controlled interactive LED cube.<br>
 *     Copyright (C) 2014  Jeramie Vens<br><br>
 *     This program is free software: you can redistribute it and/or modify<br>
 *     it under the terms of the GNU General Public License as published by<br>
 *     the Free Software Foundation, either version 3 of the License, or<br>
 *     (at your option) any later version.<br><br>
 *     This program is distributed in the hope that it will be useful,<br>
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of<br>
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the<br>
 *     GNU General Public License for more details.<br><br>
 *     You should have received a copy of the GNU General Public License<br>
 *     along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * @{
 * @file main.c
 * @author Jeramie Vens
 * @date 10/24/14 - Created
 * @copyright GNU Public License v3
 * @brief Main entry point of the program
 */

#include <msp430.h> 

/**
 * The main entry point of the program
 * @return This function should never return
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

	return 0;
}

/// @}
