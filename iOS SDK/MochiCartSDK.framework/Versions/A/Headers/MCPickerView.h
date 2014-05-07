//
//  MCPickerView.h
//  Framework
//
//  Created by Braydon Batungbacal on 3/26/14.
//  Copyright (c) 2014 Braydon Batungbacal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MCPickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate>

@property (nonatomic, retain) UIPickerView *pickerView;

- (id)initWithFrame:(CGRect)frame title:(NSString *)title pickerItems:(NSArray *)pickerItems;
- (void)setDoneCallback:(id)target action:(SEL)action reference:(id)reference;
- (void)setCancelCallback:(id)target action:(SEL)action reference:(id)reference;

@end
