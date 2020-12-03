//
//  LHGKeychainHelper+RSA.h
//  LHGLibPrivate
//
//  Created by Long Hoang Giang on 10/2/20.
//

#import "LHGKeychainHelper.h"

@interface LHGKeychainHelper (RSA)

+ (OSStatus)deleteKeyWithTag:(NSString *)tag;
+ (SecKeyRef)addPublicKey:(NSData *)keyData withTag:(NSString *)tag;
+ (SecKeyRef)addPrivateKey:(NSData *)keyData withTag:(NSString *)tag;
+ (SecKeyRef)getPublicKeyWithTag:(NSString *)tag error:(NSError **)error;
+ (SecKeyRef)getPrivateKeyWithTag:(NSString *)tag error:(NSError **)error;
+ (NSData *)getPrivateKeyDataWithTag:(NSString *)tag error:(NSError **)error;
+ (NSData *)getPublicKeyDataWithTag:(NSString *)tag error:(NSError **)error;
+ (SecKeyRef)addPemPublicKey:(NSString *)key withTag:(NSString *)tag;
+ (SecKeyRef)addPemPrivateKey:(NSString *)key withTag:(NSString *)tag;

@end

