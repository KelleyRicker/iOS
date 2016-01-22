//
//  ViewController.m
//  CustomCheckBox
//
//  Created by kelley.ricker on 1/11/16.
//  Copyright © 2016 GrapeCity. All rights reserved.
//

#import "ViewController.h"

@interface ViewController (){
    Checkbox *cbox;
}

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    cbox = [[Checkbox alloc] initWithFrame:CGRectMake(100, 100, 250, 50)];
    cbox.text = @"Checked";
    cbox.showTextLabel = YES;
    cbox.labelFont = [UIFont systemFontOfSize:34];
    [cbox addTarget:self action:@selector(checkAction) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:cbox];
}
- (void) checkAction{
    if (cbox.isChecked == true) {
        cbox.text = @"Checked";
    }
    else{
        cbox.text = @"Unchecked";
    }
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
