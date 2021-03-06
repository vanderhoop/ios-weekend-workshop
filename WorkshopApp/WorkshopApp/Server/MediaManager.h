//
//  MediaManager.h
//  WorkshopApp-noxib
//
//  Created by Alfred Hanssen on 11/11/13.
//  Copyright (c) 2013 Alfred Hanssen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MediaManager : NSObject

@property (nonatomic, strong) NSArray *mediaObjects;

- (void)fetchPopularMediaWithCompletionBlock:(void (^)(BOOL success))completionBlock;

+ (BOOL)isValidElement:(id)element;

@end
