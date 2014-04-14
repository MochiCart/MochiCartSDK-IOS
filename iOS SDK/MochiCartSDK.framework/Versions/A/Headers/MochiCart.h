//
//  MochiCart.h
//  Framework
//
//  Created by Braydon Batungbacal on 3/13/14.
//  Copyright (c) 2014 Braydon Batungbacal. All rights reserved.
//

#import <Foundation/Foundation.h>

// dependencies
#import "MCNavigationController.h"

@interface MochiCart : NSObject

@property (nonatomic, retain) NSString *apiKey;
@property (nonatomic, retain) NSDictionary *storeInfo;

+ (MochiCart *)session;

- (void)setupShop:(NSString *)apiKey;
- (MCNavigationController *)buildStorefront;

@end
