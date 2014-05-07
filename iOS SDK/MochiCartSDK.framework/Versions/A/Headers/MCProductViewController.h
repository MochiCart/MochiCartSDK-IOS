//
//  MCProductViewController.h
//  Framework
//
//  Created by Braydon Batungbacal on 3/18/14.
//  Copyright (c) 2014 Braydon Batungbacal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MCProductViewController : UIViewController <UITextViewDelegate, UIScrollViewDelegate>

- (MCProductViewController *)initWithProduct:(NSDictionary *)product;

@end
