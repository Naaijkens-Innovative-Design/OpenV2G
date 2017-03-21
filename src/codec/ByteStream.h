/*
 * Copyright (C) 2007-2017 Siemens AG
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

/*******************************************************************
 *
 * @author Daniel.Peintner.EXT@siemens.com
 * @version 2017-03-02 
 * @contact Joerg.Heuer@siemens.com
 *
 * <p>Code generated by EXIdizer</p>
 * <p>Schema: V2G_CI_MsgDef.xsd</p>
 *
 *
 ********************************************************************/



/**
 * \file 	ByteStream.h
 * \brief 	Byte Stream utilities
 *
 */

#ifndef BYTE_STREAM_H
#define BYTE_STREAM_H

#ifdef __cplusplus
extern "C" {
#endif

#include "EXITypes.h"

/**
 * \brief 		Write bytes to file
 *
 * \param       data	   		byte array
 * \param       len				length
 * \param       filename		File name
 * \return                  	Error-Code <> 0
 *
 */
int writeBytesToFile(uint8_t* data, size_t len, const char * filename);


/**
 * \brief 		Read bytes from file
 *
 * \param       filename   		File name
 * \param       data			byte array
 * \param       size		   	byte array size
 * \param       pos			   	byte array position
 * \return                  	Error-Code <> 0
 *
 */
int readBytesFromFile(const char * filename, uint8_t* data, size_t size, size_t* pos);

#ifdef __cplusplus
}
#endif

#endif /* BYTE_STREAM_H */
