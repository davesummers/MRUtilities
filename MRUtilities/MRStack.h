//
//  MRStack.h
//  Cheq
//
//  Created by Martin Rybak on 8/14/13.
//  Copyright (c) 2013 Martin Rybak. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MRStack : NSObject

- (void)push:(id)object;
- (id)pop;
- (id)peek;
- (void)clear;
- (int)count;
- (BOOL)isEmpty;

@end
