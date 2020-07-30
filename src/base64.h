/*
* 2014 Douglas J Bakkum
* Split into .h and .c files.
*/

/*

  https://github.com/superwills/NibbleAndAHalf
  base64.h -- Fast base64 encoding and decoding.
  version 1.0.0, April 17, 2013 143a

  Copyright (C) 2013 William Sherif

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.

  William Sherif
  will.sherif@gmail.com

  YWxsIHlvdXIgYmFzZSBhcmUgYmVsb25nIHRvIHVz

*/
#ifndef _BASE64_H_
#define _BASE64_H_

/**
 * Converts binary data of length=len to base64 characters.
 *
 * @param[in] binaryData Binary buffer to encode. Must be len bytes long.
 * @paramm[in] len Length of the binaryData buffer.
 * @param[out] flen Resulting length of the encoded buffer.
 * @return Decoded buffer, or NULL if an error occurred. Must be free()'d by the
 * caller.
 */
char *base64(const void *binaryData, int len, int *flen);

/**
 * Decodes the provided base64 string.
 *
 * @param[in] ascii Base64-encoded buffer to decoded. Must contain a
 * zero-terminated string.
 * @param[in] len Length of the string to decode (excluding the terminating
 * character).
 * @param[out] flen Resulting length of the decoded buffer.
 * @return Decoded buffer, or NULL if an error occurred. Must be free()'d by the
 * caller.
 */
unsigned char *unbase64( const char *ascii, int len, int *flen );

#endif
