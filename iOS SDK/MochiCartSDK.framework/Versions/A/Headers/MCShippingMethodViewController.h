//
//  MCShippingMethodViewController.h
//  Framework
//
//  Created by Braydon Batungbacal on 4/5/14.
//  Copyright (c) 2014 Braydon Batungbacal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MCShippingMethodViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, retain) UITableView *shippingMethodTable;
@property (nonatomic, retain) UIView *loadingView;

@end
