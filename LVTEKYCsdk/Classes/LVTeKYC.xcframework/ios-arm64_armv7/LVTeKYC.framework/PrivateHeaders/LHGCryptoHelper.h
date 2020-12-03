//
//  LHGCryptoHelper.h
//  LVTeKYC
//
//  Created by Long Hoang Giang on 9/30/20.
//

#import <Foundation/Foundation.h>

@interface LHGCryptoHelper : NSObject

+ (NSData *)tripleDesEncryptData:(NSData *)inputData withKey:(NSData *)keyData error:(NSError **)error;
+ (NSData *)tripleDesEncryptWithOptions:(uint32_t)option inputData:(NSData *)inputData withKey:(NSData *)keyData error:(NSError **)error;
+ (NSData *)tripleDesDecryptData:(NSData *)inputData withKey:(NSData *)keyData error:(NSError **)error;
+ (NSData *)tripleDesDecryptWithOptions:(uint32_t)options inputData:(NSData *)inputData withKey:(NSData *)keyData error:(NSError **)error;

@end
