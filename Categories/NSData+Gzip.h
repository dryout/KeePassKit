//
//  NSData+Compression.h
//  MacPass
//
//  Created by Michael Starke on 05.07.13.
//  Copyright (c) 2013 HicknHack Software GmbH. All rights reserved.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
//  Methods extracted from source given at
//  http://www.cocoadev.com/index.pl?NSDataCategory
//

#import <Foundation/NSData.h>

@interface NSData (Gzip)

#pragma mark -
#pragma mark Gzip Compression routines
/*
 Returns a data object containing a Gzip decompressed copy of the receivers contents.
 */
- (NSData *) gzipInflate;
/*
 Returns a data object containing a Gzip compressed copy of the receivers contents.
 */
- (NSData *) gzipDeflate;

@end
