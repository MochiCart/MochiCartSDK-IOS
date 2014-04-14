//
//  MCCheckoutViewController.h
//  Framework
//
//  Created by Braydon Batungbacal on 4/3/14.
//  Copyright (c) 2014 Braydon Batungbacal. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "PayPalMobile.h"

@interface MCCheckoutViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, PayPalPaymentDelegate>

@property (nonatomic, retain) UITableView *shippingInfoTable;

@property (nonatomic, retain) UILabel *orderSummaryLabel;
@property (nonatomic, retain) UITableView *orderSummaryTable;

@property (nonatomic, retain) UILabel *subtotalLabel;
@property (nonatomic, retain) UILabel *subtotalPrice;
@property (nonatomic, retain) UILabel *shippingTotalLabel;
@property (nonatomic, retain) UILabel *shippingTotalPrice;
@property (nonatomic, retain) UIView *totalDivider;
@property (nonatomic, retain) UILabel *orderTotalLabel;
@property (nonatomic, retain) UILabel *orderTotalPrice;

@property (nonatomic, retain) UIButton *purchaseButton;

@property (nonatomic, retain) UIView *loadingView;

@end
