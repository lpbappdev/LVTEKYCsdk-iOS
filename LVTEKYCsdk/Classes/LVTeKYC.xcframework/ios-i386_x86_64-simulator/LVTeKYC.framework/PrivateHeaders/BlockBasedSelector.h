//
//  BlockBasedSelector.h
//  SacombankPay
//
//  Created by Charlton Provatas on 11/2/17.
//

#import <Foundation/Foundation.h>

@interface BlockBasedSelector : NSObject

@end

typedef void (^OBJCBlock)(id PPSelector);
typedef void (^OBJCBlockWithSender)(id PPSelector, id sender);

void class_addMethodWithBlock(Class class, SEL newSelector, OBJCBlock block);
void class_addMethodWithBlockAndSender(Class class, SEL newSelector, OBJCBlockWithSender block);
