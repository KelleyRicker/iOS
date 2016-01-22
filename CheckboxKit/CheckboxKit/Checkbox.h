//
//  Checkbox.h
//  CheckboxKit
//
//  Created by kelley.ricker on 1/22/16.
//  Copyright © 2016 GrapeCity. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
IB_DESIGNABLE
@interface Checkbox : UIControl

-(void)setChecked:(BOOL)isChecked;
-(void)setEnabled:(BOOL)isEnabled;
-(void)setText:(NSString *)stringValue;

@property IBInspectable UIColor *checkColor;
@property IBInspectable UIColor *boxFillColor;
@property IBInspectable UIColor *boxBorderColor;
@property IBInspectable UIFont *labelFont;
@property IBInspectable UIColor *labelTextColor;

@property IBInspectable BOOL isEnabled;
@property IBInspectable BOOL isChecked;
@property IBInspectable BOOL showTextLabel;
@property (nonatomic, strong) IBInspectable  NSString *text;

@end
