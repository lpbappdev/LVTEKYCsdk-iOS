//
//  NSData+RSAKey.h
//  LHGLibPrivate
//
//  Created by Long Hoang Giang on 10/2/20.
//

#import <Foundation/Foundation.h>

@interface NSData (RSAKey)

- (NSData *)stripPublicKeyHeader;
- (NSData *)stripPrivateKeyHeader;
- (NSData *)sha256BlobBytes;
- (NSData *)sha1BlobBytes;

@end
