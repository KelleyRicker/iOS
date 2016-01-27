//
//  Checkbox.h
//  Checkbox
//
//  Created by kelley.ricker on 1/19/16.
//  Copyright © 2016 GrapeCity. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Checkbox : UIControl

-(void)setChecked:(BOOL)isChecked;
-(void)setEnabled:(BOOL)isEnabled;
-(void)setText:(NSString *)stringValue;

@property UIColor *checkColor;
@property UIColor *boxFillColor;
@property UIColor *boxBorderColor;
@property UIFont *labelFont;
@property UIColor *labelTextColor;

@property BOOL isEnabled;
@property BOOL isChecked;
@property BOOL showTextLabel;
@property (nonatomic, strong) NSString *text;

@end
