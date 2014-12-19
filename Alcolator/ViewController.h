//
//  ViewController.h
//  Alcolator
//
//  Created by Matthew Yang on 12/11/14.
//  Copyright (c) 2014 Tmrw, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) UITextField *beerPercentTextField;
@property (weak, nonatomic) UILabel *resultLabel;
@property (weak, nonatomic) UISlider *beerCountSlider;

- (void)buttonPressed:(UIButton *)sender;
- (void)sliderValueDidChange:(UISlider *)sender;

@end

