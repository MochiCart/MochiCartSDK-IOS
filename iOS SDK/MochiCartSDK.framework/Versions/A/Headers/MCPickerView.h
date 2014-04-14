//
//  MCPickerView.h
//  Framework
//
//  Created by Braydon Batungbacal on 3/26/14.
//  Copyright (c) 2014 Braydon Batungbacal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MCPickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate>

@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic, retain) UIButton *doneButton;
@property (nonatomic, retain) UIPickerView *pickerView;
@property (nonatomic, retain) NSArray *pickerItems;
@property int pickerDefaultIndex;

@property (nonatomic, retain) id doneCallbackTarget;
@property SEL doneCallbackAction;
@property (nonatomic, retain) id doneCallbackReference;

- (id)initWithFrame:(CGRect)frame title:(NSString *)title pickerItems:(NSArray *)pickerItems;
- (void)setDoneCallback:(id)target action:(SEL)action reference:(id)reference;

@end
