//
//  MochiCart.h
//  Framework
//
//  Created by Braydon Batungbacal on 3/13/14.
//  Copyright (c) 2014 Braydon Batungbacal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MCNavigationController.h"

@interface MochiCart : NSObject

// Information related to your MochiCart store, this can be referenced
// in various ways, and is publically available for use throughout your app.
@property (nonatomic, retain) NSDictionary *storeInfo;

// The apiKey is used as a reference for which store to load into your
// app. You can find this unique key next to your specific store's name
// under "My Stores" when you log into www.mochicart.com. You can set this
// property directly or use the method setupShop to set your store's api key.
@property (nonatomic, retain) NSString *apiKey;

// Shared static class that you must use when accessing any MochiCart property
// or method.
+ (MochiCart *)session;

// A convenience method for setting the apiKey of your store.
//
// @param apiKey
// The apiKey of your store, found under "My Stores" after
// logging into www.mochicart.com
- (void)setupShop:(NSString *)apiKey;

// This method creates a MCNavigationController that
// ecompasses all the functionality and views of your
// MochiCart store. The MCNavigationController returned
// by this method can be used anywhere a UINavigationController
// or UIViewController is used, such as; the contents of a tab,
// a UIViewController presented by the native presentViewController
// method or simply as a ViewController in the flow of your app.
//
// NOTE: If you are using buildStorefront with presentViewController,
// please use the buildModalStorefront method.
- (MCNavigationController *)buildStorefront;

// The same as buildStorefront, but has a back button in the primary
// view's navigation controller dismissing itself.
- (MCNavigationController *)buildModalStorefront;

@end
