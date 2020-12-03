//
//  LHGRSAHelper.h
//  LHGLibPrivate
//
//  Created by Long Hoang Giang on 10/2/20.
//

#import <Foundation/Foundation.h>
#import <Security/Security.h>
#import <CommonCrypto/CommonDigest.h>

@interface LHGRSAHelper : NSObject

+ (NSString *)sign:(NSData *)plainData pemPrivateKey:(NSString *)privateKey;
+ (NSString *)sign:(NSData *)plainData privateKey:(SecKeyRef)privateKey;
+ (BOOL)verifySignature:(NSData *)plainData pemPublicKey:(NSString *)publicKey signatureText:(NSString *)sig;
+ (BOOL)verifySignature:(NSData *)plainData pemPublicKey:(NSString *)publicKey signature:(NSData *)sig;
+ (BOOL)verifySignature:(NSData *)plainData publicKey:(SecKeyRef)publicKey signature:(NSData *)sig;
+ (NSData *)encryptData:(NSData *)data withPemPublicKey:(NSString *)pemPublicKey;
+ (NSData *)encryptData:(NSData *)data withPublicKey:(SecKeyRef)publicKey;
+ (NSData *)decryptData:(NSData *)data withPemPrivateKey:(NSString *)pemPrivateKey;
+ (NSData *)decryptData:(NSData *)data withPrivateKey:(SecKeyRef)privateKey;

@end
