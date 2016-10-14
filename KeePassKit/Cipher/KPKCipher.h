//
//  KPKChipher.h
//  KeePassKit
//
//  Created by Michael Starke on 02/09/16.
//  Copyright © 2016 HicknHack Software GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol KPKHeaderReading;

@interface KPKCipher : NSObject

+ (NSUUID *)uuid;

+ (KPKCipher * _Nullable)cipherWithUUID:(NSUUID *)uuid;
+ (KPKCipher * _Nullable)cipherWithUUID:(NSUUID *)uuid options:(NSDictionary *)options;
+ (KPKCipher *)aesCipher;
+ (KPKCipher *)chaChaCipher;

+ (NSUInteger)keyLength;
+ (NSUInteger)IVLength;

@property (nonatomic, readonly, copy) NSUUID *uuid;
@property (nonatomic, readonly) NSUInteger keyLength;
@property (nonatomic, readonly) NSUInteger IVLength;

- (KPKCipher *)initWithUUID:(NSUUID *)uuid;
- (KPKCipher *)initWithUUID:(NSUUID *)uuid options:(NSDictionary *)options NS_DESIGNATED_INITIALIZER;

- (NSData * _Nullable)decryptData:(NSData *)data withKey:(NSData *)key initializationVector:(NSData *)iv error:(NSError * _Nullable __autoreleasing *)error;
- (NSData * _Nullable)encryptData:(NSData *)data withKey:(NSData *)key initializationVector:(NSData *)iv error:(NSError * _Nullable __autoreleasing *)error;


@end

NS_ASSUME_NONNULL_END
