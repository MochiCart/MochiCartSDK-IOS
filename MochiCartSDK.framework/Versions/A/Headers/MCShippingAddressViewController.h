//
//  MCShippingAddressViewController.h
//  Framework
//
//  Created by Braydon Batungbacal on 4/4/14.
//  Copyright (c) 2014 Braydon Batungbacal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MCShippingAddressViewController : UIViewController

@property (nonatomic, retain) UIScrollView *fieldScrollView;

@property (nonatomic, retain) UITextField *firstName;
@property (nonatomic, retain) UITextField *lastName;
@property (nonatomic, retain) UITextField *email;
@property (nonatomic, retain) UITextField *phoneNumber;
@property (nonatomic, retain) UITextField *addressOne;
@property (nonatomic, retain) UITextField *addressTwo;
@property (nonatomic, retain) UITextField *city;
@property (nonatomic, retain) UITextField *stateProvince;
@property (nonatomic, retain) UITextField *zip;
@property (nonatomic, retain) UITextField *country;
@property (nonatomic, retain) UIButton *saveButton;
@property (nonatomic, retain) UIView *loadingView;

@end
