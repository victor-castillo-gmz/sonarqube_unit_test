/*
 * Copyright (C) 2025 Tec de Monterrey
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef MUL_H // This is a header guard to prevent multiple inclusions
#define MUL_H

/**
 * Method to multiply two numbers.
 */
double mul(int x, int y)
{
    return static_cast<double>(x * y);
}

#endif // MUL_H