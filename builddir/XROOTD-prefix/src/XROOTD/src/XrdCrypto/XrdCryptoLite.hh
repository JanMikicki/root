#ifndef __XRDCRYPTOLITE_H__
#define __XRDCRYPTOLITE_H__
/******************************************************************************/
/*                                                                            */
/*                      X r d C r y p t o L i t e . h h                       */
/*                                                                            */
/* (c) 2008 by the Board of Trustees of the Leland Stanford, Jr., University  */
/*                            All Rights Reserved                             */
/*   Produced by Andrew Hanushevsky for Stanford University under contract    */
/*              DE-AC02-76-SFO0515 with the Department of Energy              */
/*                                                                            */
/* This file is part of the XRootD software suite.                            */
/*                                                                            */
/* XRootD is free software: you can redistribute it and/or modify it under    */
/* the terms of the GNU Lesser General Public License as published by the     */
/* Free Software Foundation, either version 3 of the License, or (at your     */
/* option) any later version.                                                 */
/*                                                                            */
/* XRootD is distributed in the hope that it will be useful, but WITHOUT      */
/* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or      */
/* FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public       */
/* License for more details.                                                  */
/*                                                                            */
/* You should have received a copy of the GNU Lesser General Public License   */
/* along with XRootD in a file called COPYING.LESSER (LGPL license) and file  */
/* COPYING (GPL license).  If not, see <http://www.gnu.org/licenses/>.        */
/*                                                                            */
/* The copyright holder's institutional names and contributor's names may not */
/* be used to endorse or promote products derived from this software without  */
/* specific prior written permission of the institution or contributor.       */
/******************************************************************************/

// This abstract class defines a very simple interface to encryption methods.
// CryptoLite provides a naive interface to stream cryptographic algorithms
// that include decryption validation. Use XrdCryptoBasic and it's derived 
// classes for full-featured cryptogrophy.
//

class XrdCryptoLite
{
public:

// Create()  creates a new CryptoLite object that implements the specified
//           cryptography (see below). It returns a pointer to the object or a
//           null pointer if not successful (e.g., unsupported). When creating a
//           crypto object you may associate an arbitrary type code with an
//           instance of that object which Type() will simply echo back.

//           Supported names:
//           bf32      Blowfish with CRC32 validation.
//
static XrdCryptoLite *
             Create(int        &rc,        // errno when Create(...) == 0
                    const char *Name,      // Crypto name
                    const char Type='\0'); // Crypto type (assigned)

// Decrypt() decrypts src and, if successful, returns the number of bytes
//           placed in dst. Otherwise, -errno is returned (which may be 0).
//           Requirements: srclen >= dstlen > 0
//
virtual int  Decrypt(const char *key,      // Decryption key
                     int         keyLen,   // Decryption key byte length
                     const char *src,      // Buffer to be decrypted
                     int         srcLen,   // Bytes length of src  buffer
                     char       *dst,      // Buffer to hold decrypted result
                     int         dstLen)=0;// Bytes length of dst  buffer

// Encrypt() encrypts src and, if successful, returns the number of bytes
//           placed in dst. Otherwise, -errno is returned (which may be 0).
//           Requirements: 0 < srclen <= (dstlen + Overhead())
//
virtual int  Encrypt(const char *key,      // Encryption key
                     int         keyLen,   // Encryption key byte length
                     const char *src,      // Buffer to be encrypted
                     int         srcLen,   // Bytes length of src  buffer
                     char       *dst,      // Buffer to hold encrypted result
                     int         dstLen)=0;// Bytes length of dst  buffer

// Overhead() returns the number of *extra* bytes required for the dst buffer,
//            as specified when the actual implementation was instantiated.
//            Hence, we can provide an implementation for this method.
//
virtual int  Overhead() {return Extra;}

// Type() simply returns the encyption type code assigned to this object when
//        its actual implementation was instantiated. Hence, we can provide an
//        implementation for this method.
//
virtual char Type() {return myType;}

         XrdCryptoLite(char deType, int ovhd=8) : Extra(ovhd),myType(deType) {}
virtual ~XrdCryptoLite() {}

protected:

int  Extra;
char myType;
};
#endif
