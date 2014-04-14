//
//  MCProductViewController.h
//  Framework
//
//  Created by Braydon Batungbacal on 3/18/14.
//  Copyright (c) 2014 Braydon Batungbacal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MCProductViewController : UIViewController <UITextViewDelegate, UIScrollViewDelegate>

@property (nonatomic, retain) NSDictionary *product;
@property (nonatomic, retain) UIScrollView *productScrollContainer;

@property (nonatomic, retain) NSMutableArray *productImages;
@property (nonatomic, retain) UIView *productImagesCarouselContainer;
@property (nonatomic, retain) UIScrollView *productImagesCarousel;
@property (nonatomic, retain) UIPageControl *productImagesCarouselPageControl;

@property (nonatomic, retain) UILabel *productTitle;
@property (nonatomic, retain) UILabel *productPrice;
@property (nonatomic, retain) UITextView *productDescription;
@property (nonatomic, retain) UIButton *addToCartButton;

- (MCProductViewController *)initWithProduct:(NSDictionary *)product;

@end
