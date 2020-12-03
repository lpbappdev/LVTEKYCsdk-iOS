//
//  LHGKeychainHelper.h
//  LHGLibPrivate
//
//  Created by Long Hoang Giang on 10/2/20.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, SecKeyType) {
  SecKeyTypePrivate = 0,
  SecKeyTypePublic  = 1
};

@interface LHGKeychainHelper : NSObject


@end
