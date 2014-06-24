/**
 * mangos-one is a full featured server for World of Warcraft in its first
 * expansion version, supporting clients for patch 2.4.3.
 *
 * Copyright (C) 2005-2014  MaNGOS project <http://getmangos.eu>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * World of Warcraft, and all World of Warcraft or Warcraft art, images,
 * and lore are copyrighted by Blizzard Entertainment, Inc.
 */

#ifndef _AUTH_BIGNUMBER_H
#define _AUTH_BIGNUMBER_H

#include "Common.h"

struct bignum_st;

/**
 * @brief
 *
 */
class BigNumber
{
    public:
        /**
         * @brief
         *
         */
        BigNumber();
        /**
         * @brief
         *
         * @param bn
         */
        BigNumber(const BigNumber& bn);
        /**
         * @brief
         *
         * @param uint32
         */
        BigNumber(uint32);
        /**
         * @brief
         *
         */
        ~BigNumber();

        /**
         * @brief
         *
         * @param uint32
         */
        void SetDword(uint32);
        /**
         * @brief
         *
         * @param uint64
         */
        void SetQword(uint64);
        /**
         * @brief
         *
         * @param bytes
         * @param len
         */
        void SetBinary(const uint8* bytes, int len);
        /**
         * @brief
         *
         * @param str
         */
        void SetHexStr(const char* str);

        /**
         * @brief
         *
         * @param numbits
         */
        void SetRand(int numbits);

        /**
         * @brief
         *
         * @param bn
         * @return BigNumber operator
         */
        BigNumber operator=(const BigNumber& bn);

        /**
         * @brief
         *
         * @param bn
         * @return BigNumber operator
         */
        BigNumber operator+=(const BigNumber& bn);
        /**
         * @brief
         *
         * @param bn
         * @return BigNumber operator
         */
        BigNumber operator+(const BigNumber& bn)
        {
            BigNumber t(*this);
            return t += bn;
        }
        /**
         * @brief
         *
         * @param bn
         * @return BigNumber operator
         */
        BigNumber operator-=(const BigNumber& bn);
        /**
         * @brief
         *
         * @param bn
         * @return BigNumber operator
         */
        BigNumber operator-(const BigNumber& bn)
        {
            BigNumber t(*this);
            return t -= bn;
        }
        /**
         * @brief
         *
         * @param bn
         * @return BigNumber operator
         */
        BigNumber operator*=(const BigNumber& bn);
        /**
         * @brief
         *
         * @param bn
         * @return BigNumber operator
         */
        BigNumber operator*(const BigNumber& bn)
        {
            BigNumber t(*this);
            return t *= bn;
        }
        /**
         * @brief
         *
         * @param bn
         * @return BigNumber operator
         */
        BigNumber operator/=(const BigNumber& bn);
        /**
         * @brief
         *
         * @param bn
         * @return BigNumber operator
         */
        BigNumber operator/(const BigNumber& bn)
        {
            BigNumber t(*this);
            return t /= bn;
        }
        /**
         * @brief
         *
         * @param bn
         * @return BigNumber operator
         */
        BigNumber operator%=(const BigNumber& bn);
        /**
         * @brief
         *
         * @param bn
         * @return BigNumber operator
         */
        BigNumber operator%(const BigNumber& bn)
        {
            BigNumber t(*this);
            return t %= bn;
        }

        /**
         * @brief
         *
         * @return bool
         */
        bool isZero() const;

        /**
         * @brief
         *
         * @param bn1
         * @param bn2
         * @return BigNumber
         */
        BigNumber ModExp(const BigNumber& bn1, const BigNumber& bn2);
        /**
         * @brief
         *
         * @param
         * @return BigNumber
         */
        BigNumber Exp(const BigNumber&);

        /**
         * @brief
         *
         * @return int
         */
        int GetNumBytes(void);

        /**
         * @brief
         *
         * @return bignum_st
         */
        struct bignum_st* BN() { return _bn; }

        /**
         * @brief
         *
         * @return uint32
         */
        uint32 AsDword();
        /**
         * @brief
         *
         * @param minSize
         * @return uint8
         */
        uint8* AsByteArray(int minSize = 0);

        /**
         * @brief
         *
         * @return const char
         */
        const char* AsHexStr();
        /**
         * @brief
         *
         * @return const char
         */
        const char* AsDecStr();

    private:
        struct bignum_st* _bn; /**< TODO */
        uint8* _array; /**< TODO */
};
#endif
