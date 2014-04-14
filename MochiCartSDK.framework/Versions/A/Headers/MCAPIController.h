//
//  MCAPIController.h
//  Framework
//
//  Created by Braydon Batungbacal on 3/16/14.
//  Copyright (c) 2014 Braydon Batungbacal. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MCAPIController : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate>

@property (nonatomic, retain) NSMutableDictionary *connectionInfos;

+ (MCAPIController *)sharedAPIController;
- (void)doAsyncRequestWithCallback:(NSString *)method arguments:(NSDictionary *)arguments target:(id)target action:(SEL)action;
- (void)doAsyncPostWithCallback:(NSString *)method arguments:(NSDictionary *)arguments post:(NSDictionary *)post target:(id)target action:(SEL)action;
- (void)doCustomResourceRequestWithCallback:(NSString *)resourceUrl target:(id)target action:(SEL)action;
- (void)doCustomResourceRequestWithCallbackAndObject:(NSString *)resourceUrl target:(id)target action:(SEL)action object:(id)object;

@end
