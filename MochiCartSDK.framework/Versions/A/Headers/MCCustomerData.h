//
//  MCCustomerData.h
//  Framework
//
//  Created by Braydon Batungbacal on 3/21/14.
//  Copyright (c) 2014 Braydon Batungbacal. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MCCustomerData : NSObject

@property (nonatomic, retain) NSMutableArray *cart;

@property (nonatomic, retain) NSDictionary *orderShippingAddress;
@property (nonatomic, retain) NSDictionary *orderShippingMethod;

@property (nonatomic, retain) NSString *customerId;
@property (nonatomic, retain) NSString *accessToken;

+ (MCCustomerData *)sharedCustomerData;
+ (BOOL)validateAccessToken:(NSString *)accessToken;

- (void)addItemToCart:(NSDictionary *)product quantity:(int)quantity;
- (void)removeItemFromCart:(int)itemIndex;
- (void)updateItemQuantity:(int)itemIndex quantity:(int)quantity;

- (NSNumber *)getCartItemIndexById:(NSString *)itemId;
- (int)getCartItemQuantity:(NSString *)itemId;

- (void)saveCustomerId:(NSString *)customerId;
- (void)saveShippingAddress:(NSDictionary *)shippingAddress;

@end
