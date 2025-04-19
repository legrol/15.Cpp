/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 23:31:15 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/02 17:07:01 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLORS_H
# define COLORS_H

// =======================================================
// # Regular Colors ANSI
// =======================================================

# define RED            "\033[0;31m"
# define GREEN          "\033[0;32m"
# define BLUE           "\033[0;34m"
# define WHITE          "\033[0;37m"
# define BLACK      	"\033[0;30m"

// =======================================================
// # Other Colors ANSI
// =======================================================

# define YELLOW         "\033[0;33m"
# define MAGENTA        "\033[0;35m"
# define CYAN           "\033[0;36m"
# define ORANGE         "\033[0;38m"
# define RESET      	"\033[0;0m"

// =======================================================
// # Colors "Bright" / extends
// =======================================================

# define GRAY           "\033[0;90m"
# define LRED           "\033[0;91m"
# define LGREEN         "\033[0;92m"
# define LYELLOW        "\033[0;93m"
# define LBLUE          "\033[0;94m"
# define LMAGENTA       "\033[0;95m"
# define LCYAN          "\033[0;96m"
# define LWHITE         "\033[0;97m"

// =======================================================
// # Bold ANSI
// =======================================================

# define BDBLACK        "\033[1;30m"
# define BDRED          "\033[1;31m"
# define BDGREEN        "\033[1;32m"
# define BDYELLOW       "\033[1;33m"
# define BDBLUE         "\033[1;34m"
# define BDMAGENTA      "\033[1;35m"
# define BDCYAN         "\033[1;36m"
# define BDWHITE        "\033[1;37m"

// =======================================================
// # Underline ANSI
// =======================================================

# define ULRED          "\033[4;31m"
# define ULGREEN        "\033[4;32m"
# define ULYELLOW       "\033[4;33m"
# define ULBLUE         "\033[4;34m"
# define ULMAGENTA      "\033[4;35m"
# define ULCYAN         "\033[4;36m"
# define ULWHITE        "\033[4;37m"

// =======================================================
// # Background Colors ANSI
// =======================================================

# define BG_BROWN		 "\033[38m"
# define BG_BLACK        "\033[40m"
# define BG_RED          "\033[41m"
# define BG_GREEN        "\033[42m"
# define BG_YELLOW       "\033[43m"
# define BG_BLUE         "\033[44m"
# define BG_MAGENTA      "\033[45m"
# define BG_CYAN         "\033[46m"
# define BG_WHITE        "\033[47m"

// =======================================================
// # Bright Background Colors ANSI
// =======================================================

# define BG_BBLACK       "\033[100m"
# define BG_BRED         "\033[101m"
# define BG_BGREEN       "\033[102m"
# define BG_BYELLOW      "\033[103m"
# define BG_BBLUE        "\033[104m"
# define BG_BMAGENTA     "\033[105m"
# define BG_BCYAN        "\033[106m"
# define BG_BWHITE       "\033[107m"

// =======================================================
// # Dim (baja intensidad) ANSI
// =======================================================

# define DIMBLACK        "\033[2;30m"
# define DIMRED          "\033[2;31m"
# define DIMGREEN        "\033[2;32m"
# define DIMYELLOW       "\033[2;33m"
# define DIMBLUE         "\033[2;34m"
# define DIMMAGENTA      "\033[2;35m"
# define DIMCYAN         "\033[2;36m"
# define DIMWHITE        "\033[2;37m"

// =======================================================
// # Italic ANSI
// =======================================================

# define ITBLACK         "\033[3;30m"
# define ITRED           "\033[3;31m"
# define ITGREEN         "\033[3;32m"
# define ITYELLOW        "\033[3;33m"
# define ITBLUE          "\033[3;34m"
# define ITMAGENTA       "\033[3;35m"
# define ITCYAN          "\033[3;36m"
# define ITWHITE         "\033[3;37m"

// =======================================================
// # Blink ANSI (may not work on all terminals)
// =======================================================

# define BLKBLACK        "\033[5;30m"
# define BLKRED          "\033[5;31m"
# define BLKGREEN        "\033[5;32m"
# define BLKYELLOW       "\033[5;33m"
# define BLKBLUE         "\033[5;34m"
# define BLKMAGENTA      "\033[5;35m"
# define BLKCYAN         "\033[5;36m"
# define BLKWHITE        "\033[5;37m"

// =======================================================
// # Lines, fills, miscellany
// # (see graphics bellow)
// =======================================================

# define EQLIN          "\u2550"
# define LSHADE         "\u2591"
# define MSHADE         "\u2592"
# define HSHADE         "\u2593"
# define FBLOCK         "\u2588"
# define EBLOCK         "\u258d"
# define ARROWRG        "\u2911"

// =======================================================
// # Regular Colors HEXadecimal
// =======================================================

# define REDHEX         "0xff0000"
# define GREENHEX       "0x00ff00"
# define BLUEHEX        "0x0000ff"
# define WHITEHEX       "0xffffff"
# define BLACKHEX       "0x000000"

// =======================================================
// # Others Colors HEXadecimal
// =======================================================

# define YELLOWHEX      "0xffff00"
# define MAGENTAHEX     "0xff00ff"
# define CYANHEX        "0x00ffff"
# define ORANGEHEX      "0xffa500"
# define GREYHEX        "0x808080"
# define NAVYHEX        "0x000080"
# define OLIVEHEX       "0x808000"
# define SILVERHEX      "0xc0c0c0"

#endif

// EQLIN        ═══════════════════
// LSHADE       ░░░░░░░░░░░░░░░░░░░
// MSHADE       ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
// HSHADE       ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
// FBLOCK       ███████████████████
// EBLOCK       ▍▍▍▍▍▍▍▍▍▍▍▍▍▍▍▍▍▍▍
// ARROWRG      ⤑⤑⤑⤑⤑⤑⤑⤑⤑⤑⤑⤑⤑⤑