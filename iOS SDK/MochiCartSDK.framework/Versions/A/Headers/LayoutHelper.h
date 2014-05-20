//
//  LayoutHelper.h
//  Framework
//
//  Created by Braydon Batungbacal on 3/18/14.
//  Copyright (c) 2014 Braydon Batungbacal. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LayoutHelper : NSObject <UITextFieldDelegate>

+ (LayoutHelper *) sharedLayoutHelper;

+ (UILabel *)buildLabel:(NSString *)text font:(UIFont *)font frame:(CGRect)frame;
+ (UITextField *)buildTextField:(NSString *)placeholder frame:(CGRect) frame;
+ (UITextView *)buildTextView:(NSString *)text frame:(CGRect)frame;
+ (UIButton *)buildButton:(NSString *)text frame:(CGRect)frame target:(id)target action:(SEL)action;

+ (UIView *)buildLoadingOverlay:(NSString *)text superview:(UIView *)superview;

+ (void)fadeView:(UIView *)view fadeIn:(BOOL)fadeIn;

+ (BOOL)iPad;

+ (float)getScreenWidth;
+ (float)getScreenHeight;

+ (void)displayAlert:(NSString *)title message:(NSString *)message;

- (void)adjustTextField:(UITextField *)textField up:(BOOL)up;

@end
