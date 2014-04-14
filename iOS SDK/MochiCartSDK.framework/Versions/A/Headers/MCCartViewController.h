//
//  MCCartViewController.h
//  Framework
//
//  Created by Braydon Batungbacal on 3/17/14.
//  Copyright (c) 2014 Braydon Batungbacal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MCCartViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, retain) UITableView *cartTable;

@property (nonatomic, retain) UILabel *subtotalLabel;
@property (nonatomic, retain) UILabel *subtotalPrice;
@property (nonatomic, retain) UIButton *checkoutButton;

@end
