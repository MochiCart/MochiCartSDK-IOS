//
//  MCProductsViewController.h
//  Framework
//
//  Created by Braydon Batungbacal on 3/16/14.
//  Copyright (c) 2014 Braydon Batungbacal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MCProductsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, retain) UITableView *productsTable;
@property (nonatomic, retain) NSArray *products;
@property (nonatomic, retain) UIView *loadingView;

@end
